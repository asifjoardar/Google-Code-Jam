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
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    //fio();
    int l,t;
    cin>>t;
    for(l=1;l<=t;l++){
        int i,j;
        string s,ans;
        vector<pair<char,int>>uniqueStr;
        map<char,int>mp;
        cin>>s;
        for(i=0;i<s.size();) {
            string dummy;
            for(j=i+1;j<s.size();j++){
                dummy+=s[i];
                if(s[i]<s[j]){
                    ans+=dummy;
                    ans+=dummy;
                    i=j;
                    break;
                }
                else if(s[i]>s[j]){
                    ans+=dummy;
                    i=j;
                    break;
                }
                else{
                    continue;
                }
            }
            if(j==s.size()){
                ans+=dummy;
                break;
            }
        }
        ans+=s[s.size()-1];
        cout<<"Case #"<<l<<": "<<ans<<endl;;
    }
    return 0;
}
