#include<bits/stdc++.h>
using namespace std;
int main(){
	int e; cin >> e; 
	int sum = 0;
	
	for(int i = 0; i < e; i++){
		int x; cin >> x;
		sum += x;
	}
	 if(sum%5 == 0){
		cout << sum/5; 
	 }else{
		 cout << 1+sum/5;
	 }
	return 0;
}