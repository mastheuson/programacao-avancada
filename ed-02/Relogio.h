#ifndef ED_01_RELOGIO_H
#define ED_01_RELOGIO_H
#define MAX_HORA 23
#define MAX_MINUTO 59

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
    _hora = hora < MAX_HORA ? hora : 0;
}
inline void Relogio::setMinuto(int minuto) {
    _minuto= minuto < MAX_MINUTO ? minuto : 0;
}


#endif
