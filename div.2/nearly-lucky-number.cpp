#include<iostream>
 
using namespace std;
 
int main(){
//--contar os números--
	long long n = 0;
	cin >> n;
	long long r = n;
	int j = 0;
	do{
		r = r / 10;
		j++;
	}
	while(r != 0);
//--------------------
	int array[j];
	int s = 0;
	for(j;j != 0; j--){
		
		array[j-1] = n % 10;
		n = n/10;
		if(array[j-1] == 4 || array[j-1] == 7){
			s++;
		}
	}
 
	if(s == 4 || s == 7){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}