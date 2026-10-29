//create a structure which contains name id contactno pin of student 
//#include<stdio.h>

//structure defination.....
//struct student{
    //int id;
    //char name[10];//////name
    //char contactno[10];
    //int pin;
//};

//int main(){
    //creating structure variable 'firststudent' of type "student"
   // struct student firststudent;
    //struct student secondstudent;
    //firststudent.id=100;
    //secondstudent.id=200;
    //printf("firststudentid=\n");
    //scanf("%d",firststudent);
    //printf("secondstudentid=\n");
    //scanf("%d",secondstudent);
   /// firststudent.name[10],"rahul";
    ///secondstudent.name[6] ,"kiran";
    //firststudent.contactno[2333445543];
    //secondstudent.contactno[3455456678];
    //firststudent.pin=2334;
   /// secondstudent.pin=8765;














    #include <stdio.h>

struct Student {
    char name[50];
    int id;
    char contactno[15];   // char array so leading zeros and long numbers are safe
    int pin;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter id: ");
    scanf("%d", &s.id);

    printf("Enter contact no: ");
    scanf("%14s", s.contactno);

    printf("Enter pin: ");
    scanf("%d", &s.pin);

    printf("\n--- Student Details ---\n");
    printf("Name      : %s", s.name);
    printf("ID        : %d\n", s.id);
    printf("Contact No: %s\n", s.contactno);
    printf("Pin       : %d\n", s.pin);

    return 0;
}




    


    
