#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

int faktr(int n){
	int s=1;
	for(int i=1; i<=n; i++){
		s*=i;
	}
	return s;
}

using namespace std;
int main(){
	
	cout<<setprecision(8);
		
	int n,x;
	cin>>n>>x;
	
	long double s=0;
	
	for(int i=1; i<=n; i++){
		s+=pow(-1,i-1)*pow(x,2*i-2)/faktr(2*i-2);
	}
	
	cout<<setprecision(3);
	cout<<fixed<<s;
	
	
	
}