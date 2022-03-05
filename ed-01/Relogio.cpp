#include <iostream>
using namespace std;

#include "Relogio.h"


Relogio::Relogio() : _hora(0), _minuto(0) {
}

Relogio::Relogio(int _hora, int minuto) : _hora(hora), _minuto(minuto) {
}


Relogio::~Relogio() {

}

int Relogio::calcularMinutos() {
    return _hora * 60 +  _minuto;
}


void Relogio::imprimirHoras() {

        cout << _hora << ":" << _minuto << endl;

}