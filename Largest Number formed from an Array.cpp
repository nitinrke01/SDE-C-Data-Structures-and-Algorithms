//Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.
//The result is going to be very large, 
//hence return the result in the form of a string.
/*
Example:
Input:
2
5
3 30 34 5 9
4
54 546 548 60
Output:
9534330
6054854654
*/
///////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int mycompare(string s1,string s2){
    string s1s2=s1.append(s2);
    string s2s1=s2.append(s1);
    return s1s2.compare(s2s1)>0?1:0;
}
void largest(vector<string>s){
    string s1="";
    sort(s.begin(),s.end(),mycompare);
    for(int i=0;i<s.size();i++){
        s1+=s[i];
    }
    cout<<s1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int *arr=new int[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        vector<string>s;
        for(int i=0; i<size;i++){
            s.push_back(to_string(arr[i]));
        }
        largest(s);
        delete[] arr;
    }
    return 0;
}
