#include "std_lib_facilities.h"

int main() 
{
    //변수
    string first_name;
    string friend_name;
    char friend_sex;
    int age;
    string your_sign;

    //받을사람의 이름
    cout << "편지를 받을 사람의 이름을 입력하세요 : ";
    cin >> first_name;
    cout << "\n친애하는 " << first_name << ", \n";

    //추가로 하고싶은말
    cout << "잘 지내시죠?\n저는 잘 지냅니다. 보고 싶네요.\n"
        << "다음에 밥 한끼라도 같이 먹어요 ㅎㅎ\n\n";
    
    //다른친구
    cout << "다른 친구의 이름을 적으세요. : ";
    cin >> friend_name;
    cout << "\n요즘 " << friend_name << "씨를 만난 적 있으신가요?\n\n";
    
    //성별
    cout << "친구가 남자면 m, 여자면 f를 입력하세요 : ";
    cin >> friend_sex;
    if (friend_sex == 'm')
        cout << '\n' << friend_name << "을 보시거든 그에게 저한테 전화해달라고 전해주세요.";
    if (friend_sex == 'f')
        cout << '\n' << friend_name << "을 보시거든 그녀에게 저한테 전화해달라고 전해주세요.";

    //편지를 받을 사람의 나이
    cout << "\n편지를 받을 사람의 나이를 입력해주세요 : ";
    cin >> age;
    if (age <= 0)
        simple_error("\n장난치지 마세요!");
    if(age >= 100)
        simple_error("\n장난치지 마세요!");
    cout << "\n\n얼마 전에 " << age << "번째 생일을 맞으셨단 얘기를 들었어요.\n";

    //편지 내용 추가
    if (age < 12)
        cout << "내년에는 " << age + 1 << "살이 되겠군요.\n";
    if (age == 17)
        cout << "내년에는 투표를 할 수 있겠네요.\n";
    if (age > 70)
        cout << "은퇴후를 잘 즐기고 계시지요?\n";

    //서명
    cout << "당신의 친구, ";
    cin >> your_sign;
}