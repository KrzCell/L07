#include <iostream>
using namespace std;

#define Zadanie7A


#ifdef Zadanie7A

bool ldoskonala(int &refa) {
    
    int suma = 0;
    for (int i = 1; i <= refa/2; i++) {
        if (refa % i == 0) 
            suma += i;
    }
    if (suma == refa) {
        return true;
        cout <<"Liczba jest doskonala"<<endl;
    }
    else {
        return false;
        cout <<"Liczba nie jest doskonala"<<endl;
    }
}

double potegowanie(double &x,int n) {
    
    if(n == 0) 
        return 1;
    
    double zmienna = potegowanie(x, n-1);
    return x * zmienna;
    
}

void binar(int &w) {
    int i = 0;
    int tab[100] = {};
    if (w < 0)
        cout << "BLAD";
    else {
        while (w) {
            tab[i++] = w % 2;
            w = w / 2;
        }
    }
    for (int j = i-1; j >= 0; j--)
        cout << tab[j];
    cout << endl;
}

int main()
{
    int a, b;
    double x = 1;
    
    cout << "Podaj liczbe i sprawdz czy jest doskonala -> ";
    cin >> a;
    cout << ldoskonala(a) << endl;
    
    
    cout << "Podaj podstawe potegi -> ";
    cin >> x;
    cout << "Podaj wykladnik potegi -> ";
    cin >> b;
    cout << potegowanie(x, b) << endl;
    
   
    cout << "Podaj liczbe dziesietna ktora chcesz zamienic na liczbe binarna -> ";
    cin >> a;
    binar(a);
    
}
#endif // Zadanie7A


