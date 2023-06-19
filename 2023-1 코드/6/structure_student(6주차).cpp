#include <iostream>
using namespace std;

struct student {
    char studentName[20];
    int studentAge;
    int studentID;
    char studentAddress[20];
};

void increaseAge(student& students) {
    students.studentAge++;
}

int main(){
    student students[5] = {
        {"김민서", 20, 2022040010, "대전시"},
        {"김우왕", 15, 1, "청주시"},
        {"이좌왕", 17, 2, "청주시"},
        {"요를레이", 36, 3, "부산시"},
        {"짱구", 4, 4, "서울시"}
    };

    for (int i = 0; i < 5; i++) {
        increaseAge(students[i]);
    }

    for (int i = 0; i < 5; i++) {
        cout << "Name: " << students[i].studentName
             << ", Age: " << students[i].studentAge
             << ", ID: " << students[i].studentID
             << ", Address: " << students[i].studentAddress << endl;
    }

    return 0;
}





