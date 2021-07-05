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
    ll shoots;
    cin>>shoots;
    string shoots_array;
    cin>>shoots_array;
    ll teams[2][2]={0};
    ll i=0;
    ll grp[2]={0};
    for(i=0;i<2*shoots;++i){
        //deb(i);
        if(i%2==0){
            ++grp[0];
            if(shoots_array[i]=='0'){
                ++teams[0][0];

            }
            else{
                ++teams[0][1];

            }
            // cout<<"T1 : "<<teams[0][1]<<" T2 : "<<teams[1][1]<<" GRP:"<<grp[0]<<" T1 possible :"<<teams[0][1]+shoots-grp[0]<<" T2 possible :"<<teams[1][1]+shoots-grp[1]<<endl;
            if(teams[0][1]>teams[1][1])if(teams[0][1]>teams[1][1]+shoots-grp[1])break;
            if(teams[1][1]>teams[0][1])if(teams[1][1]>teams[0][1]+shoots-grp[0])break;
            
            
        }
        else{
            ++grp[1];
            if(shoots_array[i]=='0'){
                ++teams[1][0];
            }
            else{
                ++teams[1][1];
            }
            // cout<<"T1 : "<<teams[0][1]<<" T2 : "<<teams[1][1]<<" GRP:"<<grp[0]<<" T1 possible :"<<teams[0][1]+shoots-grp[0]<<" T2 possible :"<<teams[1][1]+shoots-grp[1]<<endl;
            if(teams[0][1]>teams[1][1])if(teams[0][1]>teams[1][1]+shoots-grp[1])break;
            if(teams[1][1]>teams[0][1])if(teams[1][1]>teams[0][1]+shoots-grp[0])break;
            
            

            
        }
        // cout<<"t1 "<<" S: "<<teams[0][1]<<" GRP: "<<grp[0]<<endl;
        // cout<<"t2 "<<" S: "<<teams[1][1]<<" GRP: "<<grp[1]<<endl;
        
        
    }
    if(i==2*shoots){i--;
    }
    cout<<i+1<<"\n";

// cout<<"#########\n";
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
