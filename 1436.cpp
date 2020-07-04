#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	int n;
	int count = 0;
	int start = 665;

 
	cin >> n;
 
	while(++start){
		string a = to_string(start);
 
		if (a.find("666") != string::npos) {
			++count;
		}
 
		if (count == n) {
			cout << start << endl;
			break;
		}
	}
 
	return 0;
}
