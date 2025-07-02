#pragma once
#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void ShowDate();
    void SetDate();
    int DistanceInDays(const Date& begin, const Date& finish);
    Date DateAdd(const Date& date, int day);
};
