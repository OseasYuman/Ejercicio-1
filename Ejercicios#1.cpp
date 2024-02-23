#include <iostream>
using namespace std;

int main() {
    int opcionseleccionada = 4;
    cout << "La tabla del 4 es:";

    for (int i = 1; i <= 10; i++) {
        cout << opcionseleccionada << " * " << i << " = " << opcionseleccionada * i << endl;
    }

    int numero = 6;
    cout << "La tabla del 6 es:";

    for (int i = 1; i <= 10; i++) {
        cout << numero << " * " << i << " = " << numero * i << endl;
    }

    //FACTORIAL
    int num, factorial = 1;
    cout<<"Digite un numero: "; cin>>num;
    for(int i=1; i<=num;i++){
        factorial = factorial * i;
    }

    cout<<"\nEl factorial del numero es: "<<factorial<<endl;


    //FIBONACCI
    int n,x=0,y=1,z=1;

    cout<<"Digite el numero de elementos: "; cin>>n;

    for (int i=1;i<=n;i++){
        z = x + y;
        cout<<z<<" ";
        x = y;
        y = z;
    }

    cout<<"\n";

    //NUM. PRIMO

    int No;
    cout<<"Ingrese un Numero:"; cin >> No;
    bool primo=true;
    for (int i=2;i<No;i++){
        if(No % i == 0) primo = false;
    }
    if (primo==true) cout<<"El Numero es primo";
    else cout<<"El Numero no es primo";

    //Num. Par

    int A;
    cout<<"Ingrese un Numero: "; cin >> A;

    if(A%2==0){
        cout<<"El Numero es par";
    }
    else cout<<"El Numero es impar";

    // Tablas de Multiplicar #2

    int nm;
    cout<<"Ingrese un Numero:"; cin>>nm;

    for (int i = 1; i <= 10; i++) {
        cout << nm << " * " << i << " = " << nm * i << endl;
    }


    return 0;
}
