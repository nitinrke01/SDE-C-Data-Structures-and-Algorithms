//Given a sorted array of positive integers. Your task is to rearrange  
//the array elements alternatively i.e first element should be max value, second should be min value, 
//third should be second max, fourth should be second min and so on...
//Note: O(1) extra space is allowed. Also, try to modify the input array as required.
/*
Example:
Input:
2
6
1 2 3 4 5 6
11 
10 20 30 40 50 60 70 80 90 100 110
Output:
6 1 5 2 4 3
110 10 100 20 90 30 80 40 70 50 60
Explanation:
Testcase 1: Max element = 6, min = 1, second max = 5, second min = 2, and so on... Modified array is : 6 1 5 2 4 3.
*
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void RearrangeArrayAlternately(int arr[],int n){
    int i=0;
    int j=n-1;
    vector<int>res;
    while(i<j)
    {
        res.push_back(arr[j]);
        res.push_back(arr[i]);
        i++;
        j--;
    }
    if(n%2!=0)
       res.push_back(arr[n/2]);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
// this solution has the O(n) time complexity
// with O(n) space complexity that will carry the modify array
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
		sort(arr,arr+size);
		RearrangeArrayAlternately(arr,size);
		delete[] arr;
	}
	return 0;
}
