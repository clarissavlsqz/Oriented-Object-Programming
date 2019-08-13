 //
//  main.cpp
//  act-04-a01281743
//
//  Created by Clarissa Velásquez Magaña on 1/29/19.
//  Copyright © 2019 Clarissa Velásquez Magaña. All rights reserved.
// Nombre: Clarissa Andrea Velásquez Magaña
// Matricula: A01281743

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void fraseAsterisco(string &frase, string palabra)
{
    cout << "Selecciona una palabra del teclado:" << endl;
getline(cin,palabra);
int idxPalabra = 0;
while (idxPalabra >= 0){
    idxPalabra = frase.find(palabra);
    if (idxPalabra >= 0){
        frase.erase(idxPalabra,1);
                        }
    frase[idxPalabra] = '*';
                        }
}


int main() {
    string frase;
    string palabra;
    
    ifstream archEnt("frases.txt");
    ofstream archSal("salida.txt");
    
    if (archEnt.is_open())
    {
        while (!archEnt.eof())
        {
            getline(archEnt,frase);
            if (frase != "") {
                fraseAsterisco(frase, palabra);
                archSal << frase << endl;
            }
        }
        
        archEnt.close();
    }
    else cout << " NO abri el archivo" << endl;
    archSal.close();
    return 0;
}
