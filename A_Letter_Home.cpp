#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>> a[i];
        int ans=min(abs(s-a[0]),abs(s-a.back()))+a.back()-a[0];
        cout<<ans<<endl;
    }
    return 0;
}