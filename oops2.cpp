#include<iostream>
#include<string>
using namespace std;

class User{
    int id;
    string password;
public:
     string username;
     User(int id){
        this->id=id;
    }
    int getid(){
        return id;
    }
    void setpassword(string password){
        this->password=password;
    }
    string getpassword(){
        return password; 
    }
};
int main(){
    User Husa1(500);
    Husa1.username="Saleh al Uthaymeen RA";
    Husa1.setpassword("Mecca");

    
    cout <<"Your user name = "<<Husa1.username<<endl;
    cout<<"Your password is = "<<Husa1.getpassword()<<endl;
    return 0;
}