#include <iostream>

using namespace std;

int main(){
    int input, small, big;
    int temp;
    int one, ten, hund;
    cout << "enter the number!  ";
    cin >> input;
    temp = input;
    one = input % 10;
    ten = ((input % 100) - one) /10;
    hund = input /100;

    if(one != 1 and one != 4 and one != 7 and ten != 1 and ten != 4 and ten != 7 and hund != 1 and hund != 4 and hund != 7){
        cout << input;
    }
    else{
        while(1){
            temp--;
            one = temp % 10;
            ten = ((temp % 100) - one) /10;
            hund = temp /100;
            if(one != 1 and one != 4 and one != 7 and ten != 1 and ten != 4 and ten != 7 and hund != 1 and hund != 4 and hund != 7){
                small = temp;
                break;
            }

        }
        temp = input;
        while(1){
            temp++;
            one = temp % 10;
            ten = ((temp % 100) - one) /10;
            hund = temp /100;
            if(one != 1 and one != 4 and one != 7 and ten != 1 and ten != 4 and ten != 7 and hund != 1 and hund != 4 and hund != 7){
                big = temp;
                break;
            }

        }
    cout << small << " " << big;
    }
    return 0;
}
