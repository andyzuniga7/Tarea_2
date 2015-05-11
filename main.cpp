#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr;
} //desreferenciar en base a lo visto en clase

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a+*b;
} //desferencua en base a lo visto en clase & sumar de manera normal los dos valores

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if (a == b)
    return true;
    else
    return false;
} //comparación de valores dados

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if (*a == *b)
    return true;
    else
    return false;
} //desrefenciar en base a lo visto en clase & comparación de valores dados


//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    char l = a->at(0);
    return l;
} //ejemplo tomado de: http://www.cplusplus.com/reference/string/string/at/
 //cambio de a.at(0) a a->(0) por error al compilar & codeblocs sugerió en cambio

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    string q;
    string w=*a;
    for (int z=a->length()-1;z>=0;z--)
    {
        q=q+w[z];
    }
    if (q==w)
        return true;
    else
        return false;
}//var w guarda el string a, utilizamos la var q para guardar la palabra que esta en w usando un ciclo for pero desde el ultimo caracter hasta el primero & así se guarda al revés, luego se compara la palabra q con la palabra w & devuelve el valor true o false dependiendo de si se cumple la condirción

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int res=1;
    for (int z=0;z<*exponente;z++)
    {
        res*=*base;
    }
    return res;
}//se inicia la var res para almacenar la potencia & despues mediante un ciclo for se multiplica la base por base dependiendo del exponente

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
