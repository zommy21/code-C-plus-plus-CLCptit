#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

bool check1(string s){
	for(int i = 0 ; i < 4; i++){
		if(s[i] >= s[i+1])
			return false;
	}
	return true;
}

bool check2(string s){
	char tmp = s[0];
	for(char x : s){
		if(tmp != x) return false;
	}
	return true;
}

bool check3(string s){
	return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}

bool check4(string s){
	for(char x : s){
		if(!(x == '6' || x == '8')) return false;
	}
	return true;
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		string s1 = s.substr(5, 6);
		s1.erase(3, 1);
		//cout << s1 << endl;
		if(check1(s1) || check2(s1) || check3(s1) || check4(s1))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
