#include<iostream>
using namespace std;
 
int main(){
	int d = -1;
	for(int i = 0; i <= 4; i++){
		cin >> d;
		if(d == 0){
			cout << i + 1;
		}
	}
	return 0;
}