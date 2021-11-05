#include<bits/stdc++.h>

using namespace std;

void search(int arr[], int sElement,int length)
{
	int left = 0;
	int position = -1;
	int right = length - 1;
	
	for(left = 0; left <= right;)
	{
		if (arr[left] == sElement)
		{
			
			position = left;
			cout << "found in Array at "<< position + 1 << " Position"<<endl;
			break;
		}
		if (arr[right] == sElement)
		{
			position = right;
			cout << "found in Array at "<< position + 1 << " Position"<<endl;
			break;
		}
		left++;
		right--;
	}
	if (position == -1)
		cout << "Not found in Array "<<endl;

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
	int element;
	cin>>element;
	search(arr, element,n);
}
