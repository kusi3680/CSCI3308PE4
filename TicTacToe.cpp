using namespace std;

int * CreateBoard ();
{
    static int arr[3][3];
    
    for (int i = 0; i<3 ; i++)
    {
        for(int j = 0; j<3;j++)
        {
            arr[i][j] = -1;
        }
    }
    
    return arr;
}

void DisplayBoard(vector< vector<string> > board)
{
        for (int j = 0; j<3 ; j++)
    {
        for(int i = 0; i<3;i++)
        {
            cout<< board[j][i]<<" ";
        }
            cout<<endl;
    }
}
