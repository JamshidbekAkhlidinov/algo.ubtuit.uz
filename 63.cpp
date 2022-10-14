#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

int func(int n){
	int s=1;
	for(int i=1; i<=n; i++){
		s*=i;
	}
	return s;
}

using namespace std;
int main(){
	int n;
	cin>>n;
	
	float s=0;
	
	for(int i=1; i<=n; i++){
		s+= pow(-1,i-1)*1.0/func(2*i-1);
	}
	
	cout<<setprecision(4);
	cout<<fixed<<s;
	
	
	
}