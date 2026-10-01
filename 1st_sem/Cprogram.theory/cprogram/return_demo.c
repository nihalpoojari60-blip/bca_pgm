#include <stdio.h>
int rollnumber ,python_marks,c_marks,sum;
float average,cgpa;
void getstudentsdata(){
    printf("enter the rollnumber");
    scanf("%d",&rollnumber);
    printf("enter the subjects marks");
    
    
    
}
int gettotal(){
    sum=python_marks+c_marks;
    return sum;

}
float getaverage(){
    average=sum/2;
    return average;
}
float getcgpa(){
    cgpa=average/9.5;
    return cgpa;
}
int displaystudentdetails(){
    printf("rollno:%d",rollnumber);
         
}






int main(){
    getstudentsdata();
   int total= gettotal();
    getaverage();
    getCGPA();
    Displaystudentdetails();

    printf("the total is :%d",total);

}