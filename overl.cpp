#include<iostream>
#include<string>
using namespace std;

class eng{
    public:
    eng(){
        cout<<"Constructor is called without param "<<endl;
    }
    eng(string password, int id){
        cout<<"Constructor with parameter is called"<<endl;
    }
};




int main(){
    eng bit1;
    eng bit2("Mustasin",101);
    eng bit3("Aatiq",202);
    return 0;

}