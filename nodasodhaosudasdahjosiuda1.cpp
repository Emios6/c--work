#include <iostream>
#include <string>
#include <cstdio>
#include <stack>
using namespace std;

int main()
{
    int n;
    string ch;
    cout << "输入表达式数目: ";
    cin >> n;
    while (n--) {
        stack<char> check;
        int flag = 0;
        cout << "输入表达式: ";
        cin >> ch;
        int len = ch.size();
        int i = 0;
        for (i = 0; i < len; i++) {
            //"("、")"、"["、"]"、"{"、"}"、"<"、">"
            if (ch[i] == '(' || ch[i] == '[' || ch[i] == '{' || ch[i] == '<') {
                check.push(ch[i]); flag = 0; //左括号直接进栈
            }
            else if (ch[i] == ')' || ch[i] == ']' || ch[i] == '}' || ch[i] == '>') {
                if (check.empty()) {          //遇到右括号时,栈顶为空则为不匹配
                    flag = 1; break;
                }
                else {
                    if ((check.top() == '(' && ch[i] == ')') || (check.top() == '[' && ch[i] == ']') ||
                        (check.top() == '{' && ch[i] == '}') || (check.top() == '<' && ch[i] == '>')) {
                        flag = 0; check.pop();     //出栈左括号,继续判断
                    }
                    else {                         //如果左右不匹配,则退出判断
                        flag = 1; break;
                    }
                }
            }
        }
        if (check.empty() && !flag) { //如果栈为空,且没有右括号出现--匹配
            printf("匹配\n");
        }
        else if (!check.empty() && !flag){
            cout << "不匹配: 多左括号" << check.top() << endl;
        }
        else if (flag && check.empty()) {
            cout << "不匹配: 多右括号" << ch[i] << endl;
        }
        else if (flag && !check.empty()) {
            switch(ch[i]) {
                case ')' : cout << "不匹配: " << check.top()
                                << "与" << ch[i] << "匹配错\n"; break;
                case ']' : cout << "不匹配: " << check.top()
                                << "与" << ch[i] << "匹配错\n"; break;
                case '}' : cout << "不匹配: " << check.top()
                                << "与" << ch[i] << "匹配错\n"; break;
                case '>' : cout << "不匹配: " << check.top()
                                << "与" << ch[i] << "匹配错\n"; break;
                default : cout << "不匹配\n"; break;
            }
        }
        cout << endl;
    }
    return 0;
}
