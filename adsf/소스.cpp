#include <iostream>
#include <ctime>
#include<random>
#include<cstdlib>
#include<time.h>
using namespace std;
// 우진식 화이팅
/*int main(void) {
   int a = 0; //모음
   int b = 0; //자음
   char ch;
   ::cout << "영문자를 입력하고 ctrl+z를 치세요" << endl;
   while (cin >> ch) {
      if (cin.eof()) //ctrl+z 사용시 종료
         break;
      if (isupper(ch)) { //isupper == 대문자 판별 , islower==소문자 판별
         ::cout << "Check to a alphabet" << endl;
         continue;
      }
      switch (ch)
      {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
         a++;
         break;
      default:
         b++;
         break;
      }
   }
   ::cout << "모음 : " << a << endl;
   ::cout << "자음 : " << b << endl;
   return 0;
}*/

/*int main() {
   char c;
   int result = 0;
   int answer;
   cout << "산수 문제를 자동으로 출제합니다." << endl;
   std::random_device rd;
   std::mt19937 a(rd());
   std::mt19937 b(rd());
   std::uniform_int_distribution<int> dis(0, 10);
   int aa = dis(a);
   int bb = dis(b);
      cout << aa<<" ";
      cout << bb << endl;
   cout << "연산자 입력하기(+,-,*,/)" << endl;
   cin >> c;
   switch (c) {
   case '+':
      result = aa + bb;
      break;
   case '-':
      result = aa - bb;
      break;
   case '*':
      result = aa * bb;
      break;
   case '/':
      result = aa / bb;
      break;
   }
   cout << "결과 입력하기" <<endl;
   cin >> answer;
   if (result == answer)
      cout << "맞았습니다" << endl;
   else
      cout << "틀렸습니다" << endl;
}*/

/*int main() {
   int n, m;
   int sum = 0;
   cin >> n >> m;
   cout << "N 값은 " << n<<", M 값은 "<<m<< endl;
   for (int a = 1; a <= n; a++) {
      if (a % m == 0)
         sum += a;
   }
   cout << sum << endl;
}*/

/*int main() {
   int a,sum=0;
   int s=1;
   cin >> a;
   for (int x = 1; x <a; x++) {
      if (x == 1) {
         cout << x;
         sum += 1;
      }
      if ((a % x == 0)&&(x>=2)) {
         cout <<" + "<<x;
         sum += x;
      }
   }
   cout << " = " << sum;

}*/

/*int main() {
   char board[3][3];
   int x, y, k, i;
   for (x = 0; x < 3; x++) {
      for (y = 0; y < 3; y++)
         board[x][y] = ' ';
   }
   for (k = 0; k < 9; k++) {
      cout << "(x,y) 좌표: ";
      cin >> x >> y;
      board[x][y] = (k % 2 == 0) ? 'X' : 'O';
      for (i = 0; i < 3; i++) {
         cout << "---l---l---" << endl;
         cout << board[i][0] << "  l  " << board[i][1] << "l" << board[i][2] << endl;
      }
      cout << "---l---l---" << endl;
   }
}*/

int main() {

    bool board[10][10] = { 0 };
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if ((rand() % 100) < 30)
                board[i][j] = true;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            if (board[i][j])
                cout << "# ";
            else
                cout << ". ";
        cout << endl;
    }
}