#include<iostream>
using namespace std;

void myfunc(int * ptr){
     ptr[4]= 1000;
     cout<<ptr;
     cout<<endl;
}


int main(){
    int arr[5]={5,4,9,2,8};
     myfunc(arr); //passing array name is eq. to passing pointer
     cout<<arr[4]<<endl;
     return 0;
}