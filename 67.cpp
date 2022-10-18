#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	cout<<setprecision(8);
	float n,x;
	cin>>n>>x;
	float s=0.000000001;
	for(float i=1; i<=n; i++){
		s +=  pow(x,i)/sqrt(i);
	}
	s+=0.000000001;
	cout<<setprecision(3);
	cout<<fixed<<s;	
	
	
}