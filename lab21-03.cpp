#include <iostream>
#include<string>
#include<math.h>
using namespace std;
string nu[]={"un","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
string nd1[]={"diez","veinte","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa"};
string nd2[]={"once","doce","trece","catorce","quince","dieci","veinti"};
string nc[]={"cien","ciento","cientos","quinientos","setecientos","novecientos"};
string nm[]={"mil"};
string nmm[]={"millon","millones"};
string nombre;
int contar(int n){
	int a=1;
	while(n/10>0){
		n=n/10;
		a++;
	}
	return a;
}
for(int i=0;int<3;i++){
	int a,b,c;
	string x,y,z;
	a==1?b==0 & c==0 ?x=nc[0]:x=nc[1]:a==5?x=nc[3]:a==7?x=nc[4]:a==9?x=nc[5]:a==0?x=" ":x=nu[a]+nc[2];
}

int main() {
	int n,grupos;
	cout<<"ingrese el numero: ";
	cin>>n;
	int cant,m;
	m=n;
	cant =contar(n);
	int *n2= new int [cant];
	for(int i=0;i<cant;i++){
		n2[cant-i-1]=m%10;
		m=m/10;
	}
	/*grupos=contar(n)/3+(contar(n)%3?1:0);
	cout<<grupos<<endl;
	cout<<int(n/pow(10,grupos)<<endl;
	(n/pow(10,grupos))<100?(n/pow(10,grupos))<10?cout<<1:cout<<2:cout<<3;*/
	return 0;
}

