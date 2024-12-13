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
    // ������
    Exercise(const std::string& name, const std::string& category, const std::string& bodyPart, int repeat, const std::string& information)
        : name(name), category(category), bodyPart(bodyPart), repeat(repeat), information(information) {}

    // � ���� ��ȯ �Լ�
    std::string get_ex_info() const {
        return "�: " + name + ", ����: " + category + ", ����: " + bodyPart + ", �ݺ� Ƚ��: " + std::to_string(repeat) + ", ����: " + information;
    }

    // � ī�װ� ��ȯ �Լ�
    std::string getCategory() const { return category; }

    // � ���� ��ȯ �Լ�
    std::string getBodyPart() const { return bodyPart; }
};

extern std::vector<Exercise> exercises;
