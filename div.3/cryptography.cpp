#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
const ll INF = 1e18;
 
 
int main(){
	string s; cin >> s;
	string t; cin >> t;
	ll m = 0; cin >> m;
	ll passou = 0;
	ll custo = 0;
	ll maxcost = 100*1000 + 10;
	vector<vector<ll>> tabela(150,vector<ll>(150));
	//montar a tabela
	for(ll i = 0; i < 150; i++){
		for(ll j = 0; j < 150; j++){
			tabela[i][j] = INF;
			if(i == j){
				tabela[i][j] = 0;
			}
		}
	}
	
	//preencher a tabela	
	for(ll i = 0; i < m; i++){
		char a, b; ll c;
		cin >> a >> b >> c;
		
		tabela[a][b] = min(tabela[a][b],c);
	}
	
	//comparar(????)
	for(ll k = 0; k < 150; k++){
		
		for(ll i = 0; i < 150; i++){
			for(ll j = 0; j < 150; j++){
				if(tabela[i][j] > tabela[i][k] + tabela[k][j]){
					tabela[i][j] = tabela[i][k] + tabela[k][j];
				}
			}
		}	
	}
	bool ok = true;
	for(ll i = 0; i < s.size(); i++){
		char origem = s[i];
		char dest = t[i];
		if(tabela[origem][dest] > maxcost){
			ok = false;
			break;
		}
		custo += tabela[origem][dest];
	}
	if(ok){
		cout << custo;
	}else{
		cout << -1;
	}
	return 0;
}