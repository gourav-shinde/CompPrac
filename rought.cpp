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
#include<iomanip>
#define ll long long
#define pii pair<int,int>
#define pb push_back
using namespace std;

#define deb(i) cout<<#i<<":"<<i<<endl;
#define fo(i,n) for(int j=i;j<n;j++)
void get_arr(ll *p,ll length){for(ll i=0;i<length;i++)cin>>*(p+i);}
void print_arr(ll *p,ll length){for(ll i=0;i<length;i++)cout<<*(p+i)<<" ";cout<<endl;}
typedef vector<int> vi;


void solve()
{
    int n;
    cin>>n;
    vector<int> marks(n),app(n);
    for(auto &itr:marks){
        cin>>itr;
    }
    for(auto itr:marks){
        cout<<itr<<" ";
    }
    for(auto &itr:app){
        cin>>itr;
    }
    cout<<endl;
    for(auto itr:app){
        cout<<itr<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;++i){
        arr[i]={marks[i],i};
    }
    sort(arr.begin(),arr.end());
    vector<int> ans(n);
    set<int,greater<>> apps;
    for(int i=0;i<n;++i){
        int app_index=app[arr[i].second];
        int size=0,sum=0;
        for(auto x:apps){
            sum+=x;
            size+=1;
            if(sum>app_index)break;
        }
        apps.insert(app_index);
        ans[arr[i].second]=(sum>app_index)?size:-1;
    }

    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    int a,arr[20],count=0,temp,ans=0;
    cin>>a;
    while(a!=0){
        temp=a%10;
        arr[count]=temp;
        count++;
        a/=10;
    }
    cout<<endl;
    bool flag=true;
        for(int i=0;i<count;i++){
            if(arr[i]==0 && flag==true){
                continue;
            }
            else{
                //cout<<"hm";
                flag=false;
                ans=ans*10+arr[i];
            }
        }
    if(a<0){
        cout<<-1*ans<<endl;
    }
    else{
        cout<<ans<<endl;
    }

}
