#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
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
    ll div,x,y;
    cin>>div>>x>>y;
    ll ans=INT64_MAX;
    if(div%2==1){
        ll temp;
        if(x>y){temp=x;x=y;y=temp;}
        ans=y-x-1;
        ans=min(ans,div-y+x-1);
        
    }
    else{
        ll temp;
        if(x>y){temp=x;x=y;y=temp;}
        if(y!=x+(div/2))
        {
            ans=y-x-1;
            ans=min(ans,div-y+x-1);
        }
        else{
            ans=0;
        }
    }
    cout<<ans<<"\n";

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
