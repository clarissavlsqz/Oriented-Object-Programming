//
//  main.cpp
//  act-04-archivosystrings-a01281743
//
//  Created by Clarissa Velásquez Magaña on 1/29/19.
//  Copyright © 2019 Clarissa Velásquez Magaña. All rights reserved.
//  Nombre: Clarissa Andrea Velásquez Magaña
//  Matricula: A01281743

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void numeroComa (string &numero) {
    int posicion = numero.length() - 3;
    if (numero.length() <= 30){
    while (posicion > 0){
        numero.insert(posicion, ",");
        posicion = posicion - 3;
    }
    } else {
        numero = "Número tiene más de 30 caracteres";
    }
}


int main() {
    string numero;
    
    ifstream archEnt("numeros.txt");
    ofstream archSal("salida.txt");
    
    if (archEnt.is_open())
    {
        while (!archEnt.eof())
        {
            getline(archEnt,numero);
           
                numeroComa(numero);
                cout << numero << endl;
                archSal << numero << endl;
            
        
        }
        archEnt.close();
    }
    else cout << " NO abri el archivo" << endl;
    archSal.close();
    return 0;
}
