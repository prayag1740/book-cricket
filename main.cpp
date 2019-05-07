#include <bits/stdc++.h>
#include "check_input.h"
#include "scores.h"
using namespace std;

int main()
{

    cout<<"click * to begin game"<<endl ;
    char res ;
    cin>>res ;

    checker(res) ;


    int start1 = playerdecide()%2 ;
    if (start1 == 0)
    {
        cout<<"player1 starts first"<<endl ;
    }
    else
    {
        cout<<"player2 starts first"<<endl ;
    }

    cout<<endl ;
    int start2 ;

    if (start1 == 0)
        start2 = 1 ;
    else
        start2 = 0 ;

    int arr1[2] ; //For storing the scores of both players

    int result = scores_calc() ;
    //int result = 0 ;
    cout<<endl ;

    arr1[start1] = result ;
    if (start1 == 0)
    {
        cout<<"Player2 turn now"<<endl ;
    }
    else
    {
        cout<<"Player1 turn now"<<endl ;
    }

    int result2 = scores_calc2() ;
    arr1[start2] = result2 ;
    cout<<endl ;
    cout<<endl ;
    cout<<"Player 1 score is "<<arr1[0]<<endl ;
    cout<<"Player 2 score is "<<arr1[1]<<endl ;
    //int maxy ; //position of winner
    if (arr1[0] > arr1[1])
    {
        //maxy = 0 ;
        cout<<"Player1 wins the game" ;
    }
    else
    {
        //maxy = 1 ;
        cout<<"Player2 wins the game" ;
    }
    return 0;
}
