// VL04_Aufgaben.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
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

bool lengthsort(std::string s1, std::string s2)
{
    return s1.length() < s2.length();
}

bool firstVocal(std::string s1, std::string s2)
{
    auto findFirstVocal = [](std::string s)
    {
        for (auto letter : s)
        {
            if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
                return letter;
        }
    };

    return findFirstVocal(s1) < findFirstVocal(s2);
}

int mainList()
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

    set.sort(lengthsort);
    printList(set);

    set.sort(firstVocal);
    printList(set);

    return 0;
}
