# include <iostream>
using namespace std;

int main() {
    cout << "\nWelcome to my calculator project on C++\n\nprogrammed by @ysr075 on GitHub";
    while(1) {
        int choose;
        cout << "\n\n1.add / 2.substract / 3.multiply / 4.divide: ";
        cin >> choose;
        if (choose == 1) {
            float num1;
            cout << "\nnum1: ";
            cin >> num1;
            float num2;
            cout << "num2: ";
            cin >> num2;
            float total = num1 + num2;
            cout << "\nresult is ", cout << total;
        } else if (choose == 2) {
            float num1;
            cout << "\nnum1: ";
            cin >> num1;
            float num2;
            cout << "num2: ";
            cin >> num2;
            float total = num1 - num2;
            cout << "\nresult is ", cout << total;
        } else if (choose == 3) {
            float num1;
            cout << "\nnum1: ";
            cin >> num1;
            float num2;
            cout << "num2: ";
            cin >> num2;
            float total = num1 * num2;
            cout << "\nresult is ", cout << total;
        } else if (choose == 4) {
            float num1;
            cout << "\nnum1: ";
            cin >> num1;
            float num2;
            cout << "num2: ";
            cin >> num2;
            float total = num1 / num2;
            cout << "\nresult is ", cout << total;
        } else {
            break;
        }
    }
return 0;
}
