#include <iostream>

using namespace std;

int main() {
	
	float x, y;
	cin >> x >> y;
	
	if(x >= -1.0 && x <= 1.0 && y >= -2.0 && y <= 1.0) {
		
		if(y >= 0.0) {
			if(x >= 0.0) {
				
				if(x >= y) cout << "yes";
				else cout << "no";
				
			}
			else {
				if(x <= y) cout << "yes";
				else cout << "no";
			}
			
		} 
		else cout << "yes";
	}
	else cout << "no";
	
	
	return 0;
}