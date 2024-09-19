#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"enter a number:";
    // cin>>n;
    // if(n>0){
    //     cout<<n;
    // }
    
    // else{cout<<-n;}
// method 2
    int k;
    cout<<"enter an integer:";
    cin>>k;
    if(k<0){
        k = -k;
    }
    cout<<k;
    return 0;
}
