#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int fee;
};
void main(){
    struct student s={1,"sikendra",8000};
    printf("\n student's roll no:%d",s.rollno);
    printf("\n student's name:%s",s.name);
    printf("\n student's fee:%d",s.fee);
}