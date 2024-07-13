#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int  main(){
float num1,num2,resultado=0;
int op;
char continuar;
do{
cout<<"Bienvenido\n";
cout<<"Que operacion desea realizar\n";
cout<<"1 : Suma\n";
cout<<"2 : Resta\n";
cout<<"3 : Multiplicacion\n";
cout<<"4 : Division\n";
cout<<"5 : Raiz\n";
cin>>op;
switch(op){
case 1:
    cout<<"Ingrese el primer valor que quiere sumar :\n";
    cin>>num1;
    cout<<"Ingrese el segundo valor que quiere sumar :\n";
    cin>>num2;
    resultado = num1+num2;
    cout<<"El resultado de "<<num1<<" + "<<num2<<" es = "<<resultado<<"\n";
    break;
case 2:
    cout<<"Ingrese el primer valor que quieres restar : \n";
    cin>>num1;
    cout<<"Ingrese el segundo valor que quieres restar :\n";
    cin>>num2;
    resultado=num1-num2;
    cout<<"El resultado de "<<num1<<" - "<<num2<<" es igual a : "<<resultado<<"\n";
    break;
case 3:
    cout<<"Ingrese el primer valor que quiere multiplicar:\n";
    cin>>num1;
    cout<<"Ingrese el segundo valor que quiere multipliocar:\n";
    cin>>num2;
    resultado =num1*num2;
    cout<<"El resultado de"<<num1<<" * "<<num2<<" es = "<<resultado<<"\n";
    break;
case 4:
    cout<<"Ingrese el primer valor  quieres dividir:\n";
    cin>>num1;
    cout<<"Ingrese el segundo valor que quieres dividir:\n";
    cin>>num2;
    resultado =num1/num2;
    cout<<"El resultado de "<<num1<<" * "<<num2<<" es igual a = "<<resultado<<"\n";
    break;
case 5:
    cout<<"Ingrese al valor que quieres sacarle raiz :\n";
    cin>>num1;
    resultado=sqrt(num1);
    cout<<"El resultado de "<<num1<<" es igual a "<<resultado<<"\n";
    break;
}
cout<<"Quieres realizar otra operacion : (s/n)\n";
cin>>continuar;
}while(continuar == 's'|| continuar == 'S');
cout<<"Gracias por usar la calculadora ,Adios\n";
return 0;
}
