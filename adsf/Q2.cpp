//#include <iostream>
//#include<random>
//using namespace std;
//
//int main() {
//    char c;
//    int result = 0;
//    int answer;
//    cout << "��� ������ �ڵ����� �����մϴ�." << endl;
//    std::random_device rd;
//    std::mt19937 a(rd());
//    std::mt19937 b(rd());
//    std::uniform_int_distribution<int> dis(0, 10);
//    int aa = dis(a);
//    int bb = dis(b);
//    cout << aa << " ";
//    cout << bb << endl;
//    cout << "������ �Է��ϱ�(+,-,*,/)" << endl;
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
//    cout << "��� �Է��ϱ�" << endl;
//    cin >> answer;
//    if (result == answer)
//        cout << "�¾ҽ��ϴ�" << endl;
//    else
//        cout << "Ʋ�Ƚ��ϴ�" << endl;
//}