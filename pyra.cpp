#include<iostream>
using namespace std;

int main(){
    int n;
   cout<<"Enter number of rows : = ";
   cin>>n; //5
   for(int i = n;i>=1;i--){
    int val = i; //4
    for(int j=1;j<=n-i;j++){
        int val = j;//
        cout<<" ";
    }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
