#include "human.h"

int main()
{
    Student student("studentov", "student", "studentovich", 18, true);
    Boss boss("bossov", "boss", "bossovich", 44, 15);
    student.print();
    cout << endl;
    boss.print();
}
