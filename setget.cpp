#include<iostream>
#include<string>
using namespace std;

class robot{
    string name;
    float cgpa;

    public:

    //To assign name and cgpa indirectly
    void setName(string NameVal){
         name = NameVal;
    }
    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }
    // getters
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }
};

int main(){
    robot s1;
    s1.setName("Mustahsin");
    s1.setCgpa(9.9);
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;
    return 0;
}