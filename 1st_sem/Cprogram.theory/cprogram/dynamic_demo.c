#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int*p;
    p=(int*)malloc   (5*sizeof(int));


    printf("%d",p[0]);
    printf("%d",p[1]);
    printf("%d",p[2]);
    printf("%d",p[3]);
    printf("%d",p[4]);

    return 0;

    
} 

    


    

