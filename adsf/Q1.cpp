//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int a = 0;
//    int b = 0;
//    char ch;
//    ::cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;
//    while (cin >> ch) {
//        if (cin.eof())
//            break;
//        if (isupper(ch)) {
//            ::cout << "Check to a alphabet" << endl;
//            continue;
//        }
//        switch (ch)
//        {
//        case 'a':
//        case 'e':
//        case 'i':
//        case 'o':
//        case 'u':
//            a++;
//            break;
//        default:
//            b++;
//            break;
//        }
//    }
//    ::cout << "모음 : " << a << endl;
//    ::cout << "자음 : " << b << endl;
//    return 0;
//}