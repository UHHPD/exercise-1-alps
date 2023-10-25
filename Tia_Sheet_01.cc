#include <fstream>

void Sheet01(){
  // Exercise 01: hello
  cout << "Hello World!" << endl;

  // Exercise 02: input/output
  cout << "Input value for 'zhal': " ; cin >> int zhal;
  cout << ">> Your input value is: " << zhal << endl;

  std::ofstream fout("output.txt");
  fout << zahl << endl;
  fout.close();

  std::ifstream fin("output.txt");
  fin >> int zahl;
  fin.close();

  // check with cat output.txt
}
