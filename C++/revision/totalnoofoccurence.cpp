#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int find)
{
    int start = 0;
    int end = n - 1;
    int first = 0;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == find)
        {
            first = mid;
            end = mid - 1;
        }
        if (find < arr[mid])
        {
            end = mid - 1;
        }
        if (find > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return first;
}

int lastocc(int arr[], int n, int find)
{
    int start = 0;
    int end = n - 1;
    int last = -1; /*if any element is searched which
       is not present in array then to make our op 0
       I have taken last=-1*/

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == find)
        {
            last = mid;
            start = mid + 1;
        }
        if (find < arr[mid])
        {
            end = mid - 1;
        }
        if (find > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return last;
}

int totalocc(int arr[], int n, int find)
{
    int ans = lastocc(arr, n, find) - firstocc(arr, n, find) + 1;
    return ans;
}

int main()
{
    int n = 9, num;
    int arr[n] = {1, 1, 2, 2, 2, 2, 3, 3, 5};
    cout << "Enter a number to check its occurence: ";
    cin >> num;

    cout << "Total occ of " << num << " is: "
         << totalocc(arr, n, num) << endl;
    return 0;
}