#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long date;
    int day,month,k,j,year;
    printf("Enter the Date in the form of : DDMMYYYY  : ");
    scanf("%ld",&date);
    year=date%10000;
    month=(date/10000)%100;
    day=date/1000000;
    j=year/100;
    k=year%100;
    int f;
    // f=(day+floor(13*(month+1)/5.0)+k+floor(k/4.0)+floor(j/4.0)+(5*j))%7;
    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }
    f=(day + (int)floor(13 * (month + 1) / 5.0) + k + (int)floor(k / 4.0) + (int)floor(j / 4.0) + (5 * j)) % 7;
    // printf("Value is : %d ",f);
    // printf("%d : %d  : %d : %d : %d ",year,month,day,j,k);
    
    switch(f){
        case 0:
        printf("The Day is : Saturday ");
        break;
        case 1:
        printf("The Day is : Sunday ");
        break;
        case 2:
        printf("The Day is : Monday ");
        break;
        case 3:
        printf("The Day is : Tuesday ");
        break;
        case 4:
        printf("The Day is : Wednesday ");
        break;
        case 5:
        printf("The Day is : Thursday ");
        break;
        case 6:
        printf("The Day is : Friday ");
        break;
        default:
        printf("I think your choice is wrong... Try again");
    }
    
    
    
    
    return 0;
}