#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <cctype>
#include <list>
#include <iterator>
#include<string.h>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
float bank;
    int with;
    cin>>with;
    cin>>bank;
   
    if(0<with<=2000 && 0<=bank<=2000 &&with%5==0 && bank>=(with+0.50))
   {
        
        std::cout<<fixed<<setprecision(2)<<bank-with-0.50;
    }
    else{
       
       std::cout<<fixed<<setprecision(2)<<bank;
    }
return 0;
}