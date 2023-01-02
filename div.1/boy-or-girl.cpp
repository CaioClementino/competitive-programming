#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main(){
	string nick; cin >> nick;
	ll len = nick.length();
	vector<char> cnick;
	for(ll i = 0; i < len; i++){
		cnick.push_back(nick[i]);
	}
	
	sort(cnick.begin(), cnick.end());
	auto it = unique(cnick.begin(), cnick.end());
	
	cnick.resize(distance(cnick.begin(), it));
	
	if(cnick.size() % 2 ==  0){
		cout << "CHAT WITH HER!";
	}else{
		cout << "IGNORE HIM!";
	}
}