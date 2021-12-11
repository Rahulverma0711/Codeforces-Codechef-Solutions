//जय हिन्द
//Jai Hind

#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))

int main()
{
ios_base :: sync_with_stdio(false);cin.tie(0);cout.tie(0);
int _t; cin>>_t;while(_t--)
{
    int n;
        cin>>n;
        int a[n];
       vi e,o;
        for(int i =0; i<n;i++){
            cin>> a[i];
            if(a[i] %2 == 0){
                e.push_back(a[i]);
            }
            else{
                o.push_back(a[i]);
            }
        }
        if( n== 1){
            cout<<  a[0] <<endl;
            continue;
        }
        if(n==2 ){
            if(a[0]%2==0){
                cout<< a[0] << " "<< a[1]<<endl;
            }
            else{
                cout<< a[1] << " "<<a[0]<<endl;
            }
         continue;
        }
        
        int i=0;
        int j=0;
        
        while( i<e.size()){
            cout<<e[i]<<" ";
            i++;
        }
         while( j<o.size()){
            cout<<o[j]<<" ";
            j++;
        }
        cout<<endl;
        
    
}
return 0;
}