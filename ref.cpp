#include<iostream>
using namespace std;
void isChange(int (&b)){
    b=40;
}

int main(){
    int a = 10;
    isChange(a);
    cout<< "The number is = " << a <<endl;
    return 0;
}