//Given an array of positive integers. Your task is to find the leaders in the array.
//Note: An element of array is leader if it is greater than or equal to all the elements to its right side. 
//Also, the rightmost element is always a leader. 
/*
Example:
Input:
3
6
16 17 4 3 5 2
5
1 2 3 4 0
5
7 4 5 7 3
Output:
17 5 2
4 0
7 7 3
Explanation:
Testcase 3: All elements on the right of 7 (at index 0) are smaller than or equal to 7. Also,
all the elements of right side of 7 (at index 3) are smaller than 7. 
And, the last element 3 is itself a leader since no elements are on its right.
*/
/////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void leaders(int arr[],int n){
    /*
    int i,j;
    for (i=0; i<n; i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                break;
            }
        }
        if(j==n){
          cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    // this solution is taking bit longer time than expected
    // O(n^2) with O(1) space complexity
    */
    int max=arr[n-1];
    vector<int>res;
    res.push_back(max);
    for(int i=n-2;i>=0;i--){
        if(max<=arr[i]){
            max=arr[i];
            res.push_back(max);
        }
    }
    reverse(res.begin(),res.end()); 
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    // this solution has the time complexity o(n)
    // O(n) is the space complexity, this is basically we have to arrange the array elements
    // in the required order.
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		int *arr=new int[size];
		for (int i=0;i<size;i++){
			cin>>arr[i];
		}
		leaders(arr, size);
		delete[] arr;
	}
	return 0;
}
