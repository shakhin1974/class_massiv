#include <iostream>
#include<string>
#include <algorithm>
#include<windows.h>
#include"Header.h"
#include <ctype.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a[16] = { 25, 11, -6, -5, -4, 11, 6, -11, 9, -3, 12, 18, 9, 5, 4, -5 };
    int size =  16;
    massiv m1(size, a);
    m1.Sort();

    return 0;

}