#include "student.h"

#include <iostream>
#include <string>
using namespace std;

student::student()
{
}

student::~student()
{
}

void student::set_student_data(int studentNumber, string studentName){
    student_number = studentNumber;
    student_name = studentName;
}


string student::get_student_name(){
    return student_name;
}
int student::get_student_number(){
    return student_number;
}

void student::set_student_transaction(int n ){
    if(n == 0)
    {
        cout<<"student is allowed to borrow"<<endl;
        transaction = n;
    }
    else if(n == 1)
    {
        cout<<"student is not allowed to borrow another book"<<endl;
        transaction = n;
    }
    else
    {
        cout<<"incorrect choise"<<endl;
    }
}
    int student::get_student_transaction(){
        return transaction;
    }

void student::get_borrow(int n){
    do
    {
        cout<<"please enter a period of borrowing your book that must be maximum 15 days: ";
        cin>>n;
    }
    while (n <= 1 || n > 15);
    
    cout<<"the number of selected days is "<<n<<" be sure to return the book in time"<<endl;
    transaction++;
    
}

void student::check_validity(int n){
    if(n == 1)
    {
        cout<<"you are not allowed to borrow more than one book";
    }
    else if(n == 0)
    {
        cout<<"you are allowed to borrow a book";
    }
}

void student::print_student_data(){
    cout<<"the student name is "<<student_name<<endl;
    cout<<"the student number is "<<student_number<<endl;
    cout<<"the student transaction is "<<transaction<<endl;

}


