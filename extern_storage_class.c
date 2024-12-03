#include<stdio.h>
extern int count;
void increment(){
    count++;
    printf("incremented count:%d\n",count);
}