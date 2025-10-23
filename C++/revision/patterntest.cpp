#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i + 2; j++)
        {
            if ((i + j) <= 1)
            {
                cout << " ";
            }
            cout << i , j;
        }
        cout << endl;
    }
}