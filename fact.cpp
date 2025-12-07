#include<iostream>
using namespace std;

int factorial(int n){//4
int fact=1; //1
for(int i=1;i<=n;i++){
    fact=fact*i;
    cout<<"After fact = " <<fact<<endl;
}
return fact;
}

int main(){
    cout<<factorial(5)<<endl;
    return 0;
}