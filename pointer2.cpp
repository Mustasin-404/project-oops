#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<&a<<" = "<<*ptr<<endl;

    *ptr=50;
    cout<<&ptr<<" = "<<a<<endl;
    return 0;
}