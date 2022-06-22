#include <iostream>
#include "group.h"
#include "student.h"
int main()
{
    setlocale(LC_ALL, "rus");
    group group1;

    group1.add(student("Сейсенбай", "Нуржан", "Ермекулы", 208, 4));
    group1.add(student("Дюсембаева", "Камиля", "Армановна", 208, 5));
    group1.add(student("Безверхова", "Екатерина", "Станиславовна", 208, 4));
    group1.sort();
    group1.show();
    return 0;
}
