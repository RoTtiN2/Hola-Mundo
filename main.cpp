#include <iostream>
#include <Alimento.hpp>
#include <Mascota.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    Mascota firulais;
    Alimento carne(10);

 firulais.Comer(carne);

 firulais.Jugar();
 firulais.Jugar();
 firulais.Jugar();

 cout
 <<"vida de firulais"
 << firulais.LeerVida()
 << endl;
    return 0;
}
