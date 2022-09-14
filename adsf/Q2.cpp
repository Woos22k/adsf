//#include <iostream>
//#include<random>
//using namespace std;
//
//int main() {
//    char c;
//    int result = 0;
//    int answer;
//    cout << "산수 문제를 자동으로 출제합니다." << endl;
//    std::random_device rd;
//    std::mt19937 a(rd());
//    std::mt19937 b(rd());
//    std::uniform_int_distribution<int> dis(0, 10);
//    int aa = dis(a);
//    int bb = dis(b);
//    cout << aa << " ";
//    cout << bb << endl;
//    cout << "연산자 입력하기(+,-,*,/)" << endl;
//    cin >> c;
//    switch (c) {
//    case '+':
//        result = aa + bb;
//        break;
//    case '-':
//        result = aa - bb;
//        break;
//    case '*':
//        result = aa * bb;
//        break;
//    case '/':
//        result = aa / bb;
//        break;
//    }
//    cout << "결과 입력하기" << endl;
//    cin >> answer;
//    if (result == answer)
//        cout << "맞았습니다" << endl;
//    else
//        cout << "틀렸습니다" << endl;
//}