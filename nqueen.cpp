#include<iostream>
#include<vector>
using namespace std;
bool rakhsktahukya(int col,int row,int n,vector<vector<int>> board){
	 int duprow=row;
	 int dupcol=col;
	// case1
	while(col>=0)
	{
		if(board[row][col]==1)
		{
			return false;
		}
		col--;
	}
	col=dupcol;
	//case2
	while(col>=0 && row>=0)
	{
		if(board[row][col]==1)
		{
			return false;
		}
		col--;
		row--;
	}
	row=duprow;
	col=dupcol;
	//case3
	while(row<n && col>=0)
	{
		if(board[row][col]==1)
		{
			return false;
		}
		row++;
		col--;
	}

	return true;



}
void nqueen(int col,int n,vector<vector<int>> &board,vector<vector<string> > &ans)
{
	//base case
	if(col==n)
	{
		vector<string>temp;
		for(int i=0;i<board.size();i++)
		{
			string str;
			for(int j=0;j<board.size();j++)
			{
				if(board[i][j]==0)
				{
					str.push_back('.');
				}
				else{
					str.push_back('Q');
				}
				cout<<board[i][j]<<" ";
			}
			temp.push_back(str);
			cout<<endl;
		}
		ans.push_back(temp);
		cout<<endl;

		
		return;
	}

	for(int row=0;row<n;row++)
	{
		if(rakhsktahukya(col,row,n,board))
		{ 
			board[row][col]=1;
		    nqueen(col+1,n,board,ans);
		    board[row][col]=0; //backtracking things are done here !!!
		}
		
	}
}
int main()
{
	vector<vector<string>> ans;
	int n;
	cin>>n;
	vector<vector<int>> board(n,vector<int>(n, 0));
	nqueen(0,n,board,ans);
	cout<<" ans is : "<<ans.size();
	
}