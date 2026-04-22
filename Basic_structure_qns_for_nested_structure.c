#include<stdio.h>
struct marks{
    int subject1;
    int subject2;
    int subject3;
};
struct student{
    char name[20];
    int rollno;
    struct marks m;
};
void main(){
    struct student s;
    printf("Enter the details for student S \n");
    printf("Enter name :\n");
    scanf("%s",s.name);
    printf("Enter your roll no: \n");
    scanf("%d",&s.rollno);
    printf("Enter your marks in subjects:\n");
    scanf("%d",&s.m.subject1);
      scanf("%d",&s.m.subject2);
        scanf("%d",&s.m.subject3);

    printf("Name=%s \t RollNo=%d \t Marks = %d %d %d\t",s.name,s.rollno,s.m.subject1,s.m.subject2,s.m.subject3);
}
