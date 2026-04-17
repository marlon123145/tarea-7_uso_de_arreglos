

#include <iostream>
using namespace std;

int main()
{
    std::cout << "programa que permita registrar notas en una escuela\n";
    int cantidad;
    cout << "Inegrese la cantidad de estudiantes (max 20): ";
    cin >> cantidad;
    while (cantidad > 20 or cantidad <= 0) {
        cout << "Error, Ingrese un numero valido del (1 - 20): \n";
        cin >> cantidad;
    }
    int nota1[20];
    int nota2[20];
    int nota3[20];
    int nota4[20];
    double promedio[20];
    int aprobados = 0;
    int reprobados = 0;
   int sumarpromedio = 0;
    int mayor = 0;
    int menor = 100;
    int promediogeneral = sumarpromedio / cantidad;

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese la nota 1 del estudiante " << i + 1 << " : ";
        cin >> nota1[i];

        while (nota1[i] < 0 or nota1[i] > 100) {
            cout << "Error. Ingrese una nota valida de (0 - 100): \n";
            cin >> nota1[i];
        }
        cout << "Ingrese la nota 2 del estudiante " << i + 1 << " : ";
        cin >> nota2[i];

        while (nota2[i] < 0 or nota2[i] > 100) {
            cout << "Error. Ingrese una nota valida de (0 - 100): \n";
            cin >> nota2[i]; 
        }
        cout << "Ingrese la nota 3 del estudiante " << i + 1 << " : ";
        cin >> nota3[i];

        while (nota3[i] < 0 or nota3[i] > 100) {
            cout << "Error. Ingrese una nota valida de (0 - 100): \n";
            cin >> nota3[i];
        }
        cout << "Ingrese la nota 4 del estudiante " << i + 1 << " : ";
        cin >> nota4[i];

        while (nota4[i] < 0 or nota4[i] > 100) {
            cout << "Error. Ingrese una nota valida de (0 - 100): \n";
            cin >> nota4[i];
           
           
            
        }
        promediogeneral = sumarpromedio / cantidad;
       
        
         promedio[i] = (nota1[i] + nota2[i] + nota3[i] + nota4[i]) / 4.0;
         sumarpromedio += promedio[i];
         if (promedio[i] > mayor) {
             mayor = promedio[i];
         }
         if (promedio[i] < menor) {
             menor = promedio[i];
         }
         
         
         cout << "Promedio del estudiante " << i + 1 << " : " << promedio[i] << "\n";
        
         if (promedio[i] >= 70) {
             cout << "Aprobado!\n";
             aprobados ++;

         }
         else {
             cout << "Reprobado!\n";
             reprobados ++;
         }
        
        





    }
    cout << "\n--- RESULTADOS FINALES ---\n";
cout << "Aprobados: " << aprobados << endl;
cout << "Reprobados: " << reprobados << endl;
cout << "Promedio general del grupo: " << promediogeneral << endl;
cout << "Calificacion mas alta: " << mayor << endl;
cout << "Calificacion mas baja: " << menor << endl;


    return 0;
}
