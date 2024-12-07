#include<iostream>
using namespace std;

int countzero(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    int res=0;
    while(fact%10==0){
        res++;
        fact=fact/10;
    }
    return res;
}

int main(){
    int n;
    cout<<"enter a value:";
    cin>>n;
    cout<<"trailing zero="<<countzero(n);
    return 0;
}