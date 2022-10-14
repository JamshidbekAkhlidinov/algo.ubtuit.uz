#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	cout<<setprecision(8);

	int n,x;
	
	cin>>n>>x;
	
	float s=0;
	

	for(int i=1; i<=n; i++){
		s+= pow(x,i)/sqrt(i);
	}
	
	cout<<setprecision(3);
	cout<<fixed<<s;
	
	
	
}