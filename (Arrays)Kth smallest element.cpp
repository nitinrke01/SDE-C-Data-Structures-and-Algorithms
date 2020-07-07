//Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. 
//It is given that all array elements are distinct.
/*
Example:
Input:
2
6
7 10 4 3 20 15
3
5
7 10 4 20 15
4
Output:
7
15
Explanation:
Testcase 1: 3rd smallest element in the given array is 7.
Testcase 2: 4th smallest elemets in the given array is 15.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<algorithm>
#define max 100000
using namespace std;
int main() {
	int t,n,k;
	int a[max];
	cin>>t;
	while(t!=0){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    cin>>k;
	    sort(a,a+n);
	    cout<<a[k-1]<<endl;
	    t--;
	}
	return 0;
}
