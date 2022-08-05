#pragma once

#include <iostream>
#include <string>
using namespace std;

class Player
{
protected:
    int number;  //背番号
    string name; //名前
    int year;    //誕生年（西暦）
    int month;   //誕生月
    int day;     //誕生日

public:
    void setNumber(int newNumber) { number = newNumber; }
    int getNumber() { return number; }

    void setName(const string &newName) { name = newName; }
    string getName() { return name; }

    void setYear(int newYear) { year = newYear; }
    int getYear() { return year; }

    void setMonth(int newMonth) { month = newMonth; }
    int getMonth() { return month; }

    void setDay(int newDay) { day = newDay; }
    int getDay() { return day; }
};