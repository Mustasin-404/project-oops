#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key){
    for(int i = 0;i<n;i++){
    if(arr[i]==key)
    {
      return i;
    }
}
return -1;
}




int main(){
    int arr[]={15,67,98,43,90,80,102};
    int n = sizeof(arr)/sizeof(int);
    cout<<linearsearch(arr,n,109);
    cout<<endl;
    return 0;
}