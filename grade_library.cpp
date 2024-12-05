#include "grade_library.h"
#include <vector>
#include <string>

// 과목 추가 함수 정의
void addSubject(std::vector<Subject>& subjects, const std::string& name, double score, double credit) {
    // 새로운 과목을 구조체에 추가하여 리스트에 저장
    subjects.push_back({name, score, credit});
}

// 학점 평균 계산 함수 정의
double calculateGradeAverage(const std::vector<Subject>& subjects) {
    double totalWeightedScore = 0.0; // 총 가중치 점수 (점수 * 학점)
    double totalCredits = 0.0;       // 총 학점 수

    // 각 과목의 점수와 학점을 이용해 총 가중치 점수 및 학점 계산
    for (const auto& subject : subjects) {
        totalWeightedScore += subject.score * subject.credit; // 점수 * 학점을 더함
        totalCredits += subject.credit;                      // 학점을 더함
    }

    // 학점 평균 계산: 총 가중치 점수 / 총 학점
    return (totalCredits > 0) ? totalWeightedScore / totalCredits : 0.0; // 총 학점이 0이면 0 반환
}
