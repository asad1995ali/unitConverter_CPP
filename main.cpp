// Created by: Syed Asad Ali
// Start Date: 16-04-2023

/*
This is how the program will function (or, the code that needs to be written)
1. Create conversion functions based on measurement type (for eg. distance, speed, time, temperature) 
2. Create table subfunctions based on different units (for eg. mile to km, mph to  kmh)
3. Ask user for their measurement unit
    3.1 Display table with available class options (distance, speed, time or temperature)
    3.2 After input display the available units from that specific class of measurement
    3.3 Ask user to input number corresponding to the unit
4. Ask user to input value for their measurement 
5. Ask user for conversion type
    5.1 Display table with available units for that specific class, except the unit for their value which they specified in 3.2
    5.2 Ask user to input the number corresponding to the conversion
6. Call respective function and display the output 
*/

#include <iostream>

double distance (int type, double value){

    double distConv[2]{};
    double distOut;

    int dd = 20;

    return distOut;
}




int main(){

    std::string systems[4]{"Distance","Speed","Time","Temperature"};
    
    std::cout << "\nHello Yellow \n";
    std::cout << "Please select your prefered measurement system: \n"; 

    int len = sizeof(systems)/sizeof(systems[0]);

    for (int i = 0; i < len; i++){
        std::cout << i+1 << ". "<< systems[i] << "\n";
    }

    int syst;
    std::cin >> syst; 


    std::string dist[2]{"m to km","km to m"};
    std::cout << "Please select the preferred conversion: \n";
    int len2 = sizeof(dist)/sizeof(dist[0]);

    for (int i = 0; i < len2; i++){
        std::cout << i+1 << ". "<< dist[i] << "\n";
    }

    


    std::cout << "Please input the value: \n"; 
    double value;
    std::cin >> value;

    return 0;
}