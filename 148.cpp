#include <iostream>
#include <cmath>
#include <string>

//Jamshidbek Axlidinov 
//Tatu Dif 315-21

using namespace std;
int main(){
	
	string str;
	getline(cin,str);
	
//	char a = str[0];
	const char a = 'A'	;
	string k[1000];
	int l=0;
	
	
	for(int i=0; i<str.length(); i++){
		if(str[i] == ' '){
			l++;
		}else{
			k[l] = k[l] + str[i];
		}
	}
	

	for(int i=0; i<=l; i++){
		if(a == k[i][0] ){
			cout<<k[i]<<"\n";
		}
	}
	
}