//Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of platforms required for the railway station 
//so that no train waits.
//Note: Consider that all the trains arrive on the same day and leave on the same day. 
//Also, arrival and departure times will not be same for a train, but we can have arrival time of one train equal 
//to departure of the other. In such cases, we need different platforms, 
//i.e at any given instance of time, same platform can not be used for both departure of a train and 
//arrival of another.
/*
xample:
Input:
2
6 
0900  0940 0950  1100 1500 1800
0910 1200 1120 1130 1900 2000
3
0900 1100 1235
1000 1200 1240 
Output:
3
1
Explanation:
Testcase 1: Minimum 3 platforms are required to safely arrive and depart all trains.
*/
////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<bits/stdc++.h>
#define inn(a) int a; cin>>a;
#define forr(i,n) for(int i=0;i<n;i++)
using namespace std;
int main()
 {
    inn(t);
    while(t--)
    {
        inn(n);
        int  arr[n],dep[n];
        forr(i,n)
            cin>>arr[i];
        forr(i,n)
            cin>>dep[i];
        sort(arr,arr+n);
        sort(dep,dep+n);
        int i=1,j=0;
        int max_plat=1,answer=1;
        while(i<n && j<n)
        {
            if(arr[i]<=dep[j])
            {
                i++;
                max_plat++;
                if(max_plat>answer) answer=max_plat;
            }
            else if(arr[i]>dep[j])
            {
                j++;
                if(max_plat!=0) max_plat--;
            }
        }
        
        cout<<answer<<endl;
    }
    return 0;
}
