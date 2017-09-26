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
    void getDate()
    {
        char tempchar;

        cin >> month >> tempchar >> day >> tempchar >> year;
    }
    void showDate()
    {
        cout << month << "/" << day << "/" << year << endl;
    }
};

// Prototypes


// Main Program
int main()
{
    date d1, d2;
    cout << "Enter a date (format 12/31/1999): ";
    d1.getDate();
    cout << "Enter another date: ";
    d2.getDate();

    cout << "date1 = ";
    d1.showDate();
    cout << "date2 = ";
    d2.showDate();
    return 0;
}

//Function Definitions