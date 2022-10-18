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
	float s = 0;
	for(int i=1; i<=n; i++){
		cin>>k[i];
	}
	float min1 = k[1];
	for(int i=1; i<=n; i++){
		min1 = min(min1,k[i]);
	}
	
	cout<<setprecision(2);
	for(int i=1; i<=n; i++){
		cout<<fixed<<k[i]/min1<<" ";
	}
		
}