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
        int tempchar;

        // Not Working
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
    cout << "Enter a date (format 12/31/99): ";
    d1.getDate();
    d1.showDate();
    return 0;
}

//Function Definitions