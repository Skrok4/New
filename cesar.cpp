
#include <stdio.h>
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string str;
    int n = -2;//����
    cin >> str;//��� ������
    //������� �����
    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) >= (int('�') - (n - 1)))
        {
            str[i] = char(int('�') + ((n - 1) + (int('�') - str[i])));
        }
        else
        {
            str[i] = char(int(str[i]) + n); 
        }
    }
    cout << str;//����
    return 0;
    
}