#include<iostream>
using namespace std;
 
bool ispalindrome(int x){
    int rev=0;
    int temp=x;
    while(temp!=0){
        int lastdigit=temp%10;
        rev=rev*10+lastdigit;
        temp=temp/10;
    }
    return (rev==x);
}

int main(){
    int n;
    cout<<"enter a value:";
    cin>>n;
    cout<<"palindrem status:"<<ispalindrome(n);
    return 0;
}