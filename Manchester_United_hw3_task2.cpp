// File: Manchester_United_hw3_task2.cpp
// Created by Sean Bigler on 9/26/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Serial{
private:
    int serialNumber;
    static int record_count;
public:
   // Serial(): serial_number(0){record_count++;}
    Serial(int num):serialNumber(num){record_count++;}
    int getSerial()
    {
        return serialNumber;
    }
};


// Prototypes
void showSerial(Serial);


// Main Program Program
int main() {
    Serial alpha(0);
    int serial = alpha.getSerial();
    Serial betta(serial);
    serial = betta.getSerial();
    Serial gamma(serial);

    return 0;
}

// Function Definitions
void showSerial(Serial s)
{
    cout << "I am object number " << s.getSerial() << endl;
}