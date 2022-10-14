#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	
	float s=0;
	
	for(int i=1; i<=n; i++){
		s+= pow(-1,i-1)*1.0/i*sin(i*x);
	}
	
	cout<<setprecision(3);
	cout<<fixed<<s;
	
	
	
}