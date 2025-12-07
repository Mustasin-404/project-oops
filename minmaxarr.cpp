#include<iostream>
using namespace std;

int main(){
    int arr[]={100,2,8,1,99,33};
    int max = arr[0];
    int min= arr[0];
    int n=sizeof(arr)/sizeof(int);
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
        for(int i = 0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The largest number in array is = "<<max<<endl;
    cout<<"The minimum number in array is = "<<min<<endl;
    return 0;
}