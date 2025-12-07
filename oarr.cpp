#include<iostream>
using namespace std;

int main(){
    int arr[5]={7,5,2,9,4};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0;i<=n-1;i++){
        cout<<arr[i]<<" ";
        
        
       }
       cout<<endl;
       return 0;

}