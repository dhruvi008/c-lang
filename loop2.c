#include<stdio.h>
int main(){
    int b =1608,first,last;


    last=b %10;

    while(b>=1)
    {   
        if(b<10)
        {
            first=b;
        }
        b/=10;   
    }
    printf("%d   %d",first,last);
    return 0;
}
