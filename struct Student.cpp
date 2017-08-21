#include <iostream>
using namespace std;

struct Student{
    char name[20];
    char surname[20];
    char institute[20];
    double mark[4];
};

void read(Student data[], int sizeofArray);
double average(Student data[], int sizeofArray);

int main(){
    Student stdnt[20];
    cout << "This program outputs one student's data and the average of his/her marks." << endl;
    cout << endl;
    read(stdnt, 1); //change the second argument to whatever number you wish if you want the program to ask for more than 1 student
    for(int i = 0; i < 1; i++){
        cout << "Name: " << stdnt[i].name << endl;
        cout << "Surname: " << stdnt[i].surname << endl;
        cout << "Institute: " << stdnt[i].institute << endl;
    }
    cout << "Average: " << average(stdnt, 10); //change the second argument to whatever number you wish if you want the program to calculate the average for more than/less than 10 marks
    return 0;
}

void read(Student data[], int sizeofArray){
    for(int i = 0; i < sizeofArray; i++){
        cout << "Enter name: " << endl;
        cin >> data[i].name;
        cout << endl;
        cout << "Enter surname: " << endl;
        cin >> data[i].surname;
        cout << endl;
        cout << "Enter institute: " << endl;
        cin >> data[i].institute;
        cout << endl;
    }
    for(int j = 0; j < 10; j++){        //<---Eliminate this loop and
        cout << "Enter mark: " << endl; //include its content into the previous
        cin >> data[j].mark[j];         //loop if you want to re-enter a
        cout << endl;                   //student's mark after another's
    }
}

double average(Student data[], int sizeofArray){
    double j = 0.0;
    for(int i = 0; i < sizeofArray; i++)
        j = j + data[i].mark[i];
    return j / sizeofArray;
}
