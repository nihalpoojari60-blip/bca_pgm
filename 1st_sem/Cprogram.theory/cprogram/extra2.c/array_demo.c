//pgm to store and display 5 subjects marks 
//for students
#include<stdio.h>
int main(){ 
    int my_marks[5];  ///declares an array "my_marks" with size  5 of 'INT' datatype
    int sub_marks[5];     ///declares an array "submarks" with size  5 of 'INT' datatype
   //storing data/array initialization-array_name [index]=data/value;
   sub_marks[0]=80;            ///stores  '80' in  an array position whose index is '0'
   sub_marks[1]=78;
   sub_marks[2]=68;
   sub_marks[3]=58;
   sub_marks[4]=88;  ////////refered as staic array initialization
   printf("first subject mark:%d\n",sub_marks[0]); ////will fetch first  array element from 'sub_mark'
   printf("seacond subject mark:%d\n",sub_marks[1]); ////will fetch first  array element from 'sub_mark'
   printf("third subject mark:%d\n",sub_marks[2]); ////will fetch first  array element from 'sub_mark'
   printf("fourth subject mark:%d\n",sub_marks[3]); ////will fetch first  array element from 'sub_mark'
   printf("fifth subject mark:%d\n",sub_marks[4]); ////will fetch first  array element from 'sub_mark'
   ///dynamic initialization of my_marks   printf("enter the first subject mark:[int data]");
   for (int i =0;i<5;i++){
     printf("enter the first subject mark:[int data]"); 
     scanf("%d",my_marks[0]);    

   } 
   printf("enter the first subject mark:[int data]"); 
   scanf("%d",my_marks[0]);    //////stored in the 1st location 
   printf("enter the second subject mark:[int data]");
   scanf("%d",my_marks[1]);     
   printf("enter the third subject mark:[int data]");
   scanf("%d",my_marks[2]);    
   printf("enter the fourth subject mark:[int data]");
   scanf("%d",my_marks[3]);    
   printf("enter the fifth subject mark:[int data]");
   scanf("%d",my_marks[4]);    
   
   
   printf("my sub1 mark:%d\n",my_marks[0]);
   printf("my sub2 mark:%d\n",my_marks[1]);
   printf("my sub3 mark:%d\n",my_marks[2]);
   printf("my sub4 mark:%d\n",my_marks[3]);
   printf("my sub5 mark:%d\n",my_marks[4]);
     
 
} 
