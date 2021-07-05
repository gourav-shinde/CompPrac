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
    string input;
    cin>>input;
    int opening=0,closing=0;
    //opening is true
    ll i,ans=0;
    for(i=0;input[i]!='\0';++i){
        bool tag=('<'==input[i])?true:false;
        if(tag){
            //cout<<"op\n";
            ++opening;
        }
        else{
            //cout<<"cl\n";
            --opening;
        }
        if(opening<0)break;
        if(opening==0)ans=i+1;
    }
    //cout<<"opening "<<opening<<endl;
    if(opening>0)cout<<ans<<"\n";
    else cout<<i<<"\n";


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
