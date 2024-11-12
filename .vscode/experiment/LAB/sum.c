#include<stdio.h>
int Sum(int n) 
{ 
    if (n <= 1) 
        return n; 
    return n + Sum(n - 1); 
} 
  

int main() 
{ 
   int n; 
   printf("enter value of n");
   scanf("%d",&n);
   int c=Sum(n); 
   printf("%d",c);
    return 0; 
} 