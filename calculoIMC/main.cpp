#include <iostream>

using namespace std;

int main()
{
    int peso;
    double altura;
    double IMC;

    cout << "Digite seu peso (Kg): ";
    cin >> peso;
    cout<<""<<endl;
    cout << "Digite a sua altura: ";
    cin >> altura;
    cout<<""<<endl;
    IMC = peso / (altura*altura);

    cout << "Seu IMC é: " << IMC << endl;

    return 0;
}
