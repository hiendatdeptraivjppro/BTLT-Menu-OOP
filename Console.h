#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Menu.h"
#include "Keyboard.h"
#include "ProductDatabase.h"
#include "MainMenu.h"
#include "ConsoleUtils.h"
using namespace std;

class MyConsole
{
private:
    Menu* menu; 
    shared_ptr<Keyboard> keyboard;
    ProductDatabase* productDatabase;
    bool changeConsole;

public:
    void setMenu(Menu* menu);
    ProductDatabase* getProductDatabase();

public:
    MyConsole(ProductDatabase* productDatabase);
    void show();
    void run();
};