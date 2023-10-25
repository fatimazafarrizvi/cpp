#include <iostream>
using namespace std;

//if 1<= n <=9, print the lowercase English word corresponding to the number; if n>9 print Greater than 9. complete kaeo

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    for (a; a <= b; a++) {
        if (a >= 1 && a <= 9)
            {
                switch (a)
                {
                    case 1:
                       cout << "one"<< endl;
                       break;
                    case 2:
                       cout << "two"<< endl;
                       break;
                    case 3:
                       cout << "three"<< endl;
                       break;
                    case 4:
                       cout << "four"<< endl;
                       break;
                    case 5:
                       cout << "five"<< endl;
                       break;
                    case 6:
                       cout << "six"<< endl;
                       break;
                    case 7:
                       cout << "seven"<< endl;
                       break;
                    case 8:
                       cout << "eight"<< endl;
                       break;
                    case 9:
                       cout << "nine"<< endl;
                       break;
                    default:
                        break;
                   }
               }
               else{
                    if(a%2 == 0){
                        cout << "even"<< endl;
                    }
                    else{
                        cout << "odd"<< endl;
                    }
               }
           }
 return 0;
}