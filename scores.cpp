#include<bits/stdc++.h>
using namespace std ;

int scores_calc()
{
    srand(time(0)) ;
    static int res = 0 ;
    int i = 1 ;
   while (true)
   {
       int j = (rand()+i*i)% 10 ;
       if (j == 0)
       {
           return res ;
       }
       else
       {
           cout<<j<<" " ;
           res = res + j ;
           i++ ;
       }
   }


}

int scores_calc2(int checker)
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

       if (res > checker)
       {
           return res ;
       }
   }

}
