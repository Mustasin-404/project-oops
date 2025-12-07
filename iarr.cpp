#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,9,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<"The size of array is = "<<n<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}