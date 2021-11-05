#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
    {
        int min = a[i];
        int loc = i;
        for (int j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                loc = j;
            }
        }

        int temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    selectionSort(a, n);
    cout<<endl;
    return 0;
}