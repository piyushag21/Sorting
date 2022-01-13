#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
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
    
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    
   
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " "; 
    }
        
    cout << endl;
    
}
