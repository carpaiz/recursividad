#include <iostream>
using namespace std;
int temporizador(int n);
int factorial(int n);
main(){
	int num = 0;
	cout<<"Ingrese Numero:";
	cin>>num;
	//cout<<"Numero: "<<temporizador(num)<<endl;
	cout<<"El factorial es:"<<factorial(num)<<endl;
system("PAUSE");
}
int temporizador(int n){
	if (n>0){
		cout<<n<<endl;
		n = temporizador(n-1); // recursividad
	}
	return n;
}
int factorial(int n){
	if (n<0){
		n = 0;
	}else{
		if (n>1){
		 n = n * factorial(n-1);// recursividad
		}else{
			n = 1;
		}
	}
	return n;
}

