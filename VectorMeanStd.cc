#include <fstream>
#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main(){
  std::ifstream fin("datensumme.txt");
  
  std::vector<int> data;

  int element;
  while(fin>>element){
    data.push_back(element);
  }
  double sum = std::accumulate(data.begin(), data.end(), 0);
  double mean = sum / data.size();
  std::cout << mean << sum << data.size() << std::endl ;
  double V;
  for(auto j : data){
    V_sum += (j-mean)*(j-mean);
  }

  double V = V_sum/data.size()
  std::cout << V << std::endl;

  double sigma = sqrt(V);
  std::cout << sigma << std::endl;
  }
