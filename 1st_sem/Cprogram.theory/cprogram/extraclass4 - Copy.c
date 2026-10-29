#include<stdio.h>
int main(){
    int choice;
    int a;
    int b;
    
    while(1){
        printf("1.add");
    printf("2.sub");
    printf("3.multi");
    printf("4.exit");
    printf("enter your choice:");
    scanf("%rintd",choice);

        switch (choice)
        {
        case 1:
            printf("enter 2 numbers:");
            scanf("%d %d",&a,&b);
            printf("the sum of 2 no is:",a+b);
            break;
        case 2:
            printf("enter 2 numbers:");
            scanf("%d %d",&a,&b);
            printf("the sub of 2 no is:",a-b);
            break;
        case 3:
            printf("enter 2 numbers:");
            scanf("%d %d",&a,&b);
            printf("the multi of 2 no is:",a*b);
            break;
        case 4:
            printf("invalid choice:");
            return 0;
            

        
        default:
             printf("invalid choice.....");
            break;
        }
        
    
        
        
        
    }
    

        

    



}