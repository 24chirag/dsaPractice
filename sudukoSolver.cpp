#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
  bool isSafe(char val, int row , int col , vector<vector<char>>& board)
   {

    //check rowwise 
    int n= board.size();
    int boxsize = sqrt(n);
    for(int i=0;i<n;i++)
    {
        if(board[i][col]==val)
        {
            return false;
        }
    }
    //check columnwise
    for(int i=0;i<n;i++)
    {
        if(board[row][i]==val)
        {
            return false;
        }
    }
    //check inBox
    int rowstart= row - (row%boxsize);
    int colstart = col- (col%boxsize);
    for(int i=rowstart;i<rowstart+boxsize;i++)
    {
        for(int j=colstart;j<colstart+boxsize;j++)
        {
            if(board[i][j]==val)
            {
                return false;
            }
        }
    }

    return true;

   }
    bool solve(vector<vector<char>>& board)
    {
        int n = board.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='.')
                {
                    for(char val='1';val<='4';val++)
                    {
                        if(isSafe(val,i,j,board))
                        {
                            board[i][j]=val;
                            bool wegetans;
                            wegetans=solve(board);
                            if(wegetans)
                            {
                                return true;
                            }
                            else{
                                board[i][j]='.';
                               
                               
                            }
                        }
                    }
                    return false;

        
                }
            }
        }
        return true;
    }
int main()
{
	
	
	int n;
	cin>>n;
	vector<vector<char> > board(n,vector<char>(n,'.'));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>board[i][j];
		}
	}

	solve(board);

	cout<<"your board is here "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}

	

}