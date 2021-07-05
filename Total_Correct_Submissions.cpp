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
string getString(char x)
{
    string s(1, x);
    return s;  
}
void solve()
{
map<string,int> ans;
int length,sol;char ab;string line;
cin>>length;
while(true){
    getline(cin,line);
    if(line.length()==0){
        cout<<"EOF\n";
        break;
    }
    if((int)line[0]>47 && (int)line[0]<58){
        cout<<"new\n";
        break;
        
    }
    
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
