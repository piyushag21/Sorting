#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x; 
    *x = *y; 
    *y = temp;
}

void normalSort(int arr[], int n)
{
    int min = 0;
    for(int i = 0; i < n-1; i++)
    {
        min = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
    }  
    cout << "Our Elements Are: ";
    for(int itr = 0; itr < n; itr++)
    {
        cout << arr[itr] << " ";
    }
    cout << "\n";
}

void stableSort(int a[], int n)
{
    int min = 0;
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
                min = j;
        }

        int key = a[min];
        while (min > i)
        {
            a[min] = a[min - 1];
            min--;
        }
        a[i] = key;
    }
    cout << "Our Elements Are: ";
    for(int itr = 0; itr < n; itr++)
    {
        cout << a[itr] << " ";
    }
    cout << "\n";
}

int  main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int itr = 0; itr < n; itr++)
    {
        cin >> arr[itr];
    }
 //   normalSort(arr,n);
    stableSort(arr,n);
}
