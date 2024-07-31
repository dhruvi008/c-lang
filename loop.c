#include<stdio.h>
int main(){

    char c='A';
    
    do{
        
        printf("%c ",c);
        c+=4;

    }while(c<='Z');

    printf("\n");




    return 0;
}