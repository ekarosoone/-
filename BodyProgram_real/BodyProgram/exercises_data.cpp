#include "exercises_data.h"

#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

// � ������ ����
std::vector<Exercise> exercises = {
    // ���� �


Exercise("Burpees", "�ٷ�", "����", 15, "������ ����ϴ� ���� ����� �ɹڼ��� ���̴� �����Դϴ�. https://youtu.be/auBLPXO8Fww?si=UINrsVXY_9MHk4mi"),
    Exercise("Deadlift", "�ٷ�", "����", 10, "������ ����ϴ� ���帮��Ʈ ��Դϴ�. https://www.youtube.com/watch?v=1ZXobu7JvvE"),
    Exercise("Snatch", "�ٷ�", "����", 8, "������ �ٷ��� ��ȭ�ϴ� ����ġ ��Դϴ�. https://www.youtube.com/watch?v=UBc5N_-xdqo"),

    // ���� � (�ٷ�)
    Exercise("Bench Press", "�ٷ�", "����", 12, "����ٰ� ������� ��ȭ�ϴ� ��ġ ������ ��Դϴ�. https://youtu.be/gRVjAtPip0Y?si=O5rgUEW625t3Tg7n"),
    Exercise("Push-Up", "�ٷ�", "����", 15, "����ٰ� ������� ��ȭ�ϴ� Ǫ�����Դϴ�. https://youtu.be/_l3ySVKYVJ8?si=wqO_KZSICvM_EIYx"),
    Exercise("Chest Fly", "�ٷ�", "����", 12, "������� ��ȭ�ϴ� ü��Ʈ �ö��� ��Դϴ�. https://youtu.be/Nhvz9EzdJ4U?si=QKdLX20qEP7lT9e_"),

    // ��� � (�ٷ�)
    Exercise("Shoulder Press", "�ٷ�", "���", 12, "�ﰢ���� ��ȭ�ϴ� ��� ������ ��Դϴ�. https://youtu.be/WvLMauqrnK8?si=xV6tgwvz_qNTxp3S"),
    Exercise("Lateral Raise", "�ٷ�", "���", 15, "�ﰢ�� ������ ��ȭ�ϴ� ���ͷ� ������ ��Դϴ�. https://youtu.be/OuG1smZTsQQ?si=XnUorUihAnUg4cfS"),
    Exercise("Face Pull", "�ٷ�", "���", 12, "�ﰢ�� �ĸ��� ��ȭ�ϴ� ���̽� Ǯ ��Դϴ�. https://youtu.be/0Po47vvj9g4?si=bAHgnWrAjoUbQEL4"),

    // �� � (�ٷ�)
    Exercise("Barbell Curl", "�ٷ�", "��", 12, "�̵α��� ��ȭ�ϴ� �ٺ� �� ��Դϴ�. https://youtu.be/N5x5M1x1Gd0?si=8I-Z70FkMXsn4prM"),
    Exercise("Triceps Extension", "�ٷ�", "��", 12, "��α��� ��ȭ�ϴ� Ʈ���̼��� �ͽ��ټ� ��Դϴ�. https://youtu.be/_JoblP7fggo?si=WJot1Uu1ZAz_BBUS"),
    Exercise("Dumbbell Curl", "�ٷ�", "��", 12, "�̵α��� ��ȭ�ϴ� ���� �� ��Դϴ�. https://youtu.be/CFBZ4jN1CMI?si=k1oUFRgyc5pWpeTv"),

    // �� � (�ٷ�)
    Exercise("Pull-Up", "�ٷ�", "��", 10, "�����, �¸��, �������� ��ȭ�ϴ� Ǯ�� ��Դϴ�. https://youtu.be/aAggnpPyR6E?si=EHr6-aLQw2OpzxOM"),
    Exercise("Barbell Row", "�ٷ�", "��", 12, "����ٰ� �������� ��ȭ�ϴ� �ٺ� �ο� ��Դϴ�. https://youtu.be/bm0_q9bR_HA?si=148JX_od8WiJXdHq"),
    Exercise("Lat Pulldown", "�ٷ�", "��", 12, "������� ��ȭ�ϴ� �� Ǯ�ٿ� ��Դϴ�. https://youtu.be/NAIEnMjN-6w?si=-69OIig0X20GhB7T"),

    // ����� � (�ٷ�)
    Exercise("Squat", "�ٷ�", "�����", 15, "�����αٰ� �ܽ�Ʈ���� ��ȭ�ϴ� ����Ʈ ��Դϴ�. https://youtu.be/B86Zj72LwzA?si=r4bqSAdA9LKnZPA5"),
    Exercise("Lunge", "�ٷ�", "�����", 15, "�����αٰ� �ܽ�Ʈ���� ��ȭ�ϴ� ���� ��Դϴ�. https://youtu.be/tQNktxPkSeE?si=9GwbqZ048hwG_enb"),
    Exercise("Leg Press", "�ٷ�", "�����", 12, "�����αٰ� �ܽ�Ʈ���� ��ȭ�ϴ� ���� ������ ��Դϴ�. https://youtu.be/yZmx_Ac3880?si=cZ8zRbwlGorh4qSW"),

    // ������ � (�ٷ�)
    Exercise("Hip Thrust", "�ٷ�", "������", 12, "��б�, �ߵб�, �ҵб��� ��ȭ�ϴ� �� ������Ʈ ��Դϴ�. https://youtu.be/L1qG25DhAk4?si=S19evwgyboou_jdt"),
    Exercise("Glute Bridge", "�ٷ�", "������", 15, "�б��� ��ȭ�ϴ� �۷�Ʈ �긮�� ��Դϴ�. https://youtu.be/OUgsJ8-Vi0E?si=82GOmaA0Dqi5fUUG"),

    // ���Ƹ� � (�ٷ�)
    Exercise("Calf Raise", "�ٷ�", "���Ƹ�", 20, "�񺹱ٰ� ���ڹ̱��� ��ȭ�ϴ� ī�� ������ ��Դϴ�. https://youtu.be/c5Kv6-fnTj8?si=c-8IKdLrCI6RTKtr"),
    Exercise("Jump Squat", "�ٷ�", "���Ƹ�", 10, "�񺹱ٰ� ��ü ������ ��ȭ�ϴ� ���� ����Ʈ ��Դϴ�. https://youtu.be/BRfxI2Es2lE?si=Z7-j15f3DKZDYgr_"),

    // �ھ� � (�ٷ�)
    Exercise("Plank", "�ٷ�", "�ھ�", 3, "���ٰ� ô�߱⸳���� ��ȭ�ϴ� �÷�ũ ��Դϴ�. https://youtu.be/pvIjsG5Svck?si=cdH4LPUuEZ0VUXOw"),
    Exercise("Leg Raise", "�ٷ�", "�ھ�", 15, "�������� ��ȭ�ϴ� ���� ������ ��Դϴ�. https://youtu.be/U4L_6JEv9Jg?si=xQCPIYKFajYyuZHp"),
    Exercise("Crunch", "�ٷ�", "�ھ�", 20, "�������� ��ȭ�ϴ� ũ��ġ ��Դϴ�. https://youtu.be/NnVhqMQRvmM?si=z49SYHQasHVHIgJI"),
    Exercise("Russian Twist", "�ٷ�", "�ھ�", 20, "������� ��ȭ�ϴ� ���þ� Ʈ����Ʈ ��Դϴ�. https://youtu.be/Tau0hsW8iR0?si=V9YyAtVmBUljyxrZ"),

    // ���� � (�����)
    Exercise("Jogging", "�����", "����", 30, "���� ����� ����Ű�� ���� ��Դϴ�. https://youtube.com/shorts/M9U9pk6yOIU?si=rEPlgrsYi5HF4BOF"),
    Exercise("Cycling", "�����", "����", 20, "���� ����� ����Ű�� ����Ŭ�� ��Դϴ�. https://youtu.be/4ssLDk1eX9w?si=F2VBpF_tWdFbBi7l"),
    Exercise("Rowing", "�����", "����", 15, "���� ����� ����Ű�� ���� ��Դϴ�. https://youtu.be/fxfhQMbATCw?si=i6AoK7eEDmgrkRpZ"),
    Exercise("Swimming", "�����", "����", 25, "���� ����� ����Ű�� ���� ��Դϴ�. https://youtu.be/gnu4AnI2nqg?si=aqfUeP04P8u07yne"),

    // ��Ÿ � 
    Exercise("Neck Flexion", "������", "��", 5, "�� ������ ��ȭ�ϴ� �� �÷��� ��Դϴ�. https://youtu.be/6k9VQNN8B5U?si=-iloFrXa1Dum-sOh"),
    Exercise("Wrist Curl", "�ٷ�", "�ո�", 10, "�ո� ������ ��ȭ�ϴ� �ո� �� ��Դϴ�. https://youtu.be/3VLTzIrnb5g?si=cNrvWp0ThOkonef9"),
    Exercise("Forearm Grip Training", "�ٷ�", "����", 10, "���ϱ��� ��ȭ�ϴ� �׸� Ʈ���̴� ��Դϴ�. https://youtu.be/MfMxT_jXcPE?si=i7_J8vYMsG5F7SN3")
};