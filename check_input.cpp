#include<bits/stdc++.h>
using namespace std ;
void checker(char c)
{
    if ( c == '*')
    {
        cout<<"game starts"<<endl ;
    }
    else
    {
        char c1 ;
        cout<<"enter * to begin game"<<endl ;
        cin>>c1 ;
        checker(c1) ;
    }
}

int playerdecide()
{
    srand(time(0)) ;
    int j = rand()%2 + 1 ;
    return j ;
}
