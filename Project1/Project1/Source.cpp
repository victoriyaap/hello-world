#include <iostream>
#include <fstream>
using namespace std;

void Myfunc();
  int main()
  {
	  Myfunc();
	  cout << "Hello World!!!";
	  system("pause");
	  return 0;
  }

  void Myfunc()
  {
	  ofstream fout;
	  fout.open("file.txt", ios::trunc);
	  fout << "Hello, World!!!";
	  fout.close();
  }