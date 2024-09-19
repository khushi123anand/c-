#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%5==0&&n%3==0){
        cout<<"Divisible by 5 and3";
    }
    else{
        cout<<"Not divisible by 5and 3 ";
    }
    return 0;
}