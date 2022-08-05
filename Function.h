#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Player.h"
using namespace std;

int x;
vector<Player> p;

//背番号を並び替えるための関数
bool compare0(Player &a, Player &b)
{
    return a.getNumber() < b.getNumber();
}

//名前を並び替えるための関数
bool compare1(Player &a, Player &b)
{
    return a.getName() < b.getName();
}

//生年月日を並び替えるための関数
bool compare2(Player &a, Player &b)
{
    return a.getYear() < b.getYear();

    if (a.getYear() == b.getYear())
    {
        return a.getMonth() < b.getMonth();

        if (a.getMonth() == b.getMonth())
        {
            return a.getDay() < b.getDay();
        }
    }
}

//背番号を昇順にして出力する関数
void as_number(int x)
{
    if (x == 0)
    {
        sort(p.begin(), p.end(), compare0);

        for (auto i : p)
        {
            cout << i.getNumber() << " " << i.getName() << " " << i.getYear() << "/" << i.getMonth() << "/" << i.getDay() << endl;
        }
    }
}

//名前を昇順にして出力する関数
void as_name(int x)
{
    if (x == 1)
    {
        sort(p.begin(), p.end(), compare1);

        for (auto i : p)
        {
            cout << i.getNumber() << " " << i.getName() << " " << i.getYear() << "/" << i.getMonth() << "/" << i.getDay() << endl;
        }
    }
}

//生年月日を昇順にして出力する関数
void as_birthday(int x)
{
    if (x == 2)
    {

        sort(p.begin(), p.end(), compare2);

        for (auto i : p)
        {
            cout << i.getNumber() << " " << i.getName() << " " << i.getYear() << "/" << i.getMonth() << "/" << i.getDay() << endl;
        }
    }
}

//背番号を入力して該当する名前と生年月日を出力する関数
void ex_number(int x)
{
    if (x == 3)
    {
        cout << "背番号を入力...";

        int y;
        cin >> y;
        bool z = false;

        for (auto i : p)
        {
            if (y == i.getNumber())
            {
                z = true;
                cout << endl
                     << i.getNumber() << " " << i.getName() << " " << i.getYear() << "/" << i.getMonth() << "/" << i.getDay() << endl;
            }
        }

        if (!z)
            cout << endl
                 << "該当なし" << endl;
    }
}