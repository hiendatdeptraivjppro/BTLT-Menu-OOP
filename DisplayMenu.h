#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "EditMenu.h"
#include "Console.h"
#include "Menu.h"
#include "ConsoleUtils.h"
using namespace std;

#define MAX_LINES 10

class MyConsole;

class DisplayMenu : public Menu
{
private:
    MyConsole* console;
    vector<vector<string>> lines;
    int page;
    int cursor;

public:
    DisplayMenu(MyConsole* console);
    void show();
    void handleInput(string input);
    void changePage(int page);
    string toString();
};