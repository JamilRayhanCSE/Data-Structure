#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertionSort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;

    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
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

    insertionSort(a, n);
    
    printArray(a, n);

    return 0;
}
