#include<stdio.h>
int main(){
    int data[5];
    int new_data,index;
    for(int i=0;i<4;i++){
        printf("%d input the values:",i+1);
        scanf("%d",&data[i]);
    }
    printf("enter the new data:");
    scanf("%d",&new_data);
    printf("enter the index values:");
    scanf("%d",&index);
    //insertion process to insert 'new data' at index 'index'
    data[4]=data[3];
    data[3]=data[2];
    data[2]=new_data;
    for(int i=0;i<5,i++);
    printf("%d",data[i]);

    return 0; 
    


}    

   
    

    
