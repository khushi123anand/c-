#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    switch(x){
        case 1 :
        cout<<"January-31 days";
        break;
        case 2 :
        cout<<"February-28 days";
        break;
        case 3 :
        cout<<"March-31 days";
        break;
        case 4 :
        cout<<"April-30 days";
        break;
        case 5 :
        cout<<"May-31 days";
        break;
        case 6 :
        cout<<"June-30 days";
        break;
        case 7 :
        cout<<"July-31 days";
        break;
        case 8 :
        cout<<"August-30 days";
        break;
        case 9 :
        cout<<"September-31 days";
        break;
        case 10 :
        cout<<"October-30 days";
        break;
        case 11:
        cout<<"November-31 days";
        break;
        case 12 :
        cout<<"December-30 days";
        break;
        
        default :
        cout<<"Invalid number";
    }
    return 0;
}