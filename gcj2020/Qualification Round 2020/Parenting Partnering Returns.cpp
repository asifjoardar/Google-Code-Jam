#include <bits/stdc++.h>
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
using namespace std;

int main() {
	int l,t;
    cin>>t;
    for(l=1;l<=t;l++)
    {
        int i,j,n,a,b,next;
        vector<int>cnt,cnt1;
        vector<pii>p;
        vector<pair<int,pii>>v,v1;
        cin>>n;
        int ans[n];
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            v.pb(mkp(a,mkp(b,i)));
            p.pb(mkp(a,b));
        }
        sort(v.begin(),v.end());
       next=v[0].ss.fs;
        int x=v[0].ss.ss;
        ans[x]=1;
        cnt.pb(x);
        j=0;
        while(j<n)
        {
            j++;
            for(;j<n;j++)
            {
                if(next<=v[j].fs)
                {
                    next=v[j].ss.fs;
                    int x=v[j].ss.ss;
                    ans[x]=1;
                    cnt.pb(x);
                    break;
                }
            }
        }
        sort(cnt.begin(),cnt.end());
        j=0;
        for(i=0;i<n;i++)
        {
            if(cnt[j]==i)
            { j++;continue;}
            v1.pb(mkp(p[i].fs,mkp(p[i].ss,i)));
        }
        sort(v1.begin(),v1.end());
        if(v1.size()>0){
        cnt1.pb(v1[0].ss.ss);
        ans[v1[0].ss.ss]=2;}
        for(i=1;i<v1.size();i++)
        {
            if(v1[i-1].ss.fs>v1[i].fs)
                break;
            cnt1.pb(v1[i].ss.ss);
            ans[v1[i].ss.ss]=2;
        }
        //cout<<v1.size()<<endl;
        if(cnt.size()+cnt1.size()<n)
            printf("Case #%d: IMPOSSIBLE\n",l);
        else{
            printf("Case #%d: ",l);
            for(i=0;i<n;i++)
            {
                if(ans[i]==1)
                    cout<<"C";
                else
                    cout<<"J";
            }
            cout<<endl;
            }
    }
	return 0;
}
