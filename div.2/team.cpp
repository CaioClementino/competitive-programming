#include<iostream>
 
using namespace std;
 
int main(){
    int n; cin >> n;
    int ic = 0;    
    int k = 0;
    int c = 0;
	int j;
    for(int i = 0; i < n; i++){
        k = 0;
		j = 0;
        for(int t = 0; t < 3; t++){
			ic = 0;
            cin >> ic;
            if(ic == 1){
                k++;
            }
            if(k == 2){
				j++;
				if(j == 1){
                	c  = c + 1;
				}
            }   
        }    
    }
    cout << c;
    return 0;
}
