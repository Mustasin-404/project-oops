#include <iostream>
using namespace std;

float calculateArea(float base, float height) {
    return (base * height) / 2;
}

int main() {
    float base, height;
    
    cout << "Enter the base of the triangle: ";
    cin >> base;
    
    cout << "Enter the height of the triangle: ";
    cin >> height;
    
    float area = calculateArea(base, height);
    
    cout << "The area of the triangle is: " << area << endl;
    
    return 0;
}
