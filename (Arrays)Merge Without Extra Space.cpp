//Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. 
//The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).
//Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space. 
//We need to modify existing arrays as following.
/*
Example:
Input:
2
4 5
1 3 5 7
0 2 6 8 9
2 3
10 12
5 18 20
Output:
0 1 2 3 5 6 7 8 9
5 10 12 18 20
Explanation:
Testcase 1: After merging two non-decreasing arrays, we have, 0 1 2 3 5 6 7 8 9.
*/
////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

void merge(int arr1[],int arr2[],int n1,int n2){
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    if(i<n1){
        while(i<n1){
            cout<<arr1[i]<<" ";
            i++;
        }
    }
    if(j<n2){
        while(j<n2){
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    cout<<endl;
    // this code has O(n) time complexity
    // and has O(1) space complexity
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int size1,size2;
		cin>>size1>>size2;
		int *arr1=new int[size1];
		int *arr2=new int[size2];
		for (int i=0; i<size1; i++){
			cin>>arr1[i];
		}
		for (int i=0; i<size2; i++){
			cin>>arr2[i];
		}
		merge(arr1,arr2,size1,size2);
		delete[] arr1;
		delete[] arr2;
	}
	return 0;
}
