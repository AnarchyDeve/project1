#ifndef GRADE_LIBRARY_H
#define GRADE_LIBRARY_H

#include <vector>
#include <string>

// 과목 정보를 저장하는 구조체 정의
struct Subject {
    std::string name;   // 과목 이름
    double score;       // 점수 (예: 4.0 만점 기준)
    double credit;      // 학점 (예: 3학점)
};

// 과목 추가 함수 선언
void addSubject(std::vector<Subject>& subjects, const std::string& name, double score, double credit);

// 학점 평균 계산 함수 선언
double calculateGradeAverage(const std::vector<Subject>& subjects);

#endif
