#include<iostream>
using namespace std;
int main(){
    int array[]={3,7,18,9,11};
    int key=9;
   int ans= -1;
    for(int i=1;i<5;i++){
        if (array[i]==key){
           ans=i;
        }
    }
    cout<<"the element key is present at index:"<<ans<<endl;
    return 0;
}