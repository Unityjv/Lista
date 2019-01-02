#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int x, r, z;
int maxt=0;
int t[0];
int d=0;

int main(){
	cout << "####### CODIGO BINARIO #######\n \n";
	cout << "|||||||||||||||||||||||||||||||||||||\n\n";
	cout << "Entre com um numero: \n";
	cin >> x;
	if (x<=0) {
		cout << "Digito invalido "; }
	else {
		cout << "O valor convertido em binario e \n"; }
	r=x;
	while (x!=0 ){
		z=x%2;
		x=x/2;
		maxt++; }
	maxt--; 
	x=r;
	t[0]=t[maxt];
	while(x!=0){
		z=x%2;
		x=x/2;
		t[d]=z;
		d++; }
	d--;
	cout << endl;
	while (d>=0) {
		cout << t[d] << "\n";
		d--; }
	cout << endl;
	system("PAUSE");
	system("cls");
    return 0; }
