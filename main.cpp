#include <bits/stdc++.h>
#include "check_input.h"
using namespace std;

int main()
{

    cout<<"click * to begin game"<<endl ;
    char res ;
    cin>>res ;

    checker(res) ;


    int start1 = playerdecide() ;
    if (start1%2 == 0)
    {
        cout<<"player1 starts first"<<endl ;
    }
    else
    {
        cout<<"player2 starts first"<<endl ;
    }
    int start2 ;

    if (start1 == 0)
        start2 = 1 ;
    else
        start2 = 0 ;

    int arr1[2] ; //For storing the scores of both players

    int scores_cal() ;


    return 0;
}
