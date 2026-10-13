#include<stdio.h>
int main(){
    int mark;
    

    printf("enter the total marks");
    scanf("%d",&mark);
    if (mark>70){
        printf("first class");
    }
    else if(mark<70 && mark>50){
        printf("second class");

    }
    else{
        printf("third class");

    }
    return 0;



}



