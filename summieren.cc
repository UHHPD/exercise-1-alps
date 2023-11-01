#include <fstream>
#include <iostream>

int main(){
  int oddNumber;
  int evenNumber;
  int sumNumber;
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  for(int i=0; i<234; ++i){
      fin >> evenNumber;
      fin >> oddNumber;
      sumNumber = evenNumber + oddNumber;
      fout << sumNumber << std::endl;
  }
  fin.close();
  fout.close();
}

/*int main(){
  // Exercise 01:

  int data_val, prev_data_val;
  int pair_sum;
  
  std::ifstream fin("daten.txt");
  std::ofstream fout("datensumme.txt");
  
  if ( fin.is_open() ){
    int j = 0, w;
    for(int i; i<234; ++i){
      fin >> data_val;
      if(i%2 == 0){
        j+=1, w=0; 
        prev_data_val=data_val;
      } //{std::cout << "index: " << i << std::endl;}
      else{
        w=1; 
        pair_sum = data_val+prev_data_val;
      }
      std::cout << "(row,index): (" << j << ", " << w << "), value: " << data_val << std::endl;
      if(i%2 != 0){
        std::cout << ">> row summation = " << pair_sum << std::endl << std::endl;
        fout << pair_sum << std::endl;
      }
    }
  }
  fin.close(); fout.close();

  std::cout << "Done!" << std::endl;
}*/
