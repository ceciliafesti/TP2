/*Verificacion numero par o impar.
CeciliaGiselleFesti
29/04/2015
*/

#include <iostream>
using namespace std;

int main () {
int num;
cout<<"Ingrese un numero para ver si es par o impar:"<<endl;
cin>>num;

if (num%2 == 0){
cout<<"Es un numero par.";
}
else{
cout<<"Es un numero impar.";
}

}