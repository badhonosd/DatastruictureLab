#include <iostream>
using namespace std;
struct student{
    int id, semester, credits;
    float cgpa;
};
int main()
{
    student st[10];



    st[1].id = 46351-1;
    st[1].semester = 6;
    st[1].credits = 61;
    st[1].cgpa = 3.24;


    st[2].id = 54925-3;
    st[2].semester = 2;
    st[2].credits = 24;
    st[2].cgpa = 3.50;


    st[3].id = 4583-2;
    st[3].semester = 11;
    st[3].credits = 40;
    st[3].cgpa = 3.80;


    st[4].id = 54985-2;
    st[4].semester = 9;
    st[4].credits = 99;
    st[4].cgpa = 3.60;


    st[5].id = 2579-3;
    st[5].semester = 10;
    st[5].credits = 97;
    st[5].cgpa = 3.87;


    st[6].id = 46547-2;
    st[6].semester = 5;
    st[6].credits = 45;
    st[6].cgpa = 3.10;


    st[7].id = 54354-2;
    st[7].semester = 5;
    st[7].credits = 50;
    st[7].cgpa = 3.40;


    st[8].id = 78924-1;
    st[8].semester = 3;
    st[8].credits = 30;
    st[8].cgpa = 3.90;


    st[9].id = 65468-3;
    st[9].semester = 11;
    st[9].credits = 112;
    st[9].cgpa = 3.27;


    st[10].id = 45974-1;
    st[10].semester = 9;
    st[10].credits = 190;
    st[10].cgpa = 3.30;



    //cout<<st[1].id<<" "<<endl;
    //cout<<st[1].semester<<" "<<endl;
    //cout<<st[1].credits<<" "<<endl;
    //cout<<st[1].cgpa<<" "<<endl;


    //cout<<st[2].id<<" "<<endl;
    //cout<<st[2].semester<<" "<<endl;
    //cout<<st[2].credits<<" "<<endl;
    //cout<<st[2].cgpa<<" "<<endl;


    //cout<<st[3].id<<" "<<endl;
    //cout<<st[3].semester<<" "<<endl;
    //cout<<st[3].credits<<" "<<endl;
    //cout<<st[3].cgpa<<" "<<endl;


    //cout<<st[4].id<<" "<<endl;
    //cout<<st[4].semester<<" "<<endl;
    //cout<<st[4].credits<<" "<<endl;
    //cout<<st[4].cgpa<<" "<<endl;

    //cout<<st[5].id<<" "<<endl;
    //cout<<st[5].semester<<" "<<endl;
    //cout<<st[5].credits<<" "<<endl;
    //cout<<st[5].cgpa<<" "<<endl;


    //out<<st[6].id<<" "<<endl;
    //cout<<st[6].semester<<" "<<endl;
    //cout<<st[6].credits<<" "<<endl;
    //cout<<st[6].cgpa<<" "<<endl;


    //cout<<st[7].id<<" "<<endl;
    //cout<<st[7].semester<<" "<<endl;
    //cout<<st[7].credits<<" "<<endl;
    //cout<<st[7].cgpa<<" "<<endl;


    //cout<<st[8].id<<" "<<endl;
   //cout<<st[8].semester<<" "<<endl;
    //cout<<st[8].credits<<" "<<endl;
    //cout<<st[8].cgpa<<" "<<endl;


    //cout<<st[9].id<<" "<<endl;
    //cout<<st[9].semester<<" "<<endl;
    //cout<<st[9].credits<<" "<<endl;
   // cout<<st[9].cgpa<<" "<<endl;


    //cout<<st[10].id<<" "<<endl;
   // cout<<st[10].semester<<" "<<endl;
    //cout<<st[10].credits<<" "<<endl;
    //cout<<st[10].cgpa<<" "<<endl;



    cout << "\nScholarship Students (CGPA >= 3.75):" << endl;
    for (int i = 1; i < 11; i++) {
        if (st[i].cgpa >= 3.75) {
            cout << "Student ID: " << st[i].id << endl;
        }
    }



    cout << "\nStudents with more than 50 credits:" << endl;
    for (int i = 1; i < 11; i++) {
        if (st[i].credits > 50) {
            cout << "Student ID: " << st[i].id << endl;
        }
    }



    cout << "\nStudents with at least 2 semesters and 28 credits:" << endl;
    for (int i = 1; i < 11; i++) {
        if (st[i].semester >= 2 && st[i].credits >= 28) {
            cout << "Student ID: " << st[i].id << endl;
        }
    }




    return 0;
}

