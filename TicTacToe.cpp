using namespace std;
# include <iostream>
#include <vector>
#include <string>


vector< vector<string> > CreateBoard (){
    vector< vector<string> > vec;
    
    for (int i = 0; i<3 ; i++)
    {
        for(int j = 0; j<3;j++)
        {
            vec[i][j] = " ";
        }
    }
    return vec;
}

void DisplayBoard(vector< vector<string> > vec)
{
        for (int i = 0; i<3 ; i++)
    {
            cout<<"|";
        for(int j = 0; j<3;j++)
        {
            cout<< vec[i][j]<<"|";
        }
            cout<<endl;
    }
}