#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<" Divisible by 5 or 3 but Not divisible by 15 ";
        }
        else{
            cout<<"Not matching condition";
        }
    }
    else{
       cout<<" not matching condition";
    }
    return 0;
}