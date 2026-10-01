//#include<stdio.h>
//int main(){
    //int i=1;
   // do{
        //printf("%d\n",i);
        //i++;
   // }
    //while(i<=5);
    //return 0;
//}

#include<stdio.h>
int main(){
    int choice , firstnumber , secondnumber;
    printf("-------------- welcome to my calculator-----------------\n");
    printf("1.addition\n");
    printf("subtraction\n");
    printf("multiplication\n");
    printf("division\n");
    printf("enter your choice:\n");
    scanf("%d",&choice);
    if (choice==1){
        //addition
        printf("enter the firstnumber:\n");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber:\n");
        scanf("%d",&secondnumber);
        int sum=firstnumber+secondnumber;
        printf("the sum is: %d",sum);
    }                         
    if (choice==2){
        //subtraction
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber");
        scanf("%d",&secondnumber);
        int difference=firstnumber-secondnumber;
        printf("the difference is: %d",difference);
    }
    if (choice==3){
        //multiplication
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber");
        scanf("%d",&secondnumber);
        int multiplication=firstnumber*secondnumber;
        printf("the multiplication is: %d",multiplication);
    }
    if (choice==4){
        //division
        printf("enter the firstnumber:");
        scanf("%d",&firstnumber);
        printf("enter the secondnumber");
        scanf("%d",&secondnumber);
        int division=firstnumber/secondnumber;
        printf("the division is: %d",division);
    }
    
}     
    
        
    
    

    
