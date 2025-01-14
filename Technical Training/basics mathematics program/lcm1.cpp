#include<iostream>
using namespace std;

int gcd(int x, int y){
    if(y==0){
        return x;
    }else
    return gcd(x,x%y);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}


