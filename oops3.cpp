#include<iostream>
#include<string>
using namespace std;

class User {
    int id;
    string password;
public:
    string username;

    // Constructor
    User(int id) {
        this->id = id;
    }

    // Getter for id
    int getId() {
        return id;
    }

    // Setter for password
    void setPassword(string password) {
        this->password = password;
    }

    // Getter for password
    string getPassword() {
        return password;
    }
};

int main() {
    // You MUST pass an ID because constructor expects an int
    User Husa1(500);

    Husa1.username = "Saleh al Uthaymeen RA";
    Husa1.setPassword("Mecca");

    cout << "Your id is = " << Husa1.getId() << endl;
    cout << "Your user name = " << Husa1.username << endl;
    cout << "Your password is = " << Husa1.getPassword() << endl;

    return 0;
}
