#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main(){
	ll t; cin >> t;
	
	
	for(ll i = 0; i < t; i++){
		string s; cin >> s;	
		ll x = s.length();
		if(x > 10){
			cout << s[0] << x - 2 << s.back() << endl;
		}else{
			cout << s << endl;
		}
	}
	return 0;
}