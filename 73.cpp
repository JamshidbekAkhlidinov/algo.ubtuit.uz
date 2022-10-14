#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

ausing namespace std;
int main(){
	
	cout<<setprecision(8);
		
	float n,x;
	cin>>n>>x;
	
	float s=0;
	
	for(float i=1; i<=n; i++){
		s+= (pow(x,2*i-1))/((2*i-1));
	}
	
	cout<<setprecision(3);
	cout<<fixed<<s;
	
	
	
}