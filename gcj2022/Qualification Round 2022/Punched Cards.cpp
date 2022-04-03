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
    string ans[21]={
        {"..+-+-+-+-+-+-+-+-+-+"},
        {"..|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"},
        {"|.|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"},
        {"|.|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"},
        {"|.|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"},
        {"|.|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"},
        {"|.|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"},
        {"|.|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"},
        {"|.|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"},
        {"|.|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"},
        {"|.|.|.|.|.|.|.|.|.|.|"},
        {"+-+-+-+-+-+-+-+-+-+-+"}
    };
    cin>>t;
    for(l=1;l<=t;l++){
        int i,j,x,y;
        cin>>x>>y;
        cout<<"Case #"<<l<<":"<<endl;
        for(i=0;i<(x*2)+1;i++){
            for(j=0;j<(y*2)+1;j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
