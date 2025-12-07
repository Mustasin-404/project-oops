#include<iostream>
#include<string>
using namespace std;
void func(){
    int arr[100]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return;
}
int main(){
    func();

}