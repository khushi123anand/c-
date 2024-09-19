#include<iostream>
using namespace std;
int main(){
    int n;
   
    cout<<"Enter a integer:"<<endl;
     cin>>n;
    if(n>=1 && n<=9)
    {
        if(n==1) { cout<<"one"<<endl;}
        if(n==2){ cout<<"two"<<endl;}
        if(n==3){ cout<<"three"<<endl;}
        if(n==4){ cout<<"four"<<endl;}
        if(n==5){ cout<<"five"<<endl;}
        if(n==6){ cout<<"six"<<endl;}
        if(n==7){ cout<<"seven"<<endl;}

    }
    else 
    {
        cout<<"Greater than 9";
    }
    return 0;
}