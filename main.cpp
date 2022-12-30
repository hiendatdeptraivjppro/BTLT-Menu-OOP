#include "Product.h"
#include "ProductDatabase.h"
#include "LineToProduct.h"
#include "File.h"
#include "Console.h"
#include "MainMenu.h"
#include "ConsoleUtils.h"
using namespace std;

int main()
{
    shared_ptr<ProductDatabase> productDatabase = ProductDatabase::instance();
    productDatabase->loadFromFile("Product.txt");

    //productDatabase->createProduct("Dell Latitude", 19000000);

    MyConsole console(productDatabase.get());

    console.show();
    console.run();

    return 0;
}