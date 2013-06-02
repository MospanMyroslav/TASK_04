#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void decrypt()
{
 int number; 
  cout << "Введіть шифрований номер для разшифровки: ";
   cin >> number;
   int a = ( number / 1000 + 3 ) % 10;
   int b = ( number % 1000 / 100 + 3 ) % 10;
   int c = ( number % 100 / 10 + 3 ) % 10;
   int d = ( number % 10 + 3 ) % 10;

   int decryptedNumber = a * 10 + b + c * 1000 + d  * 100;

   cout << "Разшифрований номер " << decryptedNumber << endl;
} 

void encrypt()
{
   int number; 
   cout << "Введіть цифровий номер (4 знака): ";
   cin >> number;
   int a = ( number / 1000 + 7 ) % 10;
   int b = ( number % 1000 / 100 + 7 ) % 10;
   int c = ( number % 100 / 10 + 7 ) % 10;
   int d = ( number % 10 + 7 ) % 10;

   int encryptedNumber =a * 10 + b + c * 1000 + d * 100;

   cout << "Шифрований номер  " << encryptedNumber << endl;
}

int main(void)
{
setlocale(LC_ALL,"Russian");
int chiclo;
 cout<<"1. Шифровка\n";
 cout<<"2. Дешифровка\n";
 cout<<"3. Виход\n";
 cin>>chiclo;
    switch(chiclo) {
      case 1: encrypt();  
        break;
      case 2: decrypt();  
        break;
      case 3: exit(0);
    }
  
  system("pause");
  return 0;
}

