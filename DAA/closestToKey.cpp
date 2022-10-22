#include <bits/stdc++.h>
using namespace std;

int getClosest(int, int, int);

int findClosest(int arr[], int n, int t)
{
	if (t <= arr[0])
		return arr[0];
	if (t >= arr[n - 1])
		return arr[n - 1];

	int i = 0, j = n, mid = 0;
	while (i < j) {
		mid = (i + j) / 2;

		if (arr[mid] == t)
			return arr[mid];
		if (t < arr[mid]) {
			if (mid > 0 && t > arr[mid - 1])
				return getClosest(arr[mid - 1],
								arr[mid], t);
			j = mid;
		}
		else {
			if (mid < n - 1 && t < arr[mid + 1])
				return getClosest(arr[mid],
								arr[mid + 1], t);
			i = mid + 1;
		}
	}
	return arr[mid];
}

int getClosest(int val1, int val2,int target)
{
	if (target - val1 >= val2 - target)
		return val2;
	else
		return val1;
}

int main()
{
	int arr[] = { 14,17,-22,-3,4,6,-5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int target = 11;
	cout << (findClosest(arr, n, target));
}

