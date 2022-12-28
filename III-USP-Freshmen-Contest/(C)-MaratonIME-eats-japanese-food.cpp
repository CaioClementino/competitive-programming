#include<bits/stdc++.h>
using namespace std;
 
struct Prato{
	int x, y, r;
};
 
bool intersec(Prato p1, Prato p2){
	int sr = p1.r + p2.r;
	int dx = abs(p1.x - p2.x);
	int dy = abs(p1.y - p2.y);
	int dist2 = dx*dx + dy*dy;
	return dist2 < sr*sr;
}
int main(){
	int q; cin >> q;
	vector<Prato> v;
	while(q--){
		char c; cin >> c;
		int x, y, r; cin >> x >> y >> r;
		Prato novo_prato = {x, y, r};
		if(c == 'A'){
			//n pode ter intersecção de pratos
			bool ok = true;
			for(auto p : v){
				if(intersec(p, novo_prato)) ok = false;
			}
			if(ok){
				v.push_back(novo_prato);
				cout << "Ok" << endl;
			}else cout << "No" << endl;
		}else{
			vector<Prato> tmp;
			for(auto p : v){
				if(p.x != novo_prato.x or p.y != novo_prato.y or p.r != novo_prato.r) tmp.push_back(p);	
			}
			if(tmp.size() == v.size()) cout << "No" << endl;
			else{
				v = tmp;
				cout << "Ok" << endl;
			}
		}
	}
	return 0;
}