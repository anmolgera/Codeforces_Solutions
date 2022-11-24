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
 
        string a,b;
        cin>>a>>b;
 
        bool flag=true;
 
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                flag=false;
                break;
            }
        }
 
        if(!flag){
            cout<<-1<<endl;
        }
        else{
            int ans=0;
            for(int i=0;i<20;i++){
 
                char ch=i+'a';
                vector<int> pos;
                char ch1='z';
 
                for(int j=0;j<n;j++){
                    if(a[j]==ch && b[j]>ch){
                        pos.push_back(j);
                        ch1=min(ch1,b[j]);
                    }
                }
 
                if(pos.size()>0){
                    ans++;
                    for(int j=0;j<pos.size();j++){
                        a[pos[j]]=ch1;
 
                    }
                }
 
 
            }
            cout<<ans<<endl;
        }
 
    }
 
    return 0;
}