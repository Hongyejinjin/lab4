#pragma once // header guard
#include <iostream>

namespace hongyejin2649058
{
    class student
    {
        int id{};
        int score{};
        char grade{};
        void testId()
        {
            if (id < 1000000 || id > 9999999) {
                std::cout << "Illegal score value!" << std::endl;
                std::exit(1);
            }
        }
        void testScore()
        {
            if (score < 0 || score > 100) {
                std::cout << "Illegal score value!" << std::endl;
                std::exit(1);
            }
        }
        void testGrade()
        {
            if (grade < 'A' || grade > 'F') {
                std::cout << "Illegal score value!" << std::endl;
                std::exit(1);
                }
            }

    public:
        void input()
        {
            std::cout << "Enter id: ";
            std::cin >> id; 
            testId();
            std::cout << "Enter score: ";
            std::cin >> score; 
            testScore();
            std::cout << "Enter grade: ";
            std::cin >> grade; 
            testGrade();
        }
        void setId(int d) {id = d; testId();}
        void setScore(int s) {score = s; testScore();}
        void setGrade(char g) {grade = g; testGrade();}
        void print() {std::cout << id << ", " << score << ", " << grade << "\n";}
        int getId() {return id;}
        int getScore() {return score;}
        char getGrade() {return grade;}
    };
}



