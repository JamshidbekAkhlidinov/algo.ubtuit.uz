#include <iostream>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

bool fun(float a) {
	
	if(a >= 1.0 && a <= 3.0) return true;
	return false;
	
}

using namespace std;
int main(){
	float a[3];
	
	for(int i = 0; i < 3; i++) {
		cin >> a[i];	
	}
	
	for(int i = 0; i < 3; i++) {
		if(fun(a[i])) cout << a[i] << " ";
	}
	
}

