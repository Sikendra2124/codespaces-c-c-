#include<stdio.h>
main(){
    increment();
    increment();
    increment();
}
increment()
{
    auto int i=1;
    printf("%d\n",i);
    i=i+1;
}