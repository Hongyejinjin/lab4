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
    //constructor: 모든 멤버변수 초기화, 기본값 설정, test함수들 호출
        student(int d = 1234567, int s = 0, char g = 'F')
            :id{d}, score{s}, grade{g}
        {
            testId(); testScore(); testGrade();
        }
        
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
        //const 멤버함수
        void print() const {std::cout << id << ", " << score << ", " << grade << "\n";}
        int getId() const {return id;}
        int getScore() const {return score;}
        char getGrade() const {return grade;}
    };
}



