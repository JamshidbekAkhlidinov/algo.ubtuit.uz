#include <iostream>
#include <iomanip>
#include <cmath>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	cout<<setprecision(8);
	int n;
	cin>>n;
	int k[n];
	
	
	for(int i=1; i<=n; i++){
		cin>>k[i];
	}
	
	float s=1;
	for(int i=1; i<=n; i++){
		if(k[i]%2==0 or k[i]%5==0){
			s*=k[i];
		}	
	}
	
	cout<<setprecision(2);
	cout<<fixed<<sin(s);
		
}