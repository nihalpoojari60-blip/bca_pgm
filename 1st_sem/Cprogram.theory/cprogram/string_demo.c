///declare a charecter array and initialize with your name
#include<stdio.h>
int main(){
    char name[40]="  ";
    //char last_name[20]="  ";
    printf("your name is:");
    fgets(name,sizeof(name),stdin);
    printf("the name is:%s",name);
    //printf("enter the last name :",last_name);
   // fgets(last_name,sizeof(last_name),stdin);
    //printf("the last_name:%s",last_name);
    printf("[%s]",name );
    printf("[%10s]",name );
    printf("[%-10s]",name );
    printf("[%.3s]",name );
    
}
