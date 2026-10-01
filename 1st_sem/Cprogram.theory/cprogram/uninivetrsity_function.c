#include <stdio.h>
int rollnumber ,python_marks,c_marks,sum,average;
void getstudentsdata(){
    printf("enter the rollnumber");
    scanf("%d",&rollnumber);
    printf("enter the subjects marks");
}
void gettotal(){
    sum=python_marks+c_marks;

}
void getaverage(){
    average=sum/2;
}
void displaystudentdetails(){
         
}





int main(){
    getstudentsdata();
    gettotal();
    getaverage();
    getCGPA();
    Displaystudentdetails();

}