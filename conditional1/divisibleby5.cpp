#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n%5==0){
        cout<<"divisible by 5";
    }
    else{cout<<"shouldn't divisible by 5";}
    return 0;
}