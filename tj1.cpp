
#include <iostream>

using namespace std;

int main()
{
    int x;
    int k;
    cin >> x >> k;
    for (int i = 0; i < k; i++)
    {
        if (x % 10 != 0)
        {
            x = x - 1;
        }
        else if (x % 10 == 0)
        {
            x = x / 10;
        }
    }
    cout << x;

    return 0;
}
