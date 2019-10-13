#include <iostream>

using namespace std;

int main()
{
    int n, i = 0;
    float s = 1, t = 1.1;
    cin >> n;
    while(i<n)
    {
        s *= t;
        t += 0.1;
        i += 1;
    }
    cout << s;
}
