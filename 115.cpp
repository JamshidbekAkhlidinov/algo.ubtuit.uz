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
	int m;
	cin>>m;
	int s=0;
	for(int i=1; i<=n; i++){
		if(k[i]<m){
			s+=k[i]*k[i];
		}
	}	
		
	cout<<s;
		
}