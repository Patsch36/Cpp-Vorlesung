// VL04_Aufgaben.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void printVec(std::vector<std::string> food)
{
    for (auto entry : food)
        std::cout << entry << std::endl;
    std::cout << std::endl;
}

int mainVec()
{
    std::vector<std::string> food = { "Eier", "Milch", "Zucker", "Schokolade", "Mehl" };

    printVec(food);

    food.erase(food.begin());

    printVec(food);

    food.push_back("Kaffee");

    printVec(food);

     auto zucker = std::find_if(food.begin(), food.end(), [](std::string s) {
       return s == "Zucker";
        });

     if(zucker != food.end())
        *zucker = "Honig";

    printVec(food);

    return 0;
}
