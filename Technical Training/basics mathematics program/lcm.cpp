#include<iostream>
using namespace std;

int lcm(int x, int y){
    int res=max(x,y);
    while(true){
    if(res%x==0 && res%y==0)
    return res;
    res++;
    }
    return res;
}

int main(){
    int a,b;
    cout<<"enter the value of a and b:";
    cin>>a>>b;
    cout<<"lcm="<<lcm(a,b);
}