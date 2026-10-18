#include<stdio.h>
 
int main(){

    int arraySize=read_array_size();      /////// / calling method or functions and stores returned value
    int isvalid= validate_array_size(arraySize);      ///////////passong array size ; int array_size=arraysize
    while (isvalid==0){
        int arraySize_array_size();
        int validated=validate_array_size(arraySize);
        if(validated==1){

        }
        printf("array size is not validated try again......");


    }
    
}
///reads array size from keyboard... 
int read_array_size(){
    int size;        ////local variable(defined inside  the  function .hence it is called local variable)
    printf("enter the size of array[>4]:");
    scanf("%d",& size);
    return size;
}
int validate_array_size(int array_size){
    if (array_size>=4){
        return 1;              ////////////////not declaring boolean value
    }
    else{
        return 0;
    }

}
int main(){

    int arraySize=read_array_size();      /////// / calling method or functions and stores returned value
    int isvalid= validate_array_size(arraySize);      ///////////passong array size ; int array_size=arraysize
    while (isvalid==0){
        int arraySize_array_size();
        int validated=validate_array_size(arraySize);
        if(validated==1){

        }
        printf("array size is not validated try again......");
    }
    
}

