#include <iostream>

using namespace std;

int main()
{
    int escolaridade, experiencia, pontosEscolaridade, pontosExperiencia;
    string viajar, habilitacao;

    cout << "Qual sua escolaridade?" << endl;
    cout << "1) Ensino Fundamental" << endl;
    cout << "2) Ensino Medio" << endl;
    cout << "3) Ensino Superior" << endl;
    cout << "4) Pos-graduacao" << endl;
    cout << "Digite uma opcao: ";
    cin >> escolaridade;

    cout << endl << "Voce tem quantos anos de experiencia profissional? ";
    cin >> experiencia;
    cout << "Voce tem disponibilidade para viajar (S/N)? ";
    cin >> viajar;
    cout << "Voce tem habilitacao de motorista (S/N)? ";
    cin >> habilitacao;

    pontosEscolaridade = escolaridade*10;

    if (experiencia == 0) {
        pontosExperiencia = 0;
    }
    else if (experiencia <= 2) {
        pontosExperiencia = 10;
    }
    else if (experiencia <= 5) {
        pontosExperiencia = 20;
    }
    else {
        pontosExperiencia = 40;
    }

    cout << endl << "Pontos por escolaridade: " << pontosEscolaridade << endl;
    cout << "Pontos por experiencia: " << pontosExperiencia << endl;

    return 0;
}
