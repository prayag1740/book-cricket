#include<bits/stdc++.h>
using namespace std ;

int scores_calc()
{
    srand(time(0)) ;

    int res = 0 ;

    int J = (rand()+1)%10 ;
    while (J != 0)
    {
        cout<<J<<"  " ;
        res = res + J ;
    }

    return res ;

}

int scores_calc2()
{
    srand(time(0)) ;

    int res = 0 ;
    while (rand()%10 != 0)
    {
        cout<<rand()%10<<"  " ;
        res = res + rand()%10 ;
    }

    return res ;

}
