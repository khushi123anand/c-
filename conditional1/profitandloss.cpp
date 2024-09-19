#include<iostream>
using namespace std;
int main(){
    int SP ,CP;
    cout<<"Enter selling price:";
    cin>>SP;
     cout<<"Enter cost price:";
    cin>>CP;
    int P,L;
    if(SP>CP){
        cout<<"customer has profit\n";
        P=SP-CP;
        cout<<P;
    }
    else if(SP==CP){
        cout<<"no profit no loss";
    }
    else{
        cout<<"customer has loss\n";
        L=CP-SP;
        cout<<L;
    }

    return 0;
}