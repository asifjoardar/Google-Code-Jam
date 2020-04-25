    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int i,t;
        cin>>t;
        for(i=1;i<=t;i++)
        {
            int j,k,f;
            string s,ans;
            cin>>s;
            f=s[0]-48;
            for(j=0;j<f;j++)
                ans+="(";
            ans+=s[0];
            for(j=1;j<s.size();j++)
            {
                if(s[j]==s[j-1])
                {
                    ans+=s[j];
                    continue;
                }
                if(s[j]<s[j-1] and s[j-1]!='0')
                {
                    int loop=s[j-1]-s[j];
                    for(k=0;k<loop;k++)
                        ans+=")";
                    ans+=s[j];
                    f-=loop;
                }
                else if(s[j]=='0')
                {
                    for(k=0;k<f;k++) ans+=")";
                    f=s[j]-48;
                    ans+=s[j];
                }
               else
               {
                    int loop=s[j]-s[j-1];
                    for(k=0;k<loop;k++)
                        ans+="(";
                    ans+=s[j];
                    f+=loop;
               }
            }
            if(f)
            {
                for(k=0;k<f;k++)
                    ans+=")";
            }
            printf("Case #%d: ",i);
            cout<<ans<<endl;
        }
    	return 0;
    }
