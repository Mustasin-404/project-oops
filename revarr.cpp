#include<iostream>
using namespace std;

void myfunc(int *ptr,int n){
    for(int i=n-1 ;i>=0;i--){
        
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);//6

    myfunc(arr,n);
    return 0;
}