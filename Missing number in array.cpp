//Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, 
//the missing number is to be found.
/*
Example:
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10
Output:
4
9
Explanation:
Testcase 1: Given array : 1 2 3 5. Missing element is 4
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<bits/stdc++.h>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int s=0;
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>a[i];
	        s+=a[i];
	    }
	    int r=(pow(n,2)+n)/2;
	    cout<<r-s<<endl;
	}
	return 0;
}
