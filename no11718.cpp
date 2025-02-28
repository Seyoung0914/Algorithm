// 그대로 출력하기
// 시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
// 1 초	256 MB	274904	90087	75177	35.111%
// 문제
// 입력 받은 대로 출력하는 프로그램을 작성하시오.

// 입력
// 입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 각 줄은 100글자를 넘지 않으며, 빈 줄은 주어지지 않는다. 또, 각 줄은 공백으로 시작하지 않고, 공백으로 끝나지 않는다.

// 출력
// 입력받은 그대로 출력한다.

// 풀이 1
#include <iostream>

using namespace std;

int main()
{
    char input[101];
    while (cin.getline(input, 101))
    {

        cout << input << endl;
    }
    return 0;
}

// ✅ string을 사용한 더 안전한 방법
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;

    while (getline(cin, input))
    {
        cout << input << endl;
    }
    return 0;
}

// getline()에서 구분 문자 지정 (delimiter 사용)
// 기본적으로 getline()은 엔터(\n)를 만나면 입력을 끝냄.
// 하지만 특정한 구분 문자(예: , 또는 ;)를 사용할 수도 있어.

// 📌 특정 문자(예: ,)로 입력 구분하기

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string input;

//     cout << "Enter comma-separated values: ";
//     getline(cin, input, ','); // ','를 만나면 입력 종료

//     cout << "First part: " << input << endl;

//     return 0;
// }
// 📌 실행 예제

// Hello, World!

// First part: Hello
// ✅ ,(콤마)를 만나면 입력이 끝남.
// ✅ 남은 World!는 입력 버퍼에 남아 있음.
