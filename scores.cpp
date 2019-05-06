#include<bits/stdc++.h>
using namespace std ;

int scores_calc()
{
    srand(time(0)) ;

    int res = 0 ;
    int x ;
    x = (rand()+1)%10 ;
    if (x != 0)
    {
        cout<<x<<endl ;
        res = res + x ;
    }
    else
    {
        break ;
    }
    //while ((rand()+1)%10 != 0)
    //{
     //   cout<<(rand()+1)%10<<"  " ;
       // res = res + (rand()+1)%10 ;
    //}

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
