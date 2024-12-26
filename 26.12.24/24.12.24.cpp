#include <iostream>
using namespace std;
#include "Sector.h"

int main()
{
    MarkList* ml1 = new MarkList("maths", { 1, 2, 3, 4, 5 }, 4);
    MarkList* ml2 = new MarkList("rus", { 1, 2, 3, 4, 5 }, 3);
    MarkList* ml3 = new MarkList("eng", { 1, 2, 3, 4, 50 }, 5);

    vector<MarkList*> mlArr {ml1, ml2, ml3};
    Student* st1 = new Student("a b c", 15, "78909090909", "abc3143142", "12212121qwerty", mlArr);
    Student* st2 = new Student("f d g", 15, "78909093542", "abc3143142219", "12212121zx", mlArr);
    Student* st3 = new Student("a b e", 15, "78909098808", "abc31ufhdf", "12212121qwertyasdf", mlArr);
    vector<Student*> stArr{ st1, st2, st3 };
    Group gr1(stArr, "group1", "IT");
    Group gr2(stArr, "group2", "IT1");
    Group gr3(stArr, "group3", "ITd");
    vector<Group> grArr{ gr1, gr2, gr3 };
    Teacher teacher("a k l", 25, "8272137283", "gfygsfyg12", "6476234", grArr);
    teacher.printTeacher();

}
