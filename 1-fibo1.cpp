#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll kt(ll n){
	ll f1 = 1 , f2 = 1, fn = 1;
	if(n==1 || n == 0) return n;
	else{
		for(int i = 3 ; i <=n ; i++){
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
		}
		
	}
	return fn;
}
int main(){
	ll n ; cin >> n;
	for(int i = 1 ; i <= n ;i++){
		cout<<kt(i)<< " "<<endl;
	}
	return 0;
}
