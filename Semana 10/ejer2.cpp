#include<iostream>
using namespace std;
class Pet {

protected:
string _name;
int _edad;

public: 
Pet (string na, int edad) : _name(na), _edad(edad) {} 

virtual void print () const {
    cout<<"Name: "<<_name<<endl;
    cout<<"Edad: "<<_edad<<endl;
}

};

class Dog : public Pet{
private: 
int _cariño; 
public: 
Dog (string na, int edad, int ca) : Pet(na, edad), _cariño(ca) {}
void Cariño (){
    if (_cariño < 100) {
        cout<<"No hace nada"<<endl;
    } else {
        cout<<"Le da la patita"<<endl;
    }
}
virtual void print () const override {
    Pet::print ();
    cout<<"Cariño de: "<<_cariño<<endl;
}
};
class GermanShephard : public Dog {
private: 
int _fineza;
public: 
GermanShephard (string na, int edad, int ca, int fi) : Dog(na, edad, ca), _fineza(fi) {}
void Fineza (){
    if (_fineza < 100) {
        cout<<"No es nada fino"<<endl;
    } else {
        cout<<"Finoooooo"<<endl;
    }
}
virtual void print () const override {
    Dog::print ();
    cout<<"Fineza de: "<<_fineza<<endl;
}
};

class PolishLowland : public Dog {
private: 
int _Agresivo;
public: 
PolishLowland (string na, int edad, int ca, int ag) : Dog(na, edad, ca), _Agresivo(ag) {}
void Agresivo (){
    if (_Agresivo < 100) {
        cout<<"No hace nada"<<endl;
    } else {
        cout<<"te muerdeeeeee"<<endl;
    }
}
virtual void print () const override {
    Dog::print ();
    cout<<"Agresividad de: "<<_Agresivo<<endl;
}
};
int main (){
    PolishLowland Miperro ("Enrique", 7, 101, 90);
    Miperro.print();
    Miperro.Cariño();
    return 0;
}