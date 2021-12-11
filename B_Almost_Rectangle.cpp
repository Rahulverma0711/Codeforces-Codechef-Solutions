#include <bits/stdc++.h>
using namespace std;
int x,y;
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='*')
            {
                v.push_back(i);
                v.push_back(j);
            }
        }

    }
    int r1,c1,r2,c2;
    r1=v[0];
    c1=v[1];
    r2=v[2];
    c2=v[3];
    if(r1==r2 && r1<n-1)
    {
        a[r1+1][c1]='*';
        a[r2+1][c2]='*';
    }
    else if(c1==c2 && c1<n-1)
    {
        a[r1][c1+1]='*';
        a[r2][c2+1]='*';
    }
    else if(r1==r2 && r1==n-1)
    {
         a[r1-1][c1]='*';
         a[r2-1][c2]='*';
    }
    else if(c1==c2 && c1==n-1)
    {
        a[r1][c1-1]='*';
        a[r2][c2-1]='*';
    }
    else{
    a[r1][c2]='*';
    a[r2][c1]='*';
    }
    
    for(x=0;x<n;x++){
     for(y=0;y<n;y++)
       cout<<a[x][y];
       cout<<"\n";
    }
    
    

}
return 0;
}