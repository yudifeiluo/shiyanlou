#include<stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[])
{
   unsigned int x,y;
   sscanf(argv[1],"%u",&x);
   sscanf(argv[2],"%u",&y);
   printf("result is:%u\n",count(x,y));
   return 0;
}
