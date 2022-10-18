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
	float k[n];
	
	float s=0,p=0;
	for(int i=1; i<=n; i++){
		cin>>k[i];
		if(k[i]<0){
			p++;
			s+=k[i];
		}		
	}
	
	cout<<setprecision(2);
	cout<<fixed<<s/p;
		
}