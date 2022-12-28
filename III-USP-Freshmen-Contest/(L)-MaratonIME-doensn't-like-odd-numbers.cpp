#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int sum;
	vector<int> v;
	sum = 0;
	for(int i=0; i < n; i++){
		int a;
		cin >> a;
		if(a%2 == 0){
			sum += a;
		}else {
			v.push_back(a);
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	
	if(v.size()%2 == 1){
		v.pop_back();
	}
	
	for(int k : v){
		sum += k;
	} 
	
	cout << sum;
	
	
	return 0;
}