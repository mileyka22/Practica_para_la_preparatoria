#include <iostream>
using namespace std;
int main()
{
    int x, y, t, r;
    cin >> t;
    int arr1[t];
    for (int i = 0; i < t; i++)
    {

        cin >> x >> y;
        r = y - x;
        arr1[i] = r;
    }
    for (int i = 0; i < t; i++)
    {
        cout << arr1[i] << endl;
    }
}