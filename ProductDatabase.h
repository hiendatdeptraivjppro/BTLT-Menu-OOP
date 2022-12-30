#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Product.h"
#include "LineToProduct.h"
#include "File.h"
using namespace std;

class ProductDatabase
{
private:
    vector<Product*> products;
    inline static shared_ptr<ProductDatabase> _instance = nullptr;
    ProductDatabase();

public:
    Product& getProduct(int id);
    vector<Product*>& getProducts();
    vector<Object*> getObjects();

public:
    static shared_ptr<ProductDatabase> instance();
    Product createProduct(string name, int price);
    void removeProduct(int id);
    bool loadFromFile(string path);
};