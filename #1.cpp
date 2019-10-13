#include <iostream>

using namespace std;

int main()
{
    float a;
    cin >> a;
    for(float i=0.1; i<1; i += 0.1)
    {
        cout << a*i << endl;
    }
}
