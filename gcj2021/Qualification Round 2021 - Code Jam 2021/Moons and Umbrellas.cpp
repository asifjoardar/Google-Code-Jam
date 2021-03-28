/********** BiSmIlLaHiR rAhMaNiR rAhIm ***********\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
\*************** DIIT(17th batch) ****************/

#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define fs first
#define ss second
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define ki_ase(x,y) cout<<x<<" "<<y<<endl;
#define SIZE 200000000
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define inf 1e18
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

int main()
{
    //fio();
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    ll l,t;
    cin>>t;
    for(l=1;l<=t;l++){
        ll i,x,y,ans=0;
        string s,s1;
        cin>>x>>y>>s;
        map<char,ll>mp;
        for(i=0;i<s.size();i++){
            if(mp[s[i]]==0){
                mp.clear();
                mp[s[i]]++;
                s1+=s[i];
            }
        }
        s=s1;
        //cout<<s<<endl;
        for(i=0;i<s.size()-1;i++){
            if(s[i]=='?'){
                s[i]=s[i+1];
            }
            else{
                if(s[i+1]=='?'){
                    s[i+1]=s[i];
                }
            }
        }
        for(i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                if(s[i]=='C'){
                    ans+=x;
                }
                else{
                    ans+=y;
                }
            }
        }
        //cout<<s<<endl;
        pf("Case #%lld: %lld\n",l,ans);
        s.clear();
        s1.clear();
    }
    return 0;
}
