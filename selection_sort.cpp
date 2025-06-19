#include <iostream>
using namespace std;

void selectionsort(string arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] <= arr[smallestindex])
            {
                smallestindex = j;
            }
        }
        swap(arr[i], arr[smallestindex]);
    }
}
void printarray(string arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 5;
    string arr[] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    selectionsort(arr, n);
    printarray(arr, n);
    return 0;
}