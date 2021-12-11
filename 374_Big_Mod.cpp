#include<bits/stdc++.h>
using namespace std;
long long int binaryexpo(long long int b,long long int p,long long int m){
	long long ans=1;
	while(p>0){

		if(p%2){
			ans=(b*ans)%m;
			p=p-1;
		}
		else{
			
			b=(b*b)%m;
			p/=2;
		}
	}
	return ans;
}
int main()
{
	//int _t;cin>>_t;while(_t--)solve();
	long long int b,p,m;
	while(cin>>b && cin>>p && cin>>m){
		long long int ans=binaryexpo(b,p,m);
		cout<<ans<<"\n";
	}
	return 0;
}