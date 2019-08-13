//
//  Reloj.h
//  act-05-a01281743
//
//  Created by Clarissa Velásquez Magaña on 2/5/19.
//  Copyright © 2019 Clarissa Velásquez Magaña. All rights reserved.
//

#ifndef Reloj_h
#define Reloj_h

class Reloj {
public:
    Reloj();
    Reloj(int h, int m);
    int getHora();
    int getMin();
    void setHora(int h);
    void setMinu(int m);
    void muestraHora();
    
private:
    int hora;
    int minu;
};

Reloj::Reloj() {
    hora = 0;
    minu = 0;
}

Reloj::Reloj(int h, int m) {
    hora = h;
    minu = m;
}

int Reloj::getHora() {
    return hora;
}

int Reloj::getMin() {
    return minu;
}

void Reloj::setHora(int h) {
    hora = h;
}

void Reloj::setMinu (int m) {
    minu = m;
}

void Reloj::muestraHora() {
    cout << "La hora es ";
    if (hora <= 9){
        cout << "0" << hora;
    } else {
        cout << hora;
}
    cout << ":";
    
    if (minu <= 9){
        cout << "0" << minu;
    } else {
        cout << minu;
    }
    
    cout << endl;
    
}
#endif /* Reloj_h */
