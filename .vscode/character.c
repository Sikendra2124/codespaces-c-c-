#include<stdio.h>
int main()
{
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        printf("character %c is vowel",c);
    }else{
        printf("character %c is consonent",c);
    }
    return 0;
}