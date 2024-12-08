#include<iostream>
using namespace std;

//this logic algorith is known as euclidean algorithm
int gcd(int x, int y){
    if(y==0){
        return x;
    }else
    return gcd(x,x%y);
}

int main(){
    int a,b;
    cout<<"enter the value of a and b:";
    cin>>a>>b;
    cout<<"hcf="<<gcd(a,b);
}