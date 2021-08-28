//
// Created by sigmund on 27/08/2021.
//
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

const int period_length = 5;

int main(){
    int under_10 = 0;
    int between_ten_and_20 = 0;
    int over_20 = 0;

    cout << "You shall enter "  << period_length << " Temperatures" << endl;
    double input_value = 0;

    for (size_t i = 0; i < period_length; i++) {
        cout << endl << "temperature nr.  "  << i + 1  << ": " ;
        cin >> input_value ;
        if(input_value > 20){
            over_20++;
        }else if(input_value >= 10){
            between_ten_and_20++;
        }else{
            under_10++;
        }


    }
    cout << "Temperatures below 10: "  << under_10  << endl;
    cout << "Temperatures between 10 and 20: "  << between_ten_and_20  << endl;
    cout << "Temperatures above 20: "  << over_20  << endl;

}
