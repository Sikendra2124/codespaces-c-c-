#include<stdio.h>
int main(){
    auto int i=1;
    {
        {
            {
                printf("\n%d",i);
            }
            printf("%d",i);
        }
        printf("%d",i);
    }
    return 0;
}
