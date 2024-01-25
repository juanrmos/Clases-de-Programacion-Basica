/*Crea un vector de caracteres y pide al usuario que ingrese un carácter.
 Luego, cuenta y muestra cuántas veces aparece ese carácter en el vector.*/
 #include <iostream>
 #include <vector>
 using namespace std;

 int main (){
    int n = 0;
    cout<<"Ingrese la cantidad de letras que va a ingresar: "<<endl;
    cin>>n;
    vector <char> let(n);

    for (int i = 0; i < let.size(); i++){
        cout<<"Ingrese su "<<i+1<<" letra:\n";
        cin>> let [i];
    }

    int cta = 1;

    for ( int i = 0; i < let.size (); i++){
        if ( let[i] == let [i - 1]) continue;
        for (int j = 1 + i; j < let.size (); j++){
            if (let[i] == let [j]){
                cta++;
            }
        }
        cout<<"La letra: "<<let[i]<<" aparece: "<<cta<<endl;
        cta = 1;
    }

    return 0;
 }