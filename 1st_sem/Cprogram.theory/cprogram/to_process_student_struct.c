#include<stdio.h>

 struct student{
    int rollno;
    char name[10];
    int mark[3];
    int total;                      //////////////////to store total marks 
    float average;                   ////////to store average mark
};
///method initialization
struct student students[5];
void initialize_student(){
    //struct student student_list[5];
    for (int i=0;i<5;i++){
        printf("enter the student data:",i+1);
        printf("enter the rollno:");
        scanf("%d",&students[i].rollno);
        printf("enter the student name:");
        scanf("%s",students[i].name);
    
    

      for(int j=0;j<=3;j++){
         printf("enter the subject marks=%d");
         scanf("%d",&students[i].mark[j]);
        }
       



    
    }



}
void get_totatl(){
    for(int i=0;i<5;i++){
        students[i].total=students[i].mark[0]+students[i].mark[1]+students[i].mark[2];
    }

}
void get_average(){
    for(int i=0;i<5;i++){
        students[i].average=students[i].total/300*100;

    }
}
void display_student(){
    for(int i=0;i<5;i++){
        printf("rollno\t\tname\t\tsub\t\tsubmark1\t\tsubmark2\t\tsubmark3\t\ttotal\t\taverage");
    }

}





int main(){
    struct student first;
    struct student second;
    //array of structure
    struct student students[5];
    initialize_student();
    get_totatl();
    get_average();

}

