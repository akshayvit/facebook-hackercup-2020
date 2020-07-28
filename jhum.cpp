#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define tc int _;fi>>_;while(_--)
#define rep(i,s,n,d) for(i=s;i<=n;i+=d)

main()
{
	ofstream fp;
	ifstream fi;
	fp.open("abc.txt");
	fi.open("ti.txt");
	ll t=1;
	tc{
		
		ll n;
		fi>>n;
		string i,o;
		fi>>o;
		fi>>i;
	//	cout<<i<<" "<<o<<"\n";
		vector<vector<char> > dp(n);
		ll j;
		rep(j,0,n-1,1)
		{
			dp[j].resize(n);
			dp[j][j]='Y';
		}
		rep(j,0,n-1,1)
		{
			if(j<n-1 && o[j+1]=='Y')
			   dp[j][j+1]=i[j];
		    else if(j<n-1)
		       dp[j][j+1]='N';
			if(j>0 && o[j-1]=='Y')
			   dp[j][j-1]=i[j];
		    else if(j>0)
		       dp[j][j-1]='N';
		}
		ll k;
		rep(k,0,n-1,1)
		{
			ll x;
			rep(x,0,n-1,1)
			{
				ll y;
				rep(y,0,n-1,1)
				{
					if(dp[x][y]!='Y'){
					if(dp[x][k]=='Y' && dp[k][y]=='Y'){
					  dp[x][y]='Y';
				}
				    else
				      dp[x][y]='N';
				  }
				  
				}
			}
		}
		ll x,y;
		fp<<"Case #"<<(t++)<<":\n";
		rep(x,0,n-1,1)
			{
				rep(y,0,n-1,1)
				{
					fp<<dp[x][y];
				}
				fp<<"\n";
			}
			//fp.close();
	}
	fi.close();
	fp.close();
}
