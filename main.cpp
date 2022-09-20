#include "book.h"
#include "student.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    book record1;
    record1.set_book_info(1,"Alayam","Taha Husin");
    book record2;
    record2.set_book_info(2,"C++","Cem Kazan");
    
    student std1;
    std1.set_student_data(1,"Abdullah");
    
    student std2;
    std2.set_student_data(2,"Alabo");
    
    cout<<"===================================="<<endl;
    cout<<"welcome to liberary book system"<<endl;
    cout<<"===================================="<<endl;
    
    int choise = 0;
    cout<<"please slecet one option --> (1) to add student record (2) modify student data (3) check the student validity (4) to delete a record (-1) to close the app: ";
    cin>>choise;
    
    while (choise != -1)
    {
        if(choise == 1){
            int std_num;
            string std_name;
            int transaction;
            cout<<"please enter student name: ";
            cin>>std_name;
            cout<<"please enter student number: ";
            cin>>std_num;
            student first_std;
            first_std.set_student_data(std_num,std_name);
            first_std.set_student_transaction();
            first_std.print_student_data();
        }
        else if(choise == 2)
        {
            int student_num;
            int transaction_num;
            cout<<"enter the student num: ";
            cin>>student_num;
            cout<<"<please enter transaction num: ";
            cin>>transaction_num;
            
            if(student_num == 1)
            {
                std1.set_student_transaction(transaction_num);
                std1.print_student_data();
            }
            else if(student_num == 2)
            {
                std2.set_student_transaction(transaction_num);
                std2.print_student_data();
            }
            else{
                cout<<"you need to add this student to the records."<<endl;
            }
        }
        cout<<"please slecet one option --> (1) to add student record (2) modify student data (3) check the student validity (4) to delete a record (-1) to close the app: ";
        cin>>choise;        
    }

    
    return 0;

}
