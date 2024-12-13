#include "exercises_data.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

// �ΰ� Ŭ���� (�θ� Ŭ����)
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
        cout << "����: " << age << ", ����: " << (gender == 'M' || gender == 'm' ? "����" : "����")
            << ", Ű: " << height << " cm, ������: " << weight << " kg" << endl;
    }

    float calculateBMI() const {
        return weight / ((height / 100) * (height / 100));
    }

    string getBMIInfo() const {
        float bmi = calculateBMI();
        string category;

        if (bmi < 18.5)
            category = "��ü��";
        else if (bmi < 24.9)
            category = "���� ü��";
        else if (bmi < 30)
            category = "��ü��";
        else
            category = "��";

        return "BMI: " + to_string(bmi) + " (" + category + ")";
    }

    bool getIsBeginner() const {
        return isBeginner;
    }

    virtual string getExerciseCategory() const = 0; // ���� ���� �Լ� (�ڽ� Ŭ�������� ����)
};

// ���� Ŭ����
class Male : public Human {
public:
    Male(int age, float height, float weight, bool isBeginner)
        : Human(age, 'M', height, weight, isBeginner) {}

    string getExerciseCategory() const override {
        float bmi = calculateBMI();
        if (age >= 60) return "������";
        if (bmi < 18.5) return "�ٷ�";
        if (bmi < 24.9) return "�ٷ�";
        if (bmi < 30) return "�����";
        return "���� �����";
    }

    void printInfo() const override {
        cout << "[���� ����]" << endl;
        Human::printInfo();
        cout << getBMIInfo() << endl;
    }
};

// ���� Ŭ����
class Female : public Human {
public:
    Female(int age, float height, float weight, bool isBeginner)
        : Human(age, 'F', height, weight, isBeginner) {}

    string getExerciseCategory() const override {
        float bmi = calculateBMI();
        if (age >= 60) return "������";
        if (bmi < 18.5) return "������";
        if (bmi < 24.9) return "�ٷ�";
        if (bmi < 30) return "�����";
        return "���� �����";
    }

    void printInfo() const override {
        cout << "[���� ����]" << endl;
        Human::printInfo();
        cout << getBMIInfo() << endl;
    }
};

// � ���� ����Ʈ ����
const vector<string> bodyParts = { "����", "����", "���", "��", "��", "�����", "������", "���Ƹ�", "�ھ�", "����" };

// � ��õ �Լ�
void recommendExercises(const string& category, const string& bodyPart) {
    cout << "\n��õ � ���α׷�: " << endl;
    bool found = false;

    for (const auto& exercise : exercises) {
        if (exercise.getCategory() == category && exercise.getBodyPart() == bodyPart) {
            cout << exercise.get_ex_info() << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "�ش� ���ǿ� �´� ��� �����ϴ�." << endl;
    }
}

// �������� � ������ �����ϴ� �Լ�
string getRandomBodyPart() {
    int randomIndex = rand() % bodyParts.size(); // ���� �ε��� ����
    return bodyParts[randomIndex];
}

int main() {
    srand(time(0)); // ���� �ʱ�ȭ

    // ����� ���� �Է�
    int age;
    char gender;
    float height, weight;
    char beginnerResponse;
    bool isBeginner;

    cout << "���� ����� �Ÿ��� ���� �� �ֽ��ϴ�!" << endl;
    cout << "���̸� �Է��ϼ���: ";
    cin >> age;
    do {
        cout << "������ �Է��ϼ��� (M/F): ";
        cin >> gender;
    } while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f');
    cout << "Ű(cm)�� �Է��ϼ���: ";
    cin >> height;
    cout << "������(kg)�� �Է��ϼ���: ";
    cin >> weight;
    cout << "��� ó�� �Ͻó���? (Y/N): ";
    cin >> beginnerResponse;
    isBeginner = (beginnerResponse == 'Y' || beginnerResponse == 'y');

    // �ΰ� ��ü ����
    Human* user;
    if (gender == 'M' || gender == 'm') {
        user = new Male(age, height, weight, isBeginner);
    }
    else {
        user = new Female(age, height, weight, isBeginner);
    }

    // ����� ���� ���
    user->printInfo();

    // ������ � ��õ
    string exerciseCategory = user->getExerciseCategory();
    cout << "\n��õ � ī�װ�: " << exerciseCategory << endl;

    string bodyPart;

    // �ʺ����� ��� �������� � ������ ����
    if (isBeginner) {
        bodyPart = getRandomBodyPart();
        cout << "\n�ʺ����̹Ƿ� �������� ���õ� � ����: " << bodyPart << endl;
    }
    else {
        cout << "� ������ �Է��ϼ��� (����, ����, ���, ��, ��, �����, ������, ���Ƹ�, �ھ�, ����): ";
        cin >> bodyPart;
    }

    // ��õ � ���
    recommendExercises(exerciseCategory, bodyPart);

    delete user; // ���� �޸� ����

    return 0;
}