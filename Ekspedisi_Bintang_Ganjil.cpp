#include <iostream>
using namespace std;


int main()
{
    int totalBintang;
    cin >> totalBintang;
    int totalBintangGanjil = 0;
    for (int i = 1; i <= totalBintang; i++) {
        if (i % 2 == 1) {
            totalBintangGanjil++;
        }
    }
    cout << totalBintangGanjil;
    return 0;
}
