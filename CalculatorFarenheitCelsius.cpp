#include <iostream>

using namespace std;

double calculate_temperature(bool variation, int temp) {
    if (variation)
        return 1.8 * temp + 32.0;
    else
        return (temp - 32.0) / 1.8;
}

int main()
{
    double temp;
    char what_convert;
    bool var;
    
    while (true) {
        cout << "Choose what convert ([c] Celsius to Farenheit) ([f] Farenheit to Celsius): ";
        cin >> what_convert;
        
        if (what_convert == 'c' || what_convert == 'f')
            break;
        else
            cout << "Try again\n";
    }
    
    if (what_convert == 'c') {
        cout << "Enter Temperature in Celsius: ";
        cin >> temp;
        
        var = true;
    } else {
        cout << "Enter Temperature in Farenheit: ";
        cin >> temp;
        
        var = false;
    }
    
    cout << "Temperature: " << calculate_temperature(var, temp);
    
    return 0;
}
