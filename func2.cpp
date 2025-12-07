#include<iostream>
using namespace std;

void Sayhello()
{
    cout<<"Hello World";
    cout<<endl;
}

void assistant()
{
    Sayhello();
    cout<<"Work Done start execution ";
}
int main(){
    assistant();
    cout<<endl;
    return 0;
}
