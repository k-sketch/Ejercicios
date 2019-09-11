#include <iostream>

using namespace std;

int main()
{
    /// 1

    int a;
    cout << "Ingrese un numero" << endl;
    cin >> a;
    while(a%2==0 & a%3==0)
        cout << a << " No es primo" << endl;



    for(int a=1;a<=10;a++)
        if(a%2==0 or a%3==0)
            cout << a << " No es primo" << endl;
        else
            cout << a << " Es primo" << endl;



    /// 2

    for(int i=1;i<100;i++)
        if(i%2==0 or i%3==0)
            cout << i << " No es primo " << endl;
        else
            cout << i << " Es primo" << endl;


    int i=1;
    while(i<100)
        if(i%2==0 & i%3==0)
            cout << i << " No es primo" << endl;
            i++;
        else
            cout << i << " Es primo" << endl;
            i++;



    ///3

    int a = 0;
    int b = 0;
    cout<<"Rango de busqueda: ";
    cin>>b;
    for(int i=1;i<= b;i++){
        if(i%2 == 0){
            for(int j=(i/2);j>=1;j--)
                if( i%j==0)
                    a=a+j;
        }
        if(a==i)
            cout<< a << " Es un numero perfecto " <<endl;
        a = 0;
        }




     int numero;
     int suma=0;
     int divisor=1;
     cout << ("Numeros") << endl;

     while(divisor<numero)
	if(numero%divisor==0)
        cout << ("%d",divisor) << endl;
		suma=suma+divisor;
        divisor++;
     if(numero==suma)
			cout << (" Es un numero perfecto");
		else
            cout << (" No es un numero perfecto");



    return 0;
}
