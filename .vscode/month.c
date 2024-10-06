#include<stdio.h>
#include<string.h>
int main()
{
    char month[100];
    printf("enter the desired month");
    scanf("%s",&month);
    printf("%s",month);
    if(month=="january" || month=="may"){
        printf("%s month have 30 days");
    }else if(month=="february"){
        printf("%s month have 28 days");
    }else{
        printf("%s month have 31 days");
    }
    return 0;
}