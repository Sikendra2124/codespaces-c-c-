#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random_number,guess,attempts=0;
    srand(time(0));
    random_number=rand()%100+1;
    printf("choose my selected guess number");
    while(1){
        printf("enter your guess");
    scanf("%d",&guess);
    attempts++;
    if(guess>random_number){
        printf("lower numbwr please!");
    }else if(guess<random_number){
        printf("higher number please!");
    }else{
        printf("congratulations! you hsve selected a correct number %d",attempts);
        break;
    }

}
return 0;
}
