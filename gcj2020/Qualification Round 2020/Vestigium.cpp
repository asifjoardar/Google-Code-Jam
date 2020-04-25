#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,l;
    cin>>t;
    for(l=1;l<=t;l++)
    {
        int ans1=0,ans2=0,ans3=0,i,j,n,f;
        cin>>n;
        int a[n][n];
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>a[i][j];
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
                if(mp[a[i][j]]>0)
                    f=1;
                mp[a[i][j]]++;
            }
            if(f)
                ans2++;
            mp.clear();
        }
        mp.clear();
        for(i=0;i<n;i++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
                if(mp[a[j][i]]>0)
                    f=1;
                mp[a[j][i]]++;
            }
            if(f)
                ans3++;
            mp.clear();
        }
        for(i=0,j=0;i<n;i++,j++)
            ans1+=a[i][j];
        printf("Case #%d: %d %d %d\n",l,ans1,ans2,ans3);
    }
	return 0;
}
