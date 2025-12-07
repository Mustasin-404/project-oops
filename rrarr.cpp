#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr=&a;
    cout<<ptr<<endl;
    int arr[]={1,2,9,12,5};
    cout<<arr<<endl;
    cout<<(arr+1)<<endl;
    return 0; //ARRAY NAME AND. POINTER HAVE SAME FUNCTION.
}