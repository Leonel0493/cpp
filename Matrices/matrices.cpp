#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    int i, j, opt = 0, col = 0, row = 0;

    do
    {
        system("cls");
        
        cout<<"Ingrese el numero de columnas: ";
        cin>>col;
        cout<<"Ingrese el numero de filas: ";
        cin>>row;

        srand(time(NULL));
        int arr[row][col];

        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                arr[i][j] = rand()%15;
                cout<<"\t"<<arr[i][j];
            }
            cout<<"\n\n";
        }
        cout<<"\nDesea generar una nueva matriz? <<1- SI || 2- NO>>";
        cin>>opt;
    } while (opt != 2);
    system("pause");
    return 0;
} //end main
