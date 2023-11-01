#include <fstream>
#include <iostream>
#include <cmath>

int main(){
    double summeErgebnisse;
    double number;
    double mean;
    double variance;
    double standDev;

    std::ifstream fin("datensumme.txt");
    std::ifstream ftwo("datensumme.txt");
    std::ofstream fmean("mittelwerte.txt");
    std::ofstream fvar("varianzen.txt");

    for(int j=0;j<26;++j){
        summeErgebnisse=0.0;
        for(int i=0; i<9;++i){
            fin >> number;
            summeErgebnisse = summeErgebnisse + number;
        }
        mean = 1.0/9 * summeErgebnisse;
        fmean << mean << std::endl;
        summeErgebnisse=0;
        for(int i=0; i<9;++i){
            ftwo >> number;
            summeErgebnisse = summeErgebnisse + (number - mean) * (number - mean);
        }
        variance = 1.0/9 * summeErgebnisse;
        fvar << variance << std::endl;
        standDev = sqrt(variance);

        /*std::cout << "Mean: " << mean << std::endl;
        std::cout << "Variance: " << variance << std::endl;
        std::cout << "Standard Deviation: " << standDev << std::endl;*/
    }
    fin.close();
    ftwo.close();
    fmean.close();
    fvar.close();

    double summeErgebnisse2;
    double number2;
    double meanVar;
    summeErgebnisse2=0.0;
    summeErgebnisse=0.0;
    std::ifstream fmeanIn("mittelwerte.txt");
    std::ifstream fvarIn("varianzen.txt");
    for(int i=0; i<26;++i){
        fmeanIn >> number;
        fvarIn >> number2;
        summeErgebnisse = summeErgebnisse + number;
        summeErgebnisse2 = summeErgebnisse2 + number2;
    }
    mean = 1.0/26 * summeErgebnisse;
    meanVar = 1.0/26 * summeErgebnisse2;
    std::cout << mean << std::endl;
    std::cout << meanVar << std::endl;
    fmeanIn.close();
    fvarIn.close();
}