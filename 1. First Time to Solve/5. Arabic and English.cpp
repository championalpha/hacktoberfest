#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

// Author - ADITYA SINGH (https://github.com/adityanjr)

#define ll              long long
#define pb              push_back
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n)       int *arr=new int[n];
#define t(x)            int t; cin>>t; while(t--)
#define fa(n)           for(int i=0; i<n; i++)
#define f(x,y)          for(int i=x; i<=y; i++)


void a_d_i() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {

	a_d_i();

	int n, x = 0;
	bool english = 0;
	vector<string> v;
	t(x) {
		cin >> n ;
		v.resize(n) ;
		for (int i = 0; i < n; i++) {
			cin >> v[i] ;
			if (v[i][0] >= 'a') {
				english = true ;
				x = i ;
			}
		}
		if (english) {
			for (int i = x + 1; i < n; i++)
				cout << v[i] << " " ;
			cout << v[x] << " " ;
			for (int i = 0; i < x; i++)
				cout << v[i] << " " ;
			cout << endl ;
		} else {
			for (int i = 0; i < n; i++)
				cout << v[i] << " " ;
			cout << endl ;
		}
		english = false ;
	}

	return 0;
}