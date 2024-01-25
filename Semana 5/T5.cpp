 /*Crea dos matrices de números enteros y
 realiza la multiplicación de ambas matrices. Muestra la matriz resultante.*/

 #include <iostream>
 using namespace std;

 int main (){
    int n = 0;
    cout<<"Ingrese el tamaño de su matriz cuadrada: \n";
    cin>>n;
    int Mat1 [n] [n];
    int Mat2 [n] [n];
    int MatR [n] [n];

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"Ingrese los terminos de su primera matriz: ( "<<i+1<<","<<j+1<<" )\n";
            cin>> Mat1 [i] [j];
        }
    }

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<"Ingrese los terminos de su segunda matriz: ( "<<i+1<<","<<j+1<<" )\n";
            cin>> Mat2 [i] [j];
        }
    }
    int Res = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int Res = 0;
            for (int k = 0; k < n; k++) {
                Res += Mat1[i][k] * Mat2[k][j];
            }
            MatR[i][j] = Res;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<MatR [i] [j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }