#include <iostream>
#include "clsDate.h"
#include  "clsPeriod.h"

using namespace std;

int main()

{
    clsDate Date1;
    Date1.Print();
    cout << Date1.NumberOfSecondsInAYear() << endl;
    clsDate Date2("31/1/2022");
    Date2.Print();

    Date2.GetDifferenceInDays(Date1);
    clsDate Date3(20, 12, 2022);
    Date3.Print();

    clsDate Date4(250, 2022);
    Date4.Print();

    Date1.IncreaseDateByOneMonth();
    Date1.Print();

    //Date3.PrintYearCalendar();
    cout << Date2.IsValid() << endl;

    cout << "My Age In Days:" <<
        clsDate::CalculateMyAgeInDays(  clsDate(28, 04, 2001) );
        //You can try any method at your own..


    cout << "\n\n======================= Period ====================\n\n";

    clsPeriod Period1(clsDate(1, 1, 2022), clsDate(10, 1, 2022));
    Period1.Print();

    cout << "\n";

    clsPeriod Period2(clsDate(3, 1, 2022), clsDate(5, 1, 2022));
    Period2.Print();


    //You can check like this
    cout << Period1.IsOverLapWith(Period2) << endl;


    //Also you can call the static method and send period 1 and period 2
    cout << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;

    system("pause>0");
    return 0;
};

