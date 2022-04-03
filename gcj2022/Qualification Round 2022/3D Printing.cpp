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
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    //fio();
    int l,t;
    cin>>t;
    for(l=1;l<=t;l++){
        int i,C,Y,M,K,sum;
        int c[3],y[3],m[3],k[3];
        cin>>c[0]>>m[0]>>y[0]>>k[0];
        cin>>c[1]>>m[1]>>y[1]>>k[1];
        cin>>c[2]>>m[2]>>y[2]>>k[2];
        cout<<"Case #"<<l<<": ";
        C=min(c[0],min(c[1],c[2]));
        M=min(m[0],min(m[1],m[2]));
        Y=min(y[0],min(y[1],y[2]));
        K=min(k[0],min(k[1],k[2]));
        if((C+M+Y+K)<1000000){
            cout<<"IMPOSSIBLE"<<endl;
        }
        else{
            sum=(C+M+Y+K)-1000000;
            if(C>sum){
                C-=sum;
                sum=0;
            } else{
                sum-=C;
                C=0;
            }
            if(sum!=0 and M>sum){
                M-=sum;
                sum=0;
            } else if(sum!=0){
                sum-=M;
                M=0;
            }
            if(sum!=0 and Y>sum){
                Y-=sum;
                sum=0;
            } else if(sum!=0){
                sum-=Y;
                Y=0;
            }
            if(sum!=0 and K>sum){
                K-=sum;
                sum=0;
            } else if(sum!=0){
                sum-=K;
                K=0;
            }
            cout<<C<<" "<<M<<" "<<Y<<" "<<K<<endl;
        }
    }
    return 0;
}
