#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Console.h"
#include "Menu.h"
#include "ConsoleUtils.h"
#include "DisplayMenu.h"
#include "AddMenu.h"
using namespace std;

class MyConsole;

class MainMenu : public Menu
{
private:
    MyConsole* console;
    vector<string> lines;
    int cursor = 0;

public:
    MainMenu(MyConsole* console);
    void show();
    void handleInput(string input);
    string toString();
};