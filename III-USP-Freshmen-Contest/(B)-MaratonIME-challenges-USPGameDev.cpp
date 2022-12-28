#include<bits/stdc++.h>
using namespace std;
 
long long dist(long long x, long long y){
	return x*x + y*y;
}
 
int main(){
	long long x1, y1; cin >> x1 >> y1; 
	long long x2, y2; cin >> x2 >> y2; 
	
	if(dist(x1,y1) == dist(x2,y2)){
		cout << "Empate";
	}else if(dist(x1,y1) < dist(x2, y2)){
		cout << "Russo";
	}else{
		cout << "Wil";
	}
	
	return 0;
}