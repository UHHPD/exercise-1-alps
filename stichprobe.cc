#include <fstream>
#include <iostream>
#include <cmath>

int main(){
    double summeErgebnisse=0.0;
    double number;
    double mean;
    double variance;
    double standDev;

    std::ifstream fin("datensumme.txt");
    for(int i=0; i<234;++i){
        fin >> number;
        summeErgebnisse = summeErgebnisse + number;
    }
    mean = 1.0/234 * summeErgebnisse;
    summeErgebnisse=0;
    fin.close();
    std::ifstream ftwo("datensumme.txt");
    for(int i=0; i<234;++i){
        ftwo >> number;
        summeErgebnisse = summeErgebnisse + (number - mean) * (number - mean);
    }
    variance = 1.0/234 * summeErgebnisse;
    standDev = sqrt(variance);
    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Variance: " << variance << std::endl;
    std::cout << "Standard Deviation: " << standDev << std::endl;
    ftwo.close();
}