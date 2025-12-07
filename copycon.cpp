#include<iostream>
#include<string>
using namespace std;
class sha{
    public:
    string carname;
    string colour;
   
    sha(string carname,string colour){
        this->carname=carname;
        this->colour=colour;
    }
    sha(sha &original){
        cout<<"Copying original to new "<<endl;
        carname = original.carname;
        colour =original.colour ;

    }

};
int main(){
    sha c1("maruti 800","black");
    sha c2(c1); //copy Constructor

    cout<<"Your carName is = "<<c2.carname<<endl;
    cout<<"Your car colour is = "<<c2.colour<<endl;
    return 0;

}