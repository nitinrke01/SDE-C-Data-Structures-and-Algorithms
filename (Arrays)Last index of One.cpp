//Given a string S consisting only '0's and '1's,  print the last index of the '1' present in it.
/*
Example:
Input:
2
00001
0
Output:
4
-1
Explanation:
Testcase 1: Last index of  1 in given string is 4.
Testcase 2: Since, 1 is not present, so output is -1.
*/
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int lastIndex(string s){
    int i;
    int max=-1;
    for(i=0; i<s.size(); i++){
        if(s[i]=='1'){
            max=i;
        }
    }
    return max;
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int res=lastIndex(s);
		cout<<res;
		cout<<endl;
	}
	return 0;
}
