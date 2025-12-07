#include<iostream>
#include<string>
using namespace std;

class Mustasin {
public:
    string name;

private:
    float cgpa;

public:
    void setCgpa(float x){
        cgpa = x;
    }

    void getpercentage(){
        cout << (cgpa * 10) << endl;
    }
};

int main() {
    Mustasin s1;

    s1.name = "Mustasin";
    cout << s1.name << endl;

    s1.setCgpa(8.5);   // Setting CGPA
    s1.getpercentage(); // Prints % = 85

    return 0;
}
