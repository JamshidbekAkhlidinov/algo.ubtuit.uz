#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

int faktr(float n){
	float s=1;
	for(int i=1; i<=n; i++){
		s*=i;
	}
	return s;
}

using namespace std;
int main(){
	
	cout<<setprecision(8);
		
	float n,x;
	cin>>n>>x;
	
	float s = 0;
	
	for(float i=1; i<=n; i++){
		s+=(pow(-1,i-1)*pow(x,2*i-1))/faktr(2*i-1);
	}
	s+=0.0000001;
	
	cout<<setprecision(3);
	cout<<fixed<<s;
	
	
	
}