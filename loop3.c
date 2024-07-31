#include<stdio.h>
int main()
{
   int n, count;
   count=0 ;
   printf("enter any number");
   scanf("%d" ,&n);


  while(n>=1 ){

        n/=10;
        count ++;
  }
  printf("%d",count); 
  return 0;

}