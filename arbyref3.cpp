
#include <iostream>
using namespace std;
void printarray(int a[10])
{
    cout<<"Your address is =  "<<a;
    for (int i = 0; i < 5; i++){
        a[i] = a[i] + 5;
        cout<<a[i];
    }
}

int main()
{
    
    int a[5] = { 1, 2, 3, 4, 5 };
    printarray(a); 

    // printing array elements
    for (int i = 0; i < 5; i++)
    cout << a[i] << " ";
    return 0;
}