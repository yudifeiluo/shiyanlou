#include<stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[])
{
  unsigned int x,y;
  x = 12 ;
  y = 23 ;
  int i = 1 ;
  for (i=1 ; i<10 ; i++)
   { 
     ++x ;
     ++y ;
     printf("getvalue:%u\n",svalue(x,y)) ;
   }
  return 0 ;
}
 int svalue(int arg1 , int arg2)
   {
      if(arg1>0 && arg2>0)
        {
          return (arg1+arg2) ;
        }
      else
       {
         return 0 ;
       }
   }
