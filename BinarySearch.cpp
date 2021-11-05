#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid+1;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int arr[n+5];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int search;
	cin>>search;
	int result = binarySearch(arr, 0, n - 1, search);

	(result == -1) ? cout << "Element is not present in array": cout << "Element is present at Position " << result;
	cout<<endl;
	return 0;
}
