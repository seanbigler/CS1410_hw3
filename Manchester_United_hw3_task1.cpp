#include <iostream>
using namespace std;

// Constants, Structs, Classes
class date
{
private:
    int month;
    int day;
    int year;
public:
    //Constructor
    date():month(1), day(1), year(2000){}

    void getDate()
    {
        char tempchar;

        // Read input from user
        cin >> month >> tempchar >> day >> tempchar >> year;
    }
    void showDate()
    {
        // Display date separated by /
        cout << month << "/" << day << "/" << year << endl;
    }
};

// Prototypes


// Main Program
int main()
{
    date d1, d2;
    // Ask for user input for date1
    cout << "Enter a date (format 12/31/1999): ";
    d1.getDate();
    // Ask for user input for date2
    cout << "Enter another date: ";
    d2.getDate();

    // Display dates
    cout << "date1 = ";
    d1.showDate();
    cout << "date2 = ";
    d2.showDate();

    return 0;
}

//Function Definitions