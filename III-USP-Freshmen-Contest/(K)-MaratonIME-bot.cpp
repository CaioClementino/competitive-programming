#include<bits/stdc++.h>
using namespace std;
 
bool eh_letra(char c){
	if('A' <= c && c <= 'Z'){
		return true;
	}
	if('a' <= c && c <= 'z'){
		return true;
	}
	return false;
}
 
bool contem(string p, string s){
	for(int i =0; i < p.size(); i++){
		if(p.substr(i, s.size()) == s && (i-1 < 0 or !eh_letra(p[i -1])) && (i+s.size() >= p.size() or !eh_letra(p[i + s.size()])) ){
			return true;
		}
	}
	return false;
}
 
int main(){
	string text; getline(cin, text);
	
	if(text.back() == '?'){
		cout << "7";
	}else if(contem(text, "Sussu")){
		cout << "AI SUSSU!";
	}else{
		cout << "O cara é bom!";
	}
	
	return 0;
}