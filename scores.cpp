#include<bits/stdc++.h>
using namespace std ;

int scores_calc()
{
    srand(time(0)) ;
    static int res = 0 ;
   while (true)
   {
       int j = (rand()+1)% 10 ;
       if (j == 0)
       {
           return res ;
       }
       else
       {
           cout<<j<<" " ;
           res = res + j ;
       }
   }


}

int scores_calc2()
{
    srand(time(0)) ;
    static int res = 0 ;
   while (true)
   {
       int j = rand()% 10 ;
       if (j == 0)
       {
           return res ;
       }
       else
       {
           cout<<j<<" " ;
           res = res + j ;
       }
   }

}
