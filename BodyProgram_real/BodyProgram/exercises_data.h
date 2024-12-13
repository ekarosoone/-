#include <string>
#include <vector>

class Exercise {
private:
    std::string name;
    std::string category;
    std::string bodyPart;
    int repeat;
    std::string information;

public:
    // 생성자
    Exercise(const std::string& name, const std::string& category, const std::string& bodyPart, int repeat, const std::string& information)
        : name(name), category(category), bodyPart(bodyPart), repeat(repeat), information(information) {}

    // 운동 정보 반환 함수
    std::string get_ex_info() const {
        return "운동: " + name + ", 종류: " + category + ", 부위: " + bodyPart + ", 반복 횟수: " + std::to_string(repeat) + ", 설명: " + information;
    }

    // 운동 카테고리 반환 함수
    std::string getCategory() const { return category; }

    // 운동 부위 반환 함수
    std::string getBodyPart() const { return bodyPart; }
};

extern std::vector<Exercise> exercises;
