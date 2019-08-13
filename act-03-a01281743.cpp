//
//  main.cpp
//  act-03-a01281743
//
//  Created by Clarissa Velásquez Magaña on 1/22/19.
//  Copyright © 2019 Clarissa Velásquez Magaña. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // Ejercicio 1
   /* string frase;
    
    cout << "Escribe una frase" << endl;
    getline(cin,frase);
    
    bool esPalindromo = true;
    string fraseOriginal = frase;
    
    
    //Borrar espacio
    int idxEspacio = 0;
    while (idxEspacio >= 0){
        idxEspacio = frase.find(" ");
        if (idxEspacio >= 0){
            frase.erase(idxEspacio,1);
        }
    }
    //valida Plaindromo
    int longitudFrase = frase.length();
    int j = longitudFrase - 1;
    for (int i = 0; i < longitudFrase/2 && esPalindromo; i++){
        if (tolower(frase[i]) != tolower(frase[j])){
            esPalindromo = false;
        } else {
            j--;
        }
        
    }
    
    if (esPalindromo) {
        cout << "La frase " << fraseOriginal << " sí es un palíndromo" << endl;
    } else {
        cout << "La frase " << fraseOriginal << " no es un palíndromo" << endl;
    }
   */
    
    //Ejercicio 2
    /*string frase;
    cout << "Favor de teclear una frase: " << endl;
    getline(cin,frase);
    
    string fraseFinal;
    
    if (frase[0] != ' '){
        fraseFinal = frase[0];
    }
    
    for(int i = 0; i < frase.length(); i++){
        if (frase[i] == ' ' && frase[i+1] != ' ')  {
            fraseFinal += frase[i+1];
        }
    }
    cout << endl << "La frase resultante es: " << fraseFinal << endl;
    */
    
    //Ejercicio 3
   /* string frase;
    cout << "Teclea una frase:"<< endl;
    getline(cin,frase);
    string frase2;
    
    for (int i = (frase.length() - 1); i >= 0; i--){
        if (frase[i] == ' '){
            frase2 += frase.substr(i+1) + ' ';
            frase.erase(i);
        }
    }
    
    frase2 += frase;
    
    cout << frase2;
    */
    //Ejercicio 4
    /*string frase;
    string palabra;
    
    cout << "Escribe una frase:" << endl;
    getline(cin,frase);
    cout << "Selecciona una palabra de la frase escrita anteriormente:" << endl;
    getline(cin,palabra);
    
    int idxPalabra = 0;
    while (idxPalabra >= 0){
        idxPalabra = frase.find(palabra);
        if (idxPalabra >= 0){
            frase.erase(idxPalabra,1);
        }
        frase[idxPalabra] = '*';
    }
    
    cout << frase;
*/
    
    //Ejercicio 5
    /*string numero;
    bool valido = true;
    int dots = 0;
    cout << "Teclee un numero flotante positivo:" << endl;
    getline(cin,numero);
    
    for(int i = 0; i < numero.length(); i++){
       
        //if (numero[i] >= 0 && numero[i] <= 9){
          //  valido = true;
        //}
     
        if (isdigit(numero[i]) == false){
            valido = false;
        }
            
        if (numero[i] == '.'){
            dots = dots + 1;
            valido = true;
        }

        
        if (dots > 1){
            valido = false;
        }

    }
    
    if (valido == true){
        cout << "Número válido";
    } else{
        cout << "Número inválido";
    }
    */
    
    //Ejercicio 6
    string frase;
    int ultimo = frase.length() - 1;
    cout << "Escriba una frase:" << endl;
    getline(cin,frase);
    int idxEspacio = 0;

    
    for(int i = 0; i < frase.length(); i++){
        if (frase[0] == ' '){
            frase.erase(0,1);
        }
        
        if (ultimo == ' '){
            frase.erase(ultimo,1);
        }
        idxEspacio = frase.find(" ");
        if (idxEspacio >= 0){
            if (frase[idxEspacio+1] == ' ' || frase[idxEspacio-1] == ' '){
                frase.erase(idxEspacio,1);
            }
        }
    }
    
    cout << frase;
   
    
    
    return 0;
}
