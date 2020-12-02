#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char n[100];
	char m[100];
	
	cout<<"Program Polindrom"<<endl;
	cout<<"Masukan Kata : ";cin>>n;
	
	strcpy(m,n);
	strrev(m);
	
	if(strcmp(n,m)==0){
		cout<<"Merupakan kata Polindrom,"<<m;
	}
	else{
		cout<<"Bukan Merupakan Kata Polindrom,"<<m;
	}
	return 0;
}
