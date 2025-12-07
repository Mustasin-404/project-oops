#include<iostream>
using namespace std;
int main(){

    int x = 5,y=10;
    int*ptr1=&x;
    int*ptr2=&y;
    ptr2=ptr1;

    cout<<ptr2<<endl<<ptr1<<endl<<&x<<endl;
    return 0;

}