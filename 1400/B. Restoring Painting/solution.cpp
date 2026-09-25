// B. Restoring Painting
// Codeforces : [https://codeforces.com/contest/675/problem/B]  

#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<cstring>
#include<climits>
#include<iomanip> 
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define v vector<ll>  

void solve(){ 
    ll n,a,b,c,d; cin>>n>>a>>b>>c>>d; 
 
    // |v|a|w|
    // |b|x|c|
    // |y|d|z|
 
    ll ans = n; // for all possible x (middle element)
    ll c1 = a+b, c2 = a+c, c3 = b+d, c4 = c+d;
    ll cnt = 0;
    
    // k_org : that is sum of all 4 elements, k = k_org - x, where x is middle most element 
    // that is why 3 <= k <= 3*n
    for(int k=3;k<=3*n;k++){
        if((1<=(k-c1) && (k-c1)<=n) && (1<=(k-c2) && (k-c2)<=n) 
            && (1<=(k-c3) && (k-c3)<=n) && (1<=(k-c4) && (k-c4)<=n)){
            cnt++;
        } 
    }
    cout<<n*cnt<<endl;
}
int main(){
    fastio();
    int t=1;
    while(t--) solve();
    return 0;
}

// Complexity
// Time: O(n)
// Space : O(1)
