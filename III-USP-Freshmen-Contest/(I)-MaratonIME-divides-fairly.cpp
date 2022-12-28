#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int a, b,sum;
		cin >> a >> b;
		sum = a +b;
		
		if(sum%2 == 1){
			if(abs(a-b) == 1){
				cout << "Ok" << endl;
			}else {
				cout << sum/2 << " " << sum/2+1 << endl;
			}
		}else {
			if(abs(a-b) == 0){
					cout << "Ok" << endl;
				}else {
					cout << sum/2 << " " << sum/2 << endl;
				}
			}
		}
	return 0;
}
