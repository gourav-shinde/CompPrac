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
ll scie,topics,temp;
cin>>scie>>topics;
map<ll,ll> arr;

for(ll i=0;i<scie;++i){
    cin>>temp;
    if(arr.end()==arr.find(temp)){
        arr.insert({temp,1});
    }
}
bool ans=false;
for(ll i=1;i<=topics;++i){
    if(arr.end()==arr.find(i)){
        ans=true;break;
    }
}
if(ans)cout<<"Yes\n";
else cout<<"No\n";

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
