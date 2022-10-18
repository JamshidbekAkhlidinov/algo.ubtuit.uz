#include <iostream>
#include <iomanip>
#include <cmath>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	int n;
	cin>>n;
	float k[n];
	for(int i=1; i<=n; i++){
		cin>>k[i];
	}
	float m;
	cin>>m;
	float s = 0;
	for(int i=1; i<=n; i++){
		if(k[i]>m){
			s+=k[i];
		}
	}
	
	

	cout<<s;
		
}