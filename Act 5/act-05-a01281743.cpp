//
//  main.cpp
//  act-05-a01281743
//
//  Created by Clarissa Velásquez Magaña on 2/5/19.
//  Copyright © 2019 Clarissa Velásquez Magaña. All rights reserved.
//

#include <iostream>
using namespace std;
#include "Reloj.h"

int main() {
    
    int hora, minutos;
    cout << "Teclea la hora (sin minutos) inicial: " << endl;
    cin >> hora;
    cout << "Teclea los minutos: " << endl;
    cin >> minutos;
    
    Reloj hrInicial(hora,minutos);
    
    cout << "Teclea la hora (sin minutos) final: " << endl;
    cin >> hora;
    cout << "Teclea los minutos: " << endl;
    cin >> minutos;
    
    Reloj hrFinal(hora,minutos);
    
    
    hrInicial.muestraHora();
    hrFinal.muestraHora();
    
    
    return 0;
}

