//Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.
/*
Example:
Input :
2
5
0 2 1 2 0
3
0 1 0
Output:
0 0 1 2 2
0 0 1
Explanation:
Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output.
*/
//////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <algorithm>
using namespace std;
void sort012(int arr[], int n){
    int countZero=0;
    for (int i=0; i<n; i++){
        if (arr[i]==0){
            countZero++;
        }
    }
    int countOne=0;
    for (int i=0; i<n; i++){
        if (arr[i]==1){
            countOne++;
        }
    }
    int countTwo=0;
    for (int i=0; i<n; i++){
        if (arr[i]==2){
            countTwo++;
        }
    }
    for (int i=0; i<countZero; i++){
        arr[i]=0;
    }
    for (int i=countZero; i<(countZero+countOne); i++){
        arr[i]=1;
    }
    for (int i=(countZero+countOne); i<n; i++){
        arr[i]=2;
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++){
			cin >> arr[i];
		}
		sort012(arr, size);
		for (int i = 0; i < size; i++){
			cout << arr[i] << " ";
		}
		delete[] arr;
		cout << endl;
	}
	return 0;
}
// The time complexity:O(n), Only one traversal of the array is needed.
// Space complexity:O(1), No extra space is required.
