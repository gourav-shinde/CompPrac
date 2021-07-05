#include <bits/stdc++.h>
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
 int a,b,c,d;
 try{
     cin>>a>>b>>c>>d;
     if(a>179 || b>179 || c>179 || d>179){
         throw 0;
     }
     else{
         if(a+c==180 && b+d==180){
             cout<<"YES\n";
         }
         else{
             throw 0;
         }
     }

 }
 catch(...){
     cout<<"NO\n";
 }

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
