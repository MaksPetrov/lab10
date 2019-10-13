#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, s = 0;
    cin >> n;
    while(i<=2*n-1)
    {
        s += i;
        cout << s << endl;
        i += 2;
    }
    if(n==0)
    {
        cout << 0;
    }
}
