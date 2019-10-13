#include <iostream>

using namespace std;

int main()
{
    float a, s = 1;
    int n;
    cout << "a = ";
    cin >> a;
    cout << "n = ";
    cin >> n;
    float t = -a;
    for(int i = 0; i<n; i += 1)
    {
        s += t;
        t *= -a;
    }
    cout << s;
}
