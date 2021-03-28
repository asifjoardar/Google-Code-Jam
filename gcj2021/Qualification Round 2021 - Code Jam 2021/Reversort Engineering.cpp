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
    
    ll l,t;
    cin>>t;
    for(l=1;l<=t;l++){
        ll n,c;
        cin>>n>>c;
        if(c<(n-1) or c>((n*(n+1))/2)-1)
            pf("Case #%lld: IMPOSSIBLE\n",l);
        else{
            ll p,mp,np,i,j,k;
            vector<ll>v,v1;
            for(i=0;i<n;i++)
                v.pb(i+1);
            if(c>(n-1)){
                for(i=2,j=n-2;i<=n;i++,j--){
                    //cout<<c-i<<" "<<j<<endl;
                    if(c-i>=j){
                        c-=i;
                        v1.pb(i);
                    }
                    else{
                        //cout<<j<<endl;
                        v1.pb(c-max((ll)0,(j)));
                        for(k=0;k<(j);k++)
                            v1.pb(1);
                        break;
                    }
                }
                j=n-2;
                for(i=0;i<v1.size();i++){
                    //cout<<v1[i]<<endl;
                    reverse(v.begin()+j,v.begin()+j+v1[i]);
                    j--;
                }
            }
            pf("Case #%lld:",l);
            for(i=0;i<n;i++)
                pf(" %lld",v[i]);
            pf("\n");
        }
    }
    return 0;
}
