#include<stdio.h>
int main(){
    int size;
   // int n;
    
    
    printf("enter the size of array:");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        printf("enter an element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    //bubble sort-------------------s
      for(int i=0;i<size-1;i++){
        for (int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
      }
    //dispaly element
    printf("the elements are :\n");
      for(int i=0;i<size;i++){
    
        printf("%d\n",arr[i]);
    }
            
    return 0;
    
}