//
// Created by sigmund on 27/08/2021.
//

//
// Created by sigmund on 27/08/2021.
//
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

void read_temperatures(double temperatures[], size_t length);

const char  path_to_temperature_data[] = "../src/assets/temperatures.dat";
const size_t temperature_length = 10;

int main(){
    int under_10 = 0;
    int between_ten_and_20 = 0;
    int over_20 = 0;
    double temperatures[temperature_length];

    read_temperatures(temperatures, temperature_length);

    for (size_t i = 0; i < temperature_length; i++) {
        if(temperatures[i] > 20){
            over_20++;
        }else if(temperatures[i] >= 10){
            between_ten_and_20++;
        }else{
            under_10++;
        }
    }
    cout << "Temperatures below 10: "  << under_10  << endl;
    cout << "Temperatures between 10 and 20: "  << between_ten_and_20  << endl;
    cout << "Temperatures above 20: "  << over_20  << endl;

}

void read_temperatures(double temperatures[], size_t length) {
    ifstream file;
    file.open(path_to_temperature_data);
    if (!file) {
        cout << "Cannot open file." << endl;
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < length; i++) {
        file >> temperatures[i];
    }
    file.close();
}
