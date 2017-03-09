//First programm
/*
 * Test gitHub functionality
 * Autor: Romanov Victor
 * folowers: Romanov Sergey
 * (russian UTF-8 text: Программа печатает "Здравствуй мир!")
 */
#include <iostream>
#include <unistd.h> // for sleep() function (not standart ANSI С)

using namespace std;

int main()
{
  setlocale(LC_ALL,"rus");
  
  string name;
  
  cout << "Hello world!" << endl;
  cout << "Enter your name: ";
  cin  >> name;
  cout << endl;
  cout << "Hello " << name << endl;
  sleep(2);
  
}