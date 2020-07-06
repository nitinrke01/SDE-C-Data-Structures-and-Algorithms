//Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in 
//the array. Equilibrium position in an array is a position such that the sum of elements 
//before it is equal to the sum of elements after it.
/*
Example:
Input:
2
1
1
5
1 3 5 2 2
Output:
1
3
Explanation:
Testcase 1: Since its the only element hence its the only equilibrium point.
Testcase 2: For second test case equilibrium 
point is at position 3 as elements below it (1+3) = elements after it (2+2).
*/
//////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include<iostream>
using namespace std;
int equilibriumPoint(int arr[],int size){
    /*
    for(int i=0; i<size; i++){
        int leftsum=0;
        int rightsum=0;
        for(int j=0; j<i; j++){
            leftsum+=arr[j];
        }
        for(int j=i+1; j<size;j++){
            rightsum+=arr[j];
        }
        if(leftsum==rightsum){
            return i+1;
        }
    }
    return -1;
    // this code will take O(n^2) time, which bit longer than expected
    // O(1), space complexity
    // lets optimize the code
    */
    int sum=0;
    int leftsum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    for(int i=0; i<size; i++){
        sum-=arr[i];
        if(sum==leftsum){
            return i+1;
        }
        leftsum+=arr[i];
    }
    return -1;
    // this code will take O(n) time to run, O(1) space complexity.
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
		int ans=equilibriumPoint(arr, size);
		cout<<ans;
		delete[] arr;
		cout << endl;
	}
	return 0;
}
