//Given a String of length S, reverse the whole string without reversing the individual words in it. 
//Words are separated by dots
/*
Example:
Input:
2
i.like.this.program.very.much
pqr.mno
Output:
much.very.program.this.like.i
mno.pqr
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='.'){
                temp += s[i];
            }
            else{
                reverse(temp.begin(),temp.end());
                cout<<temp<<".";
                temp = "";
            }
        }
        reverse(temp.begin(),temp.end());
        cout<<temp<<endl;
    }
    return 0;
}
