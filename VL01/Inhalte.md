# OOP

- Kapselung

- Verknüpfung

- Verknüpfung von Daten und Funktion

  ## Klassenbeispiel

````cpp
# pragma once
class Rectangle
{
    int m_height;
    int m_width;
    
public:
    Rectangle();
    ~Rectangle();
    
    void setWidth(int w);
    int setHeight(int h);
    int getArea();
}
````

```cpp
#include "Rectangle.h"

Rectangle::Rectangle(){}

~Rectangle::Rectangle(){}

void Rectangle::setWidth()
{
    M_width = w;
}

void Rectangle::setHeight(){
    m_height = h;
}

int Rectangle::getArea()
{
    return m_height * m_width;
}
```

 -  Pragma Once sorgt dafür, dass mehrfach definierter Code teil nur einmal eingefügt wird

    ## Konstruktor

-  Konstruktor weißt Werte zu

- Sobald es einen eigenen Konstruktor gibt, muss man den Standard Konstruktor selber hinzufügen

## Initialisieren

- int a = 0;  => normal
- int a(0);  => für komplexe Datentypen
- int a{0};  => empfohlen, da bessere Typüberprüfung

