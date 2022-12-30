#pragma once

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Menu.h"
#include "Console.h"
#include "ConsoleUtils.h"
using namespace std;

class MyConsole;

class AddMenu : public Menu
{
private:
    MyConsole* console;
    string name, price;

public:
    AddMenu(MyConsole* console);
    void show();
    void handleInput(string input);
    string toString();
};