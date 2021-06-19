// VL04_Aufgaben.cpp : Diese Datei enth�lt die Funktion "main". Hier beginnt und endet die Ausf�hrung des Programms.
//

#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include<numeric>

void printList(std::list<std::string> list)
{
    for (auto entry : list)
        std::cout << entry << std::endl;
    std::cout << std::endl;
}

bool lengthsort(std::list<std::string> s1, std::list<std::string> s2) {
    return sizeof(s1) < sizeof(s2);
}

int main()
{
    std::list <std::string> set;
    printList(set);

    set.assign({ "Eier", "Milch", "Zucker", "Schokolade", "Mehl" });
    printList(set);

    set.pop_front();
    printList(set);

    set.push_back("Kaffee");
    printList(set);

    auto zucker = std::find_if(set.begin(), set.end(), [](std::string s) {
        return s == "Zucker";
        });

    if (zucker != set.end())
        *zucker = "Honig";
    printList(set);

    auto milch = std::find_if(set.begin(), set.end(), [](std::string s) {
        return s == "Milch";
        });

    if (zucker != set.end())
        set.erase(milch);
    printList(set);

    /*set.emplace(milch, "Backpulver");
    printList(set);*/

    std::sort(std::begin(set), std::end(set), lengthsort);
    printList(set);

    return 0;
}
