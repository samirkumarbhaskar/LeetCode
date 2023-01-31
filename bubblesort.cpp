#include <bits/stdc++.h>
using namespace std;
void bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void print(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << " " << arr[j];
    }
}

int main()
{
    int arr[] = {4, 5, 3, 6, 8, 7, 1};
    bubble(arr, 7);
    print(arr, 7);
}