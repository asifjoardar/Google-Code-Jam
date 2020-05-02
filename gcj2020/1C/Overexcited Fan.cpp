#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define ss second
#define fs first
using namespace std;

int main() {
	int t,l;
	cin>>t;
	for(l=1;l<=t;l++)
	{
		int x,y,i,ans=1e9;
        bool ok=false;
		string s;
		cin>>x>>y>>s;
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='S')
			    y--;
			else if(s[i]=='N')
			    y++;
			else if(s[i]=='E')
			    x++;
			else
			    x--;
			if(abs(x)+abs(y)<=(i+1))
			{
				ok=true;
                ans=min(ans,(i+1));
			}
			
		}
        if(ok==true)
		    printf("Case #%d: %d\n",l,ans);
        else
            printf("Case #%d: IMPOSSIBLE\n",l);
	}
	return 0;
}
