#include<bits/stdc++.h>
using namespace std;
struct Tarefa{
	long long t, e;	
	bool operator <(Tarefa other) const{
		return t < other.t;	
	}
};
 
int main(){
	long long n, s; cin >> n >> s;
	vector<Tarefa> v;
	while(n--){
		long long t, e;
		cin >> t >> e;
		v.push_back({t, e});
	}
	sort(v.begin(), v.end());
	
	long long t_atual = s, resp = 0;
	for(auto tarefa : v){
		resp += (t_atual + tarefa.t) - tarefa.e;
		t_atual += tarefa.t;
	}
	cout << resp;
	return 0;
}