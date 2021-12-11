#include <bits/stdc++.h>
using namespace std;
const int N=1e8;
vector<char> seive(N+1,true);
vector<int> ans;
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
seive[0]=seive[1]=false;

for(int i=2;i*i<=N;i++)
{
	if(seive[i]==true)
	{
		for(int j=i*i;j<=N;j=j+i)
			seive[j]=false;
	}
}

for(int i=2;i<=N;i++){
if(seive[i]==true)
ans.push_back(i);
}
for(int i=1;i<ans.size();i+=100)
cout<<ans[i-1]<<"\n";
return 0;
}