#include <bits/stdc++.h>
using namespace std;
 
bool bissexto(int n){
	if(n%400 == 0){
		return true;
	}else if(n%4 == 0){
		if(n%100 == 0){
			return false;
		}else{
			return true;
		}
	}
	return false;
	
}
 
int main(){
	string dias[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	
	int d=0;
	int ano=1867;
	
	int n; cin >> n;
	while(n--){
		ano++;
		if(bissexto(ano))
			d+=2;
		else
			d++;
	}
	cout << dias[d%7] << endl;
	
	return 0;
}