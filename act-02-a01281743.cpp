//
//  main.cpp
//  act-02-a01281743
//
//  Created by Clarissa Velásquez Magaña on 1/18/19.
//  Copyright © 2019 Clarissa Velásquez Magaña. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    double x;
    int n;
    int Opcion;

    do{
    cout << "Teclee el valor de x" << endl;
    cin >> x;
    cout << "Cantidad de coeficientes para usar" << endl;
    cin >> n;
     int arr[n];
    cout << "Teclee la lista de coeficientes" << endl;
    double total = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        total = total + arr[i]*pow(x,i);
    }
    for (int i = 0; i < n; i++){
        if (i==0){
            cout << arr[i] << " + ";
        }
        else if (i < n-1){
            cout << arr[i] << "x" << (i) << " + ";
        } else {
            cout << arr[i] << "x" << (i) << " = " << total << endl;
        }
    }
        cout << "Si desea salir del programa teclee -1, para continuar teclee cualquier otra" << endl;
        cin >> Opcion;
    } while (Opcion !=-1);
  
    
    
    
    return 0;
}

