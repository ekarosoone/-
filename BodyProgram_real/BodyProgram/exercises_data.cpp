#include "exercises_data.h"

#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

// 운동 데이터 정의
std::vector<Exercise> exercises = {
    // 전신 운동


Exercise("Burpees", "근력", "전신", 15, "전신을 사용하는 고강도 운동으로 심박수를 높이는 버피입니다. https://youtu.be/auBLPXO8Fww?si=UINrsVXY_9MHk4mi"),
    Exercise("Deadlift", "근력", "전신", 10, "전신을 사용하는 데드리프트 운동입니다. https://www.youtube.com/watch?v=1ZXobu7JvvE"),
    Exercise("Snatch", "근력", "전신", 8, "전신의 근력을 강화하는 스내치 운동입니다. https://www.youtube.com/watch?v=UBc5N_-xdqo"),

    // 가슴 운동 (근력)
    Exercise("Bench Press", "근력", "가슴", 12, "대흉근과 소흉근을 강화하는 벤치 프레스 운동입니다. https://youtu.be/gRVjAtPip0Y?si=O5rgUEW625t3Tg7n"),
    Exercise("Push-Up", "근력", "가슴", 15, "대흉근과 소흉근을 강화하는 푸쉬업입니다. https://youtu.be/_l3ySVKYVJ8?si=wqO_KZSICvM_EIYx"),
    Exercise("Chest Fly", "근력", "가슴", 12, "대흉근을 강화하는 체스트 플라이 운동입니다. https://youtu.be/Nhvz9EzdJ4U?si=QKdLX20qEP7lT9e_"),

    // 어깨 운동 (근력)
    Exercise("Shoulder Press", "근력", "어깨", 12, "삼각근을 강화하는 숄더 프레스 운동입니다. https://youtu.be/WvLMauqrnK8?si=xV6tgwvz_qNTxp3S"),
    Exercise("Lateral Raise", "근력", "어깨", 15, "삼각근 측면을 강화하는 레터럴 레이즈 운동입니다. https://youtu.be/OuG1smZTsQQ?si=XnUorUihAnUg4cfS"),
    Exercise("Face Pull", "근력", "어깨", 12, "삼각근 후면을 강화하는 페이스 풀 운동입니다. https://youtu.be/0Po47vvj9g4?si=bAHgnWrAjoUbQEL4"),

    // 팔 운동 (근력)
    Exercise("Barbell Curl", "근력", "팔", 12, "이두근을 강화하는 바벨 컬 운동입니다. https://youtu.be/N5x5M1x1Gd0?si=8I-Z70FkMXsn4prM"),
    Exercise("Triceps Extension", "근력", "팔", 12, "삼두근을 강화하는 트라이셉스 익스텐션 운동입니다. https://youtu.be/_JoblP7fggo?si=WJot1Uu1ZAz_BBUS"),
    Exercise("Dumbbell Curl", "근력", "팔", 12, "이두근을 강화하는 덤벨 컬 운동입니다. https://youtu.be/CFBZ4jN1CMI?si=k1oUFRgyc5pWpeTv"),

    // 등 운동 (근력)
    Exercise("Pull-Up", "근력", "등", 10, "광배근, 승모근, 능형근을 강화하는 풀업 운동입니다. https://youtu.be/aAggnpPyR6E?si=EHr6-aLQw2OpzxOM"),
    Exercise("Barbell Row", "근력", "등", 12, "광배근과 능형근을 강화하는 바벨 로우 운동입니다. https://youtu.be/bm0_q9bR_HA?si=148JX_od8WiJXdHq"),
    Exercise("Lat Pulldown", "근력", "등", 12, "광배근을 강화하는 랫 풀다운 운동입니다. https://youtu.be/NAIEnMjN-6w?si=-69OIig0X20GhB7T"),

    // 허벅지 운동 (근력)
    Exercise("Squat", "근력", "허벅지", 15, "대퇴사두근과 햄스트링을 강화하는 스쿼트 운동입니다. https://youtu.be/B86Zj72LwzA?si=r4bqSAdA9LKnZPA5"),
    Exercise("Lunge", "근력", "허벅지", 15, "대퇴사두근과 햄스트링을 강화하는 런지 운동입니다. https://youtu.be/tQNktxPkSeE?si=9GwbqZ048hwG_enb"),
    Exercise("Leg Press", "근력", "허벅지", 12, "대퇴사두근과 햄스트링을 강화하는 레그 프레스 운동입니다. https://youtu.be/yZmx_Ac3880?si=cZ8zRbwlGorh4qSW"),

    // 엉덩이 운동 (근력)
    Exercise("Hip Thrust", "근력", "엉덩이", 12, "대둔근, 중둔근, 소둔근을 강화하는 힙 쓰러스트 운동입니다. https://youtu.be/L1qG25DhAk4?si=S19evwgyboou_jdt"),
    Exercise("Glute Bridge", "근력", "엉덩이", 15, "둔근을 강화하는 글루트 브리지 운동입니다. https://youtu.be/OUgsJ8-Vi0E?si=82GOmaA0Dqi5fUUG"),

    // 종아리 운동 (근력)
    Exercise("Calf Raise", "근력", "종아리", 20, "비복근과 가자미근을 강화하는 카프 레이즈 운동입니다. https://youtu.be/c5Kv6-fnTj8?si=c-8IKdLrCI6RTKtr"),
    Exercise("Jump Squat", "근력", "종아리", 10, "비복근과 하체 근육을 강화하는 점프 스쿼트 운동입니다. https://youtu.be/BRfxI2Es2lE?si=Z7-j15f3DKZDYgr_"),

    // 코어 운동 (근력)
    Exercise("Plank", "근력", "코어", 3, "복근과 척추기립근을 강화하는 플랭크 운동입니다. https://youtu.be/pvIjsG5Svck?si=cdH4LPUuEZ0VUXOw"),
    Exercise("Leg Raise", "근력", "코어", 15, "복직근을 강화하는 레그 레이즈 운동입니다. https://youtu.be/U4L_6JEv9Jg?si=xQCPIYKFajYyuZHp"),
    Exercise("Crunch", "근력", "코어", 20, "복직근을 강화하는 크런치 운동입니다. https://youtu.be/NnVhqMQRvmM?si=z49SYHQasHVHIgJI"),
    Exercise("Russian Twist", "근력", "코어", 20, "복사근을 강화하는 러시안 트위스트 운동입니다. https://youtu.be/Tau0hsW8iR0?si=V9YyAtVmBUljyxrZ"),

    // 심폐 운동 (유산소)
    Exercise("Jogging", "유산소", "심폐", 30, "심폐 기능을 향상시키는 조깅 운동입니다. https://youtube.com/shorts/M9U9pk6yOIU?si=rEPlgrsYi5HF4BOF"),
    Exercise("Cycling", "유산소", "심폐", 20, "심폐 기능을 향상시키는 사이클링 운동입니다. https://youtu.be/4ssLDk1eX9w?si=F2VBpF_tWdFbBi7l"),
    Exercise("Rowing", "유산소", "심폐", 15, "심폐 기능을 향상시키는 로잉 운동입니다. https://youtu.be/fxfhQMbATCw?si=i6AoK7eEDmgrkRpZ"),
    Exercise("Swimming", "유산소", "심폐", 25, "심폐 기능을 향상시키는 수영 운동입니다. https://youtu.be/gnu4AnI2nqg?si=aqfUeP04P8u07yne"),

    // 기타 운동 
    Exercise("Neck Flexion", "유연성", "목", 5, "목 근육을 강화하는 넥 플렉션 운동입니다. https://youtu.be/6k9VQNN8B5U?si=-iloFrXa1Dum-sOh"),
    Exercise("Wrist Curl", "근력", "손목", 10, "손목 근육을 강화하는 손목 컬 운동입니다. https://youtu.be/3VLTzIrnb5g?si=cNrvWp0ThOkonef9"),
    Exercise("Forearm Grip Training", "근력", "전완", 10, "전완근을 강화하는 그립 트레이닝 운동입니다. https://youtu.be/MfMxT_jXcPE?si=i7_J8vYMsG5F7SN3")
};