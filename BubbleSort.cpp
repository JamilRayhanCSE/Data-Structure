#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1 ; j <= n;  j++)
        {
            int temp;
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    for (int i = 1; i <= n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}