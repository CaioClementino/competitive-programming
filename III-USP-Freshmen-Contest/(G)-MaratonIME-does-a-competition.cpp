#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> sum(4);
	for(int i = 0; i<n; i++){
		int x; cin >> x;
		sum[i%4] += x;
	}
	int resp = 3;
	
	for(int i = 2; i >= 0; i--){
		if(sum[i] >= sum[resp]){
			resp = i;
			
		}
	}
	cout << (char)('A' + resp);
	return 0;
}