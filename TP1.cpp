#include <iostream>

using namespace std;

void invertirvec(int vec[], int dim)
{
    int aux=0;
    for (int i = 0; i < dim/2; i++)
    {
        aux=vec[i];
        vec[i]=vec[dim-1-i];
        vec[dim-1-i]=aux;
    }

}
void mostrarvec(int vec[], int dim)
{
    for (int i = 0; i < dim; ++i)
        cout << vec[i] << '\t';
    cout << endl;
}

void invertirmat(int m[][5],int dim)
{
    for (int i= 0; i < dim; i++)
    {
        for (int j= i+1; j< dim; j++)
        {
            swap(m[i][j],m[j][i]);

        }

    }

}


void mostrarmat(int m[][5], int dfil)
{
    const int dcol = 5; // solo por prolijidad

    for (int i = 0; i < dfil; i++)
    {
        for (int j = 0; j < dcol; j++)
        {
            cout << m[i][j] << '\t';

        }
        cout << endl;
    }

}

int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};
    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44
                           };
    cout<<"VECTOR DE 5 ELEMENTOS"<<endl;
    mostrarvec(vec5,5);
    cout<<"REVERSO"<<endl;
    invertirvec(vec5,5);
    mostrarvec(vec5,5);
    cout<<"---------------------------------------"<<endl;
    cout<<"VECTOR DE 10 ELEMENTOS"<<endl;
    mostrarvec(vec10,10);
    cout<<"REVERSO"<<endl;
    invertirvec(vec10,10);
    mostrarvec(vec10,10);
    cout<<"---------------------------------------"<<endl;
    cout<<"MATRIZ"<<endl;
    mostrarmat(matriz,dim5) ;
    cout<<"TRANSPUESTA"<<endl;
    invertirmat(matriz,dim5) ;
    mostrarmat(matriz,dim5) ;
    return 0;
}
