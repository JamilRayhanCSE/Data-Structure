#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[], int n)
{
	int mx = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];
	return mx;
}

void countSort(int arr[], int n, int place)
{
	int output[n]; 
	int i, count[10] = { 0 };

	for (i = 0; i < n; i++)
		count[(arr[i] / place) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = n - 1; i >= 0; i--) {
		output[count[(arr[i] / place) % 10] - 1] = arr[i];
		count[(arr[i] / place) % 10]--;
	}
	
	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

void radixsort(int arr[], int n)
{
	int m = getMax(arr, n);

	for (int place = 1; m / place > 0; place *= 10)
		countSort(arr, n, place);
}

void printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int n;
	cin >> n;
	int arr[n + 5];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	radixsort(arr, n);
	printArr(arr, n);
	return 0;
}
