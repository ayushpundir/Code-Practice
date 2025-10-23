#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int arr[5] = {2, 3, 1, 2, 3};

    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
        {
            cout << i << endl;
        }
    }

    return 0;
}
