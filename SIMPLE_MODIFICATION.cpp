#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int n,m,u,q;
cin>>n>>m>>u>>q;
int a[n][m];
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>a[i][j];
int b[n][m];
for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
   b[i][j]=a[i][j];

for(int i=1;i<n;i++)
b[i][0]-=a[i-1][0];

for(int i=1;i<m;i++)
b[0][i]-=a[0][i-1];

for(int i=1;i<n;i++)
{
for(int j=1;j<m;j++)
b[i][j]=b[i][j]-a[i-1][j]-a[i][j-1]+a[i-1][j-1];
}
while(u--)
{
  long long k;
  int r1,c1,r2,c2;
  cin>>k>>r1>>c1>>r2>>c2;
  b[r1][c1]+=k;
  if(r2+1<n && c2+1<m)b[r2+1][c2+1]+=k;
  if(r2+1<n)b[r2+1][c1]-=k;
  if(c2+1<m)b[r1][c2+1]-=k;

}
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
{
  b[i][j]=b[i][j];
  if(i>0) b[i][j]+=b[i-1][j];
  if(j>0)b[i][j]+=b[i][j-1];
  if(i>0 && j>0)b[i][j]-=b[i-1][j-1]; 
}
for(int i=1;i<m;i++)
b[0][i]+=b[0][i-1];

for(int i=1;i<n;i++)
b[i][0]+=b[i-1][0];

for(int i=1;i<n;i++)
{
	for(int j=1;j<m;j++)
	b[i][j]+=(b[i-1][j]+b[i][j-1]-b[i-1][j-1]);
}
while(q--)
{
  int r1,c1,r2,c2;
  cin>>r1>>c1>>r2>>c2;
  long long ans=b[r2][c2];
  if(r1-1>=0)ans-=b[r1-1][c2];
  if(c1-1>=0)ans-=b[r2][c1-1];
  if(r1-1>=0 && c1-1>=0)ans+=b[r1-1][c1-1];
  cout<<ans<<"\n";
}

return 0;
}