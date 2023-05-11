#include <iostream>
using namespace std;


int novi[33];
int n; 
int i; 


void Input()
{
    while (true)
    {
        cout << "Masukan jumlah data pada array : ";
        cin >> n;
        if ((n > 0) && (n <= 33))
            break;
        else
            cout << "\nArray hanya memiliki nilai minimum 1 dan nilai maksimum 79.\n\n";
    }

    cout << "\n----------------------\n";
    cout << " Masukan elemen array \n";
    cout << "----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> novi[i];
    }
}



void  BinarySearch()
{
    char ch;
    do
    {
        
        cout << "\nMasukan elemen yang ingin dicari: ";
        int item;
        cin >> item;

       
        int lowerbound = 0;
        int upperbound = n - 1;
        int mid = (lowerbound + upperbound) / 2; 
        int ctr = 1; 

        while ((item != novi[mid]) && (lowerbound <= upperbound))
        {
            if (item > novi[mid])
                lowerbound = mid + 1;
            else
                upperbound = mid - 1;

            mid = (lowerbound + upperbound) / 2;
            ctr++;
        }

        if (item == novi[mid])
            cout << "\n" << item << " ditemukan " << (mid + 1) << endl;
        else
            cout << "\n" << item << " tidak ditemukan \n";
        cout << "\nJumlah perbandingannya: " << ctr << endl;

        cout << "\nApakah ingin mencari lagi (y/n): ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}


int main()
{
    Input();
    BinarySearch();
}