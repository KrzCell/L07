#include <iostream>
using namespace std;

#define Zadanie7A


#ifdef Zadanie7A

bool ldoskonala(int a) {
    
    int suma = 0;
    for (int i = 1; i <= a/2; i++) {
        if (a % i == 0) 
            suma += i;
    }
    if (suma == a) {
        return 1;
        cout <<"Liczba jest doskonala";
    }
    else {
        return 0;
        cout <<"Liczba nie jest doskonala";
    }
}



int main()
{
    ldoskonala(6);
}
#endif // Zadanie7A


