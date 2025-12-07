#include<iostream>
using namespace std;
void myFunc(int arr[],int n){
     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" , ";
     }
     cout<<endl;
     }
int main(){
    int arr[]={1,4,8,3,7};
    int n = sizeof(arr)/sizeof(int);
    cout<<"array size = "<<n<<endl;
    myFunc(arr,n);
    
    return 0;


}