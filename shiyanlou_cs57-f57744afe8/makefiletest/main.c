#include<stdio.h>
#include<stdlib.h>
int main(int argc , char *argv[])
{
  int x,y ;
  sscanf(argv[1],"%u",&x) ;
  sscanf(argv[2],"%u",&y) ;
  printf("func1:%u\n", func1(x,y)) ;
  printf("func2:%u\n", func2(x,y)) ;
  return 0 ;
}
