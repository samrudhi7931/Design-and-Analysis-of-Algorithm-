#include<iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int element)
{
    int mid = (low + high) / 2;

    if(low <= high)
    {
        if(arr[mid] == element)
        {
            cout << "Element found at index: " << mid << endl;
            return mid;
        }
        else if(arr[mid] < element)
        {
            return binary_search(arr, mid + 1, high, element);
        }
        else
        {
            return binary_search(arr, low, mid - 1, element);
        }
    }
    else
    {
        cout << "Element not found" << endl;
        return -1;
    }
}

int main()
{
    int low = 0;
    int high = 9; // As the array has 10 elements, highest index is 9
    int element;

    int arr[10];
    cout << "Enter the elements of the array (sorted): ";
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> element;

    binary_search(arr, low, high, element);

    return 0;
}

