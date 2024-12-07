#include<iostream>
using namespace std;

unsigned int factorial(unsigned int x){
    if(x==0||x==1){
        return 1;
    }
    return x*factorial(x-1);
}

//driver code
int main(){
    int n;
    cout<<"enter a value:";
    cin>>n;
    cout<<"factoial ="<<factorial(n);
    return 0;
}