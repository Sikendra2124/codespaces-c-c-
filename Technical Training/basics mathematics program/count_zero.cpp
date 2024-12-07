#include<iostream>
using namespace std;

int countzero(int x){
    int count=0;
    for(int i=5;i<=x;i=i*5){
        count=count+x/i;
    }
    return count;
}

int main(){
    int n;
    cout<<"enter a value:";
    cin>>n;
    cout<<"trailing zero="<<countzero(n);
}