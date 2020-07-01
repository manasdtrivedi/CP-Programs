/*-----------------------------
Name: Manas Trivedi
Institute: NITK, Surathkal
Dept: CSE
Email: manasdtrivedi@gmail.com
-------------------------------*/

#include <bits/stdc++.h>

using namespace std;

#define mod			1000000007;
#define pi 			acos(-1.0)
#define eps 		1e-9

#define fast 		ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fs 			first
#define sc 			second
#define pb 			push_back
#define mp(a,b)		make_pair(a,b)
#define sp 			printf(" ")
#define nl 			'\n'

#define set0(a)		memset(a,0,sizeof(a))
#define setneg(a)	memset(a,-1,sizeof(a))
#define setinf(a)	memset(a,126)

typedef long long LL;
typedef long double LD;
typedef unsigned long long ULL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<double, double> pdd;
typedef vector<int> vi;
typedef vector<LL> vll;
typedef vector<double> vd;
typedef vector<vector<LL> > matrix;
typedef vector<vector<int> > graph;

#define pr1(x)		cout<<x<<"\n"
#define pr2(x,y)	cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)	cout<<x<<" "<<y<<" "<<z<<"\n"



void solve(){
    LL x, y, n, k;
    cin>>x>>y>>n;
    k = n;
    if(k % x > y){
        k = k - (k % x) + y;
    }
    else if(k % x < y){
        k = k - x + y - (k % x);
    }
    pr1(k);
}

int main(){
	fast;
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}