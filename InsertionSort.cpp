#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for(int itr = 0; itr < n; itr++)
    {
        cout << arr[itr] << " ";
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    
    for(int itr = 0; itr < n; itr++)
    {
        cin >> arr[itr];
    }
    
    for(int itr = 1; itr < n; itr++)
    {
        int key = arr[itr];
        int j = itr-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    print(arr,n);
}
