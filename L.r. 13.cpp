#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <iomanip>
#include <stdio.h>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    FILE* fp1 = fopen("Students.txt", "r");//читання з вихідного файлу
    FILE* fp2 = fopen("StudentsCopy.txt", "w");// для запису в інший

    if (fp1 == NULL)
    {
        cout << "Файл не знайдено" << endl;
    }
    char cc[256];    int k = 0;
    for (int i = 1; ;)
        while (!feof(fp1)) //копіювання по строчках
        {
            fgets(cc, sizeof(cc), fp1);
            fprintf(fp2, "%d", i);
            i++;

            fprintf(fp2, "%c", ')' ); 
            fprintf(fp2, "%c", ' ');
            
            fputs(cc, fp2);     
        }
    fclose(fp1);
    fclose(fp2);
    return 0;
}