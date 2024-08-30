#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
double num1 = 0;
char op = 'p';
double num2 = 0;
string history = "";
void historyAdd(string addition){
    history = history+addition;
}
int main(void){
    cout << "I'm sorry you have to do math, can I help you?" << endl;
    while (true){
    cout << "Enter equation";
    cin >> num1 >> op >> num2;
    if(op != 'h'){history = history + to_string(num1) + op + to_string(num2) + "\n";}
    switch(op){
        case '+':
            cout << num1 + num2;
            historyAdd(to_string(num1+num2) + "\n");
            break;
        case '*':
            cout << num1 * num2;
           historyAdd(to_string(num1*num2)+ "\n");
            break;
        case '-':
            cout << num1 - num2;
            historyAdd(to_string(num1-num2)+ "\n");
            break;
        case '^':
            cout << pow(num1, num2);
            historyAdd(to_string(pow(num1,num2))+ "\n");
            break;
        case '/':
            cout << num1/num2;
            historyAdd(to_string(num1/num2)+ "\n");
            break;
        case 'r':
            cout << pow(num1, (1/num2));
            historyAdd(to_string(pow(num1, (1/num2)))+ "\n");
            break;
        case 'h':
            cout << history;
            break;
    }
    cout << endl;
    }
    return 0;
}
