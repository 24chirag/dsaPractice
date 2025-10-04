#include<iostream>
using namespace std;
bool isSafe(int row,int col,int n,vector<vector<int>> &board ,vector<vector<int>> &visited)
{
	if((row>=0 && row<n) && (col>=0 && col<n))
	{

		if(board[row][col]==1)
		{
			if(visited[row][col]==0)
			{
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}
	return false;

}
void solve(int row,int col,int n,vector<vector<int>> &board, vector<vector<int>> &visited,string temp,vector<string>&ans)
{
	//base case 
	cout<<endl;
	if(row == n-1 && col ==n-1)
	{
		visited[row][col]=1;
		// for(int i=0;i<n;i++)
		// {
		// 	for(int j=0;j<n;j++)
		// 	{
		// 		cout<<visited[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		// cout<<endl;
		ans.push_back(temp);
		temp.pop_back();
		visited[row][col]=0;
		return;
	}

	//case1 move down 
	if(isSafe(row+1,col,n,board,visited))
	{
		visited[row][col]=1;
		solve(row+1,col,n,board,visited,temp+'D',ans);
		visited[row][col]=0;
	}
	//case2 move up
	if(isSafe(row-1,col,n,board,visited))
	{
		visited[row][col]=1;
		solve(row-1,col,n,board,visited,temp+'U',ans);
		visited[row][col]=0;
	}
	//case3 move left 
	if(isSafe(row,col-1,n,board,visited))
	{
		visited[row][col]=1;
		solve(row,col-1,n,board,visited,temp+'L',ans);
		visited[row][col]=0;

	}
	//case4 move right 
	if(isSafe(row,col+1,n,board,visited))
	{
		visited[row][col]=1;
		solve(row,col+1,n,board,visited,temp+'R',ans);
		visited[row][col]=0;

	}

}
int main()
{
	int n;
	cout<<"enter the value for n x n board ";
	cin>>n;
	vector<vector<int>> board(n,vector<int>(n,0));
	cout<<"take input  for a maze "<<endl;
	for(int i =0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>board[i][j];
		}
	}

	vector<vector<int>> visited(n,vector<int>(n,0));
	vector<string>str;

	solve(0,0,n,board,visited,"",str); 
	cout<<endl;
	cout<<"printing string path as well ";
	for(int i=0;i<str.size();i++)
	{
		cout<<str[i]<<" ";
	}
	cout<<endl;



}