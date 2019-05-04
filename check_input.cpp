#include<iostream>
using namespace std ;
void checker(char c)
{
    if ( c == '*')
    {
        cout<<"enter game"<<endl ;
    }
    else
    {
        char c1 ;
        cout<<"enter * to begin game"<<endl ;
        cin>>c1 ;
        checker(c1) ;
    }
}
