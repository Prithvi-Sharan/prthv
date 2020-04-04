#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define int long long
#define Fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
signed main()
{
    Fast
    int T; cin>>T;
    int k=1;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        set <int> Set;
        int sro=0,sco=0,sum=0;
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<n;j++)
                {cin>>arr[i][j]; Set.insert(arr[i][j]);}
                if(Set.size()!=n){sro++;}
                Set.clear();
        }
       for(int i=0;i<n;i++)
       {
           sum+=arr[i][i];
           for(int j=0;j<n;j++)
           {
            Set.insert(arr[j][i]);
           }
           if(Set.size()!=n){sco++;}
                Set.clear();
       }
        cout<<"Case #"<<k++<<": "<<sum<<" "<<sro<<" "<<sco;
        cout<<"\n";
    }
}
