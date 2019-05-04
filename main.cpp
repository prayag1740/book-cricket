#include <bits/stdc++.h>
#include "check_input.h"
using namespace std;

int main()
{

    cout<<"click * to begin game"<<endl ;
    char res ;
    cin>>res ;

    checker(res) ;


    int start = playerdecide() ;
    if (start%2 == 0)
    {
        cout<<"player1 starts first"<<endl ;
    }
    else
    {
        cout<<"player2 starts first"<<endl ;
    }


    return 0;
}
