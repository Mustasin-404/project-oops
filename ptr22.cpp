#include<iostream>
using namespace std;
int myfunc(int a ){
    int j = 90;
    cout<<j<<endl;
    return j;
}

int main(){
    int a = 5;
    
    myfunc(a);
    cout<<"New value = "<<a<<endl;
    return 0;

}