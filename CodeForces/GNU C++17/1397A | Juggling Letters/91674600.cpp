#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--){
 
        int n;
        cin>>n;
 
        vector<string> v;
 
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
 
        vector<int> dp(26,0);
 
        for(int i=0;i<n;i++){
 
            string s=v[i];
 
            int nn=s.length();
            for(int j=0;j<nn;j++){
                dp[s[j]-'a']++;
            }
 
        }
 
        bool flag=true;
 
        for(int i=0;i<26;i++){
            if((dp[i]%n)!=0){
                flag=false;
                break;
            }
        }
 
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
 
    return 0;
}