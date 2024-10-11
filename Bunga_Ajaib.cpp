#include <iostream>
using namespace std;


int main()
{
    
    int n, x;
    cin >> x >> n;
    int totalTinggi = 0;
    for (int i = 1; i <= n; i++) {
        totalTinggi += x;
        x *= 2;
    }

    cout << totalTinggi;

    return 0;
}
