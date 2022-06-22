#include <iostream>
#include <string.h>
using namespace std;

//Класс "рога"
class Roga {
protected:
    char color[25];
    int wes;
    char name[20];//доп.поле с одинаковым названием

public:
    
    Roga() {
        strcpy_s(color, "Dirty");
        wes = 20;
    }
    Roga(char* c, int w) {
        strcpy_s(color, c);
        wes = w;
    }
};

//Класс "копыта"
class Kopyta {
protected:
    char forma[25];
    int razmer;
    char name[20];//доп.поле с одинаковым названием

public:
    Kopyta() {
        strcpy_s(forma, "Big");
        razmer = 10;
    }
    Kopyta(char* c, int w) {
        strcpy_s(forma, c);
        razmer = w;
    }
};

//Класс "Лось", производный от
//классов "рога" и "копыта"
class Los:public Roga, public Kopyta {
public:
    char name[255];
    Los(const char* c) {
        strcpy_s(name, c);
    }
    //Функция потомка может обращаться к
    //элементам обоих базовых классов
    void DisplayInfo() {
        cout << "Name " << name << "\n";
        cout << "Forma " << forma << "\n";
        cout << "Color " << color << "\n";
        cout << "Wes rogov " << wes << "\n";
        cout << "Razmer kopyt " << razmer << "\n";
    }
};

int main()
{
    //создание объекта класса-потомка
    Los l("Vasya");
    l.DisplayInfo();
    


    return 0;
}