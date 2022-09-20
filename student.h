#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    student();
    ~student();
    
    void set_student_data(int studentNumber, string studentName);
    void set_student_transaction(int n = 0);
    int get_student_transaction();
    string get_student_name();
    int get_student_number();
    void get_borrow(int n);
    void check_validity(int n);
    void print_student_data();
private:
    int student_number;
    string student_name;
    int transaction;

};

#endif // STUDENT_H
