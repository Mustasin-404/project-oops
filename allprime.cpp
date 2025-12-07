#include<iostream>
using namespace std;
bool isprime2(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void allPrimes(int n){
    for(int i=2;i<=n;i++){
        if(isprime2(i)){
            cout<< i <<" ";
        }
    }
    cout<<endl;
}
int main(){
       allPrimes(90);
return 0;
}