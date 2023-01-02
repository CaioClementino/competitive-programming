#include <iostream>
 
using namespace std;
 
int main()
{
    int total, passed;
    cin >> total >> passed; 
 
    int score;
	
    for (int i = 0; i < passed; ++i)
    {
        cin >> score;
        if (score == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
 
    int score2;
    for (int i = passed; i < total; ++i)
    {
        cin >> score2;
        if (score2 != score)
        {
            cout << i << endl;
			
            return 0;
        }
    }
 
    cout << total << endl;
}