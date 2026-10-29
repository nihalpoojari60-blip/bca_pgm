//pgm to determine wheather the given no is below 100 or not
#include <stdio.h>
int main(){
    int integer;
    int num=100;
    printf("enter the  integer number");
    scanf("%d",&integer);
    if (integer >num){
        printf("%d is greater than %d",integer,num);

    }
    else{
        printf("%d is smaller than %d",integer,num);

    }

    

    
}
