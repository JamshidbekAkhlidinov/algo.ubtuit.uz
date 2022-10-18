#include <iostream>
#include <cmath>
#include <iomanip>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	cout<<setprecision(8);

	int n;
	cin>>n;
	int arr[n];
	float s=0;
	for(int i=1; i<=n; i++){
		cin>>arr[i];
	}	
	for(int i=1; i<=n; i++){
		s+=arr[i];
	}	
	s = s/n;
	
	float s2=0;
	int d =0;
	for(int i=1; i<=n; i++){
		if(s>arr[i]){
			s2+=arr[i];
			d++;
		}
			
	}	
	
	cout<<setprecision(2);
	cout<<fixed<<s2/d;
	
	
	
}