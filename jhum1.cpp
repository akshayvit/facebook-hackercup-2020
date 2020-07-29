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
	fi.open("t2.txt");
	ll t=1;
	tc{
		
		ll n;
		fi>>n;
		string s;
		fi>>s;
		stack<char> st;
		ll i;
		rep(i,0,2,1)
		{
			st.push(s[i]);
		}
		char a=st.top();
		st.pop();
		char b=st.top();
		st.pop();
		char c=st.top();
		st.pop();
		map<char,ll> mp;
		mp[a]++,mp[b]++,mp[c]++;
		if(mp['A']>mp['B'] && mp['A'] && mp['B'])
		{
			st.push('A');
		}
		else if(mp['B']>mp['A'] && mp['A'] && mp['B'])
		  st.push('B');
		else
		{
			st.push(c);
			st.push(b);
			st.push(a);
		}
		 // cout<<a<<" "<<b<<" "<<c<<"\n";
		 stack<char> st1=st;
		 
	    rep(i,3,n-1,1)
	    {
	      mp.clear();
	      if(st.size()>=3){
	      char a=st.top();
		  st.pop();
		  char b=st.top();
		  st.pop();
		  char c=st.top();
		  st.pop();
		  mp[a]++,mp[b]++,mp[c]++;
	//	  cout<<a<<" "<<b<<" "<<c<<" "<<"\n";
		  if(mp['A']>mp['B'] && mp['A'] && mp['B'])
		{
			st.push('A');
			st.push(s[i]);
		}
		else if(mp['B']>mp['A'] && mp['A'] && mp['B']){
		  st.push('B');
		  st.push(s[i]);
	}
		else{
			st.push(c);
			st.push(b);
			st.push(a);
			st.push(s[i]);
		}
		}
		else
		  st.push(s[i]);
		stack<char> st1=st;
		}
		if(st.size()>=3){
		mp.clear();
		char a=st.top();
		  st.pop();
		  char b=st.top();
		  st.pop();
		  char c=st.top();
		  st.pop();
		  //cout<<a<<" "<<b<<" "<<c<<"\n";
		  
		  mp[a]++,mp[b]++,mp[c]++;
		  if(mp['A']>mp['B'] && mp['A'] && mp['B'])
		{
			st.push('A');
		}
		else if(mp['B']>mp['A'] && mp['A'] && mp['B'])
		  st.push('B');
	}
	    fp<<"Case #"<<(t++)<<": ";
		if(st.size()==1)
		  fp<<"Y\n";
	    else
	      fp<<"N\n";
	}
	fi.close();
	fp.close();
}
