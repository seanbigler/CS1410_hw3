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
    Serial(): serialNumber(record_count+1){record_count++;}
    int getSerial();
};

 int Serial::record_count=0;

// Prototypes
void showSerial(Serial);


// Main Program Program
int main() {
    Serial alpha, betta, gamma;
    showSerial(alpha);
    showSerial(betta);
    showSerial(gamma);

    return 0;
}

// Function Definitions
void showSerial(Serial s)
{
    cout << "I am object number " << s.getSerial() << endl;
}

int Serial::getSerial()
{
    return serialNumber;
}