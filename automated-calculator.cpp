//AN AI CALCULATOR DEVELOPED BY ME KINGSLEY
#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::getline;

void player();
void computer(double *num1, double *num2);

int main(){
    char yON;
    do{
    player();
    cout << "Do you want to continue type Y or to quit type any other character except Y\n";
    cin >> yON;
    yON = toupper(yON);
    }while(yON == 'Y');
    system("pause");
}
void player(){
    double num1;
    double num2;
    cout << "------------------------\n";
    cout << "An AI based Calculator\n";
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    computer(&num1, &num2);
    cin.clear();
    fflush(stdin);
    cout << "------------------------\n";
}
void computer(double *num1, double *num2){
    srand(time(NULL));
    int random = (rand() % 5) + 1;
    double result;

    switch(random){
    case 1:
        cout << "AI enter a maths Operator (+, -, *, /, %): ";
        cout << '+' << endl;
        result = *num1 + *num2;
        cout << "Result printed out by AI:  " <<  result << endl;
        break;
    case 2:
        cout << "AI enter a maths Operator (+, -, *, /, %): ";
        cout << '-' << endl;
        result = *num1 - *num2;
        cout << "Result printed out by AI:  " <<  result << endl;
        break;
    case 3:
        cout << "AI enter a maths Operator (+, -, *,  /, %): ";
        cout << '*' << endl;
        result = *num1 * *num2;
        cout << "Result printed out by AI:  " <<  result << endl;
        break;
    case 4:
        cout << "AI enter a maths Operator (+, -, *, /, %): ";
        cout << '/' << endl;
        result = *num1 / *num2;
        cout << "Result printed out by AI:  " <<  result << endl;
        break;
    case 5:
        cout << "AI enter a maths Operator (+, -, *, /, %): ";
        cout << '%' << endl;
        result = (int)*num1 % (int)*num2;
        cout << "Result printed out by AI:  " <<  (int)result << endl;
        break;
    default:
        cout << "Opps Something is wrong\n";
    }
}
