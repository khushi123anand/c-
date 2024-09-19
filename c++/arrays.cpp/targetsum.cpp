#include<iostream>
using namespace std;
int main(){
    int arr[5] ={4,5,3,6,1};
    int targetsum=7;
    int pairs=0;
    for(int i=0;i<5;i++){
        for(int j= i+1;j<5;j++){
            if(arr[i]+arr[j]==targetsum){
                pairs++;
            }
        }
    }
     cout<<pairs<<endl;
    return 0;
}

