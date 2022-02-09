#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int end)
{
    vector<int> temp;
    int mid = (start+end)/2;
    int i = start;
    int j = mid+1;
    
    while(i <= mid && j <= end)
    {
        if(arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else 
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    
    int k = 0;
    for(int itr = start; itr <= end; itr++)
    {
        arr[itr] = temp[k++];
    }
    return;
}

void mergeSort(vector<int> &v, int start, int end)
{
    if(start >= end)
    {
        return;
    }
    
    int mid = (start + end)/2;
    mergeSort(v,start,mid);
    mergeSort(v,mid+1, end);
    return merge(v,start,end);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n,0);
    for(int itr = 0; itr < n; itr++)
    {
        cin >> v[itr];
    }
    int start = 0; 
    int end = n-1;
    mergeSort(v,start,end);
    cout << "Sorted array is ";
    for(int itr = 0; itr < n; itr++)
    {
        cout << v[itr] << " ";
    }
}
