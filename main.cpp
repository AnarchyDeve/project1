#include <iostream>
#include <vector>
#include "grade_library.h" // 사용자 정의 라이브러리 포함

using namespace std;

int main() {
    vector<Subject> subjects; // 과목 정보를 저장하는 리스트

    cout << "학점 평균 계산기 프로그램\n";

    while (true) {
        // 메뉴 출력
        cout << "\n1. 과목 추가\n2. 학점 평균 계산\n3. 종료\n";
        cout << "선택: ";
        int choice;
        cin >> choice; // 사용자 입력

        if (choice == 1) {
            // 과목 추가
            string name;
            double score, credit;

            // 사용자로부터 과목 이름, 점수, 학점 입력받기
            cout << "과목 이름: ";
            cin >> name;
            cout << "점수 (0~4.0): ";
            cin >> score;
            cout << "학점: ";
            cin >> credit;

            // addSubject 함수를 호출하여 과목 추가
            addSubject(subjects, name, score, credit);
            cout << "과목이 추가되었습니다.\n";

        } else if (choice == 2) {
            // 학점 평균 계산 및 출력
            double gradeAverage = calculateGradeAverage(subjects);
            cout << "현재 학점 평균: " << gradeAverage << "\n";

        } else if (choice == 3) {
            // 프로그램 종료
            cout << "프로그램을 종료합니다.\n";
            break;

        } else {
            // 잘못된 입력 처리
            cout << "잘못된 입력입니다. 다시 시도하세요.\n";
        }
    }

    return 0;
}
