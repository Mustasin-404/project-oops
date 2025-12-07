#include<iostream>
#include<string>
using namespace std;

class bot{
    public:
    bot(){
        cout<<"Constructer is called ...object is being craeted"<<endl;
    }
    void start(){
        cout<<"Car has started...\n";
    }
    void stop(){
        cout<<"Car has stopped.... \n";
    }
};
int main(){
    bot s1;
    return 0;
}
