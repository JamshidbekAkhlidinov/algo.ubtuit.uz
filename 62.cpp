#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	int n;
	cin>>n;
	
	float s=0;
	
	for(int i=1; i<=n; i++){
		s +=pow(-1,i-1)*sin(pow(i,i))/pow(2,i);
	}
	
	cout<<setprecision(2);
	cout<<fixed<<s;
	
	
	
}