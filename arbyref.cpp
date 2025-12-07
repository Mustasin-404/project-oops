#include<iostream>
using namespace std;

void myfunc(int arr[]){
    arr[4] = 1000;
}


int main(){
    int arr[5]={5,4,9,2,8};
     myfunc(arr); //passing array name is same as passing array
     cout<<arr[4]<<endl;
     return 0;
}