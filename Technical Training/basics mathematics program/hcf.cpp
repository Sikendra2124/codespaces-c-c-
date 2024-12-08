#include<iostream>
using namespace std;

//this logic algorith is known as euclidean algorithm
int gcd(int x, int y){
    while(x!=y){
        if(x>y){
            x=x-y;
        }else{
            y=y-x;
        }
    }
    return x;
}

int main(){
    int a,b;
    cout<<"enter the value of a and b:";
    cin>>a>>b;
    cout<<"hcf="<<gcd(a,b);
}