
#include <cmath>
#include <iostream>

using namespace std;

long long power(long long G, long long N, long long privateKey)
{
    if (privateKey == 1)
        return G;

    else
        return (((long long)pow(G, privateKey)) % N);
}


int main()
{
    long long N = 23;
    long long G = 29;

   

    long a = 4; 
    cout << "private key for person-1 : " << a << endl;

    long long x = power(G, N, a); 

    
    long b = 3; 
    cout << "private key for person-2 : " << b << endl;

    long long y = power(G, N, b); 

    long long ka = power(y, N, a); 
    long long kb = power(x, N, b);

    return 0;
}