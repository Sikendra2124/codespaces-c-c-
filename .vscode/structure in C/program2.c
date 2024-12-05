#include<stdio.h>
struct student
{
    int rollno;
    char name[10];
    int fee;
};
void main(){
    struct student s;
    printf("enter roll,name and fee:");
    scanf("%d %s %d",&s.rollno,&s.name,&s.fee);
    printf("your accepted data");
    printf("\nyour name:%s",s.name);
    printf("\nyour rollno:%d",s.rollno);
    printf("\nyour fee:%d",s.fee);
}
