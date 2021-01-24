#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main(){
    int i, j, opt = 0, cols = 0, rows = 0;

    do
    {
        system("cls");
        cout<<"Ingrese el numero de columnas de la matriz: ";
        cin>>cols;

        cout<<"Ingrese el numero de filas de la matriz: ";
        cin>>rows;

        srand(time(NULL));
        int arr[rows][cols];

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                arr[i][j] = rand()%20;
                cout<<"\t"<<arr[i][j];
            }
            cout<<"\n\n";
        }
        cout<<"\n\nDesea ejecutar el programa nuevamente? <1- SI || 2- NO>";
        cin>>opt;

    } while (opt != 2);
    
    system("pause");
    return 0;
}