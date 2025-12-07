#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter number of rows = ";
    cin>>n;

    for(int i = 1;i<=n;i++){
        int val = i;
        for(int j = 1;j<=n;j++){
            if((i+j)<=n){
                cout<<" ";
            }
            else 
            cout<<"* ";

        }
        cout<<endl;

    }
    return 0;
}


