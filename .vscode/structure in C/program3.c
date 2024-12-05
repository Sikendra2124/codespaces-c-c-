#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int fee;
};
void main(){
struct student s1,s2={1,"xyz",2000},s3;
s1=s2;
s3.rollno=s1.rollno;
strcpy(s3.name,s1.name);
s3.fee=s1.fee;
printf("after copying in s3 variable");
printf("\nroll no:%d",s3.rollno);
printf("\nname:%s",s3.name);
printf("\n fee:%d",s3.fee);
}