#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        string s;
        cin>>s;
 
        string s1;
        cin>>s1;
 
        int count =0;
        //sort(s.begin(),s.end());
        //sort(s1.begin(),s1.end());
        int count1=0;
        for(int i =0; i<n; i++){
 
            if(s[i]>s1[i]){
                count++;
            }
            else if(s[i]<s1[i])count--;
        }
 
        if(count>0){
            cout<<"RED"<<endl;
        }
 
        else if(count<0){
            cout<<"BLUE"<<endl;
        }
 
        else cout<<"EQUAL"<<endl;
 
    }
 
}