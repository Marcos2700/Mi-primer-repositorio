#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"Programa que reconoce la diferencia entre numeros"<<endl;
	cout<<"introduzca numero a"<<endl;
	cin>>a;
	cout<<"introduzca numero b"<<endl;
	cin>>b;
	if(a==b)
	cout<<"son numeros iguales"<<endl;
	if(a<<b)
	cout<<"el numero a es menor al numero b"<<endl;
	if(a>>b)
	cout<<"el numero a es mayor al numero b"<<endl;
	return 0;
}