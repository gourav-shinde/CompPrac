#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pb push_back
using namespace std;

#define deb(i) cout<<#i<<":"<<i<<endl;
#define fo(i,n) for(int j=i;j<n;j++)
void get_arr(ll *p,ll length){for(ll i=0;i<length;i++)cin>>*(p+i);}
void print_arr(int *p,int length){for(int i=0;i<length;i++)cout<<*(p+i)<<" ";cout<<endl;}
typedef vector<int> vi;

void solve()
{
ll stores;
cin>>stores;
ll inputs[stores][3];
ll max_profit=0;
for(ll i=0;i<stores;++i){
    cin>>inputs[i][0]>>inputs[i][1]>>inputs[i][2];
}
for(ll i=0;i<stores;++i){
    max_profit=max(max_profit,(inputs[i][1]/(inputs[i][0]+1))*inputs[i][2]);
}
cout<<max_profit<<"\n";

}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int t=1;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
