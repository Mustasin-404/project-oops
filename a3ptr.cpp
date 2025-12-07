#include<iostream>
using namespace std;
int main(){
    int a = 32;
    int *ptr=&a;
    char ch= 'A';
    char &cho = ch;
    cho = cho+a;
    *ptr=*ptr+ch;
    cout<<a<< " , " <<ch<<endl;
    return 0;

}