#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<long long> v(n);
	long long soma = 0;
	for(long long &a : v){
		cin >> a;
		soma += a;
	}
	long long resp = 0;
	for(int i = 0; i < n; i++){
		resp += v[i]*(soma-v[i]);	
	}
	cout << resp/2;
	return 0;
}