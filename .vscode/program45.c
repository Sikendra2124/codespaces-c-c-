#include<stdio.h>
int main()
{
    int number,i=1;
    printf("enter the number for the table");
    scanf("%d",&number);
    do{
        printf("%d * %d = %d\n",number,i,(number*i));
        i++;
    }
    while(i<=10);
    return 0;
}