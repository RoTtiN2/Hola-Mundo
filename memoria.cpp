#include <iostream>
using namespace std;

class Personaje

    class Enano
{
private:
public:
    Personaje() {}
    ~Personaje()
}

{
private:
    float altura;
    int edad;
};
public;
Enano() {}
~Enano(){};
void Inicializar()
{
    this->altura = 2;
    this->edad = 150;
    this->vida = 10;
}
void Comer()
{
    this->vida += 1;
}
int main(int argc, char const *argv[])
{

    int i = 5;
    bool b = true;
    float f = 0.1;
    double d = 0.1;
    char c = 'a';
    Enano e;

    cout << "Tamaño tipos de datos nativos:" << endl;
    cout << "Tamaño int: " << sizeof(int) << "bytes." << endl;
    cout << "Tamaño bool: " << sizeof(bool) << "bytes." << endl;
    cout << "Tamaño float: " << sizeof(float) << "bytes." << endl;
    cout << "Tamaño double: " << sizeof(double) << "bytes." << endl;
    cout << "Tamaño char: " << sizeof(char) << "bytes." << endl;
    cout << "Tamaño char: " << sizeof(Enano) << "bytes." << endl;

    cout << "Mmoria Estatica C/C++:" << endl;
    cout << "Direccion de: int" << &i << endl;
    cout << "Direccion de: bool" << &b << endl;
    cout << "Direccion de: float" << &f << endl;
    cout << "Direccion de: double" << &d << endl;
    cout << "Direccion de: char" << static_cast<void *>(&c) << endl;
    cout << "Direccion de: Enano" << &e << endl;

    cout << endl;
    cout << "Memoria Dinamica C:" << endl;
    cout << "Direccion Dinamica:" << malloc(2) << endl;
    cout << "Direccion Dinamica int" << malloc(sizeof(int)) << endl;

    // Casteo de punteros C
    int *direccion = (Enano *)malloc(sizeof(Enano));
    direccion->Inicializar();

    // Punteros en C++
    Enano *instancia = new Enano;

    // operador ->
    instancia->comer();
    instancia->hablar();

    // polimorfismo
    Personaje *p = new Duende();
    Personaje *q = new Enano();

    p->hablar();
    p->comer();

cout<<endl;
cout<<&duendes[0]<<endl;
cout<<&duendes[1]<<endl;
cout<<&duendes[2]<<endl;
cout<<&duendes[3]<<endl;
cout<<&duendes[4]<<endl;
//CONVERSIONA DIRECCION
cout<<&duendes[0]+1<<endl;
cout<<&duendes[0]+1<<endl;
cout<<&duendes[0]+2<<endl;
cout<<&duendes[0]+3<<endl;
cout<<&duendes[0]+4<<endl;

    return 0;
}