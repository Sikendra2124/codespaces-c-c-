#include<iostream>
using namespace std;

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