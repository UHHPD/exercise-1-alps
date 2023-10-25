#include <fstream>
#include <iostream>

int main(){
  // Exercise 01: hello
  std::cout << "Hello World!" << std::endl;

  // Exercise 02: input/output
  int zhal;
  std::cout << "Input value for 'zhal': " ; std::cin >> zhal;
  std::cout << ">> Your input value is: " << zhal << std::endl;

  std::ofstream fout("output.txt");
  fout << zhal << std::endl;
  fout.close();

  std::ifstream fin("output.txt");
  fin >> zhal;
  fin.close();


  // Terminal Output
  // ~/tiaEx1cc$ g++ -o Sheet01_compiled Sheet01.cpp 
  // ~/tiaEx1cc$ ./Sheet01_compiled 
  // Hello World!
  // Input value for 'zhal': 9
  // >> Your input value is: 9
  // ~/tiaEx1cc$ cat output.txt
  // 9

  std::cout << "Done!" << std::endl;
}
