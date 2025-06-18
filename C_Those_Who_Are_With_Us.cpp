#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){

        int n,m; cin>>n>>m;
    
        int maxi=0;
        vector<vector<int>> a(n,vector<int>(m));
        
        //Find Maximum element
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                maxi=max(maxi,a[i][j]); 
            }
        }
        
        //Count No. of maximum element in Row and Col
        vector<int> countMaxInRow(n),countMaxInCol(m);
        int totalMaxi=0;
    
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==maxi){
                    countMaxInRow[i]++;
                    countMaxInCol[j]++;
                    totalMaxi++;
                }
            }
        }
    
        //Now go to each element and find all combined equal to totalmaxi
        bool flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(countMaxInRow[i]+countMaxInCol[j]-(a[i][j]==maxi)==totalMaxi){
                    flag=1;
                }
            }
        }
        
        cout<<maxi-flag<<endl;
    }
    return 0;
}