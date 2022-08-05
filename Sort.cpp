#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include "Player.h"
#include "Function.h"
using namespace std;

int main()
{
    cout << "0 - 背番号昇順" << endl
         << "1 - 名前昇順" << endl
         << "2 - 生年月日昇順" << endl
         << "3 - 背番号検索" << endl;

    cout << endl
         << "行う操作の番号を入力...";

    cin >> x;

    cout << endl;

    ifstream infile("Player.txt");

    int number;  //背番号
    string name; //名前
    int year;    //誕生年（西暦）
    int month;   //誕生月
    int day;     //誕生日

    //ファイルからクラスを用いてvectorへ格納
    while (infile >> number >> name >> year >> month >> day)
    {
        Player pl;
        pl.setNumber(number);
        pl.setName(name);
        pl.setYear(year);
        pl.setMonth(month);
        pl.setDay(day);
        p.__emplace_back(pl);
    }
    infile.close();

    // x=0のとき背番号昇順
    as_number(x);

    // x=1のとき名前昇順
    as_name(x);

    // x=2のとき生年月日昇順
    as_birthday(x);

    // x=3のとき背番号検索
    ex_number(x);

    // x>3またはx<0のとき
    if (x > 3 || x < 0)
    {
        cout << "0,1,2,3から選択してください" << endl;
    }
}