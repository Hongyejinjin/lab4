#include "studentStatus.h"

namespace hongyejin2649058
{
    bool compareStudent(const student& s1, const student& s2)
    {
        return s1.getId() == s2.getId() && s1.getScore() == s2.getScore() && s1.getGrade() == s2.getGrade();
    }
}
int main()
{
    using namespace hongyejin2649058;
    studentStatus s1;
    s1.print();
    studentStatus s2{student{2649059, 100, 'A'},true};
    s2.print();

    if (compareStudent(s1.getStudent(), s2.getStudent())) std::cout << "same" << std::endl;
    else std::cout << "NOT same" << std::endl;
    return 0;
}