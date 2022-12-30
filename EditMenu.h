#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Console.h"
#include "Menu.h"
#include "ConsoleUtils.h"
using namespace std;

class MyConsole;

class EditMenu : public Menu
{
private:
    MyConsole* console;
    Product* product;
    vector<string> lines;
    int cursor;

public:
    EditMenu(MyConsole* console, Product* product);
    void show();
    void handleInput(string input);
    string toString();
};