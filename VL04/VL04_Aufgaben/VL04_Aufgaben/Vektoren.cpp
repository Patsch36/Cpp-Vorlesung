// VL04_Aufgaben.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


// Elemente eines Vektors ausgeben
void printVec(const std::vector<std::string>& food)
{
    for (const auto& entry : food)
        std::cout << entry << std::endl;
    std::cout << std::endl;
}


// Funktion um nach der Länge zu sortieren
bool lengthsortVec(const std::string& s1, const std::string& s2)
{
    return s1.length() < s2.length();
}


// Funktion, um nach dem ersten Vokal zu sortieren
bool firstVocalVec(const std::string& s1, const std::string& s2)
{
    auto findFirstVocal = [](const std::string& s)
    {
        for (const auto& letter : s)
        {
            if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
                letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
                return letter;
        }
    };

    return findFirstVocal(s1) < findFirstVocal(s2);
}

void deleteFirstElement(std::vector<std::string>& vec) {
    if(vec.begin() != vec.end())
        vec.erase(vec.begin());
}


int main()
{
    // Erstellt einen leeren Vektor vom Typ string und printet ihn.
    std::vector<std::string> food;
    deleteFirstElement(food);
    printVec(food);
    

    // Fügt die Strings “Eier”, “Milch”, “Zucker”, “Schokolade” und “Mehl” dazu. Printet ihn.
    food.assign({ "Eier", "Milch", "Zucker", "Schokolade", "Mehl" });

    printVec(food);


    // Entfernt das erste Element. Printet den Vektor.
    deleteFirstElement(food);

    printVec(food);


    // Füge Kaffee hinzu, printe.
    food.push_back("Kaffee");

    printVec(food);


    // Ersetze das Item Zucker durch Honig, printe den Vector.
     auto zucker = std::find_if(food.begin(), food.end(), [](const std::string& s) {
       return s == "Zucker";
        });

     if(zucker != food.end())
        *zucker = "Honig";

     printVec(food);


     // Suche nach Milch und entferne es. Printe den Vektor.

     auto milch = std::find_if(food.begin(), food.end(), [](const std::string& s) {
         return s == "Milch";
         });

     if (milch != food.end())
         food.erase(milch);

     printVec(food);


     // Sortierungen
     std::sort(food.begin(), food.end(), lengthsortVec);
     printVec(food);

     std::sort(food.begin(), food.end(), firstVocalVec);
     printVec(food);


    return 0;
}
