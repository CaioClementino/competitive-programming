#include<iostream>
using namespace std;
 
int main(){
	int t = 0;
	int c;
	int v;
	cin >> t;
	int auxT = t;
	int cT = 0;
	int vT = 0;
	for(t; t >= 1; t--){
		cin >> c;
		cT = cT + c;
	}
	for(t = auxT; t >= 1; t-- ){
		cin >> v;
		vT = vT + v;
	}
	if(cT == vT){
		cout << "Sim";
	}else{
		cout << "Nao";
	}
	return 0;
}