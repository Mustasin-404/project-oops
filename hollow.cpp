#include<iostream>
using namespace std;

int main()

{
    int n =5;
    for (int i =1;i<=n;i++){
        int val= i; //5
        for(int j=1;j<=n; j++){
            int val=j;//5
            if(i==1 || i==n || j==1 ||j==n){
                cout<<"* ";
            } else {
                cout <<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}