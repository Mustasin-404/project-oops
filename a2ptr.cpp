#include <iostream>
using namespace std;

void mul(int &a,int &b,int &c){
    a=a*2;
    b=b*2;
    c=c*2;
}
int main(){
    int x=1,y=2,z=3;
    mul(x,y,z);
    cout<<x<<y<<z<<endl;
    return 0;
}