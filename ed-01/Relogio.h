#ifndef ED_01_RELOGIO_H
#define ED_01_RELOGIO_H


class Relogio {
public:

    Relogio();
    Relogio(int hora, int minuto);

    ~Relogio();


    void imprimirHoras();
    int calcularMinutos();

    int getHora() {
        return _hora;
    }

    int getMinuto() {
        return _minuto;
    }

    void setHora(int hora);

    void setMinuto(int minuto);

private:

    int _hora;
    int _minuto;
};

inline void Relogio::setHora(int hora) {
    _hora = hora < 24 ? hora : 0;
}
inline void Relogio::setMinuto(int minuto) {
    _minuto= minuto < 60 ? minuto : 0;
}


#endif
