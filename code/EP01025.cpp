/////////NguyenNhatMinh////////
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <queue>
#include <cstring>
#include <bitset>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <bits/stdc++.h>

//   *******    *****   *   *   ******
//      *       *       **  *       *
//      *       *****   * * *      *
//      *       *       *  **     *
//      *       *****   *   *    ******

typedef long long ll;
typedef long double ld;
typedef long long ll;
typedef long double ld;
#define nc(x) cout << (x) << '\n';
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
#define ull unsigned long long int
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define all(x) x.begin(), x.end()
#define ins insert
const int N = 1e6;
int a[N];
using namespace std;

int main() {
    faster();
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    double a , b ;
    char s ;
    cin >> a >> s >> b ;
    switch (s) {
	case '+':
		printf("%0.2f",a+b);
		break;
	case '-':
		printf("%0.2f",a-b);
		break;
	case '*':
		printf("%0.2f",a*b);
		break;
	case '/':
		printf("%0.2f",a/b);
		break;
	}
    return 0 ;
}
