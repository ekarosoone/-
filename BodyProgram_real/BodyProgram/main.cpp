#include "exercises_data.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

// 인간 클래스 (부모 클래스)
class Human {
protected:
    int age;
    char gender;
    float height;
    float weight;
    bool isBeginner;

public:
    Human(int age, char gender, float height, float weight, bool isBeginner)
        : age(age), gender(gender), height(height), weight(weight), isBeginner(isBeginner) {}

    virtual void printInfo() const {
        cout << "나이: " << age << ", 성별: " << (gender == 'M' || gender == 'm' ? "남자" : "여자")
            << ", 키: " << height << " cm, 몸무게: " << weight << " kg" << endl;
    }

    float calculateBMI() const {
        return weight / ((height / 100) * (height / 100));
    }

    string getBMIInfo() const {
        float bmi = calculateBMI();
        string category;

        if (bmi < 18.5)
            category = "저체중";
        else if (bmi < 24.9)
            category = "정상 체중";
        else if (bmi < 30)
            category = "과체중";
        else
            category = "비만";

        return "BMI: " + to_string(bmi) + " (" + category + ")";
    }

    bool getIsBeginner() const {
        return isBeginner;
    }

    virtual string getExerciseCategory() const = 0; // 순수 가상 함수 (자식 클래스에서 구현)
};

// 남자 클래스
class Male : public Human {
public:
    Male(int age, float height, float weight, bool isBeginner)
        : Human(age, 'M', height, weight, isBeginner) {}

    string getExerciseCategory() const override {
        float bmi = calculateBMI();
        if (age >= 60) return "유연성";
        if (bmi < 18.5) return "근력";
        if (bmi < 24.9) return "근력";
        if (bmi < 30) return "유산소";
        return "고강도 유산소";
    }

    void printInfo() const override {
        cout << "[남자 정보]" << endl;
        Human::printInfo();
        cout << getBMIInfo() << endl;
    }
};

// 여자 클래스
class Female : public Human {
public:
    Female(int age, float height, float weight, bool isBeginner)
        : Human(age, 'F', height, weight, isBeginner) {}

    string getExerciseCategory() const override {
        float bmi = calculateBMI();
        if (age >= 60) return "유연성";
        if (bmi < 18.5) return "유연성";
        if (bmi < 24.9) return "근력";
        if (bmi < 30) return "유산소";
        return "고강도 유산소";
    }

    void printInfo() const override {
        cout << "[여자 정보]" << endl;
        Human::printInfo();
        cout << getBMIInfo() << endl;
    }
};

// 운동 부위 리스트 정의
const vector<string> bodyParts = { "전신", "가슴", "어깨", "팔", "등", "허벅지", "엉덩이", "종아리", "코어", "심폐" };

// 운동 추천 함수
void recommendExercises(const string& category, const string& bodyPart) {
    cout << "\n추천 운동 프로그램: " << endl;
    bool found = false;

    for (const auto& exercise : exercises) {
        if (exercise.getCategory() == category && exercise.getBodyPart() == bodyPart) {
            cout << exercise.get_ex_info() << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "해당 조건에 맞는 운동이 없습니다." << endl;
    }
}

// 랜덤으로 운동 부위를 선택하는 함수
string getRandomBodyPart() {
    int randomIndex = rand() % bodyParts.size(); // 랜덤 인덱스 선택
    return bodyParts[randomIndex];
}

int main() {
    srand(time(0)); // 랜덤 초기화

    // 사용자 정보 입력
    int age;
    char gender;
    float height, weight;
    char beginnerResponse;
    bool isBeginner;

    cout << "실제 운동과는 거리가 있을 수 있습니다!" << endl;
    cout << "나이를 입력하세요: ";
    cin >> age;
    do {
        cout << "성별을 입력하세요 (M/F): ";
        cin >> gender;
    } while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f');
    cout << "키(cm)를 입력하세요: ";
    cin >> height;
    cout << "몸무게(kg)를 입력하세요: ";
    cin >> weight;
    cout << "운동을 처음 하시나요? (Y/N): ";
    cin >> beginnerResponse;
    isBeginner = (beginnerResponse == 'Y' || beginnerResponse == 'y');

    // 인간 객체 생성
    Human* user;
    if (gender == 'M' || gender == 'm') {
        user = new Male(age, height, weight, isBeginner);
    }
    else {
        user = new Female(age, height, weight, isBeginner);
    }

    // 사용자 정보 출력
    user->printInfo();

    // 맞춤형 운동 추천
    string exerciseCategory = user->getExerciseCategory();
    cout << "\n추천 운동 카테고리: " << exerciseCategory << endl;

    string bodyPart;

    // 초보자인 경우 랜덤으로 운동 부위를 선택
    if (isBeginner) {
        bodyPart = getRandomBodyPart();
        cout << "\n초보자이므로 랜덤으로 선택된 운동 부위: " << bodyPart << endl;
    }
    else {
        cout << "운동 부위를 입력하세요 (전신, 가슴, 어깨, 팔, 등, 허벅지, 엉덩이, 종아리, 코어, 심폐): ";
        cin >> bodyPart;
    }

    // 추천 운동 출력
    recommendExercises(exerciseCategory, bodyPart);

    delete user; // 동적 메모리 해제

    return 0;
}