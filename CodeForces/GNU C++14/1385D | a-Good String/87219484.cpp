#include <iostream>
#include<bits/stdc++.h>
#define li long long int
using namespace std;
 
int func(string s, char ch){
 
    int n=s.length();
 
    if(n==1){
        if(s[0]==ch){
            return 0;
        }
        else{
            return 1;
        }
    }
 
    int count1=0;
    int count2=0;
 
    // first half portion
 
    for(int i=0;i<n/2;i++){
        if(s[i]!=ch){
            count1++;
        }
    }
 
 
    // second half portion
 
    for(int i=n/2;i<n;i++){
        if(s[i]!=ch){
            count2++;
        }
    }
 
    /*if(count1<count2){
        return count1+func(s.substr(n/2,n/2),ch+1);
    }
    else if(count2<count1){
        return count2+func(s.substr(0,n/2),ch+1);
    }
 
    */
    /*else{*/
        int s_ans1=func(s.substr(n/2,n),ch+1);
        int s_ans2=func(s.substr(0,n/2),ch+1);
 
        return min(s_ans1+count1,s_ans2+count2);
 
    //}
 
}
 
int main()
{
 
    int t;
    cin>>t;
 
    while(t--){
 
        int n;
        cin>>n;
 
        string s;
        cin>>s;
 
        cout<<func(s,'a')<<endl;
 
    }
 
 
    return 0;
}