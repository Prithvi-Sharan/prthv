#include <iostream>
#include <bits/stdc++.h>
using namespace std;
signed main(){
    int T;
    cin>>T;
    int Z=0;
    
    for(int i=1;i<=T;i++){
        int n;
        cin>>n;
        vector<pair<pair<int,int>,int>> vec1;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            vec1.push_back(make_pair(make_pair(a,b),i));
            Z=5;
        }
        Z=9;
        sort(vec1.begin(),vec1.end());
        string ans1;
        vector<pair<int,int>> gen;
        bool Flag=true;
        int cs=-1;
        int ce=0;
        int js=-1;
        int je=0;
        for(int i=0;i<n;i++){
            int pl=vec1[i].first.first;
            int ql=vec1[i].first.second;
            Z=0;
            int idx=vec1[i].second;
            if(cs<pl && ce<=pl && cs<ql && ce<=ql){
                cs=pl;
                ce=ql;
                gen.push_back(make_pair(idx,'C'));
                Z=0;
            }
            else if(js<pl && je<=pl && js<ql && je<=ql){
                js=pl;
                je=ql;
                gen.push_back(make_pair(idx,'J'));
                Z=0;
            }
            else{
                Flag=false;
                break;
                Z=0;
            }
        }
        sort(gen.begin(),gen.end());
        for(int i=0;i<gen.size();i++){
            ans1+=gen[i].second;
        }
        if(Flag){
            cout<<"Case #"<<i<<": "<<ans1<<"\n";
        }
        else{
            cout<<"Case #"<<i<<": "<<"IMPOSSIBLE\n";
        }
    }
    return 0;
}