#include <iostream>
#include <string>
#include <cstdio>
#include <stack>
using namespace std;

int main()
{
    int n;
    string ch;
    cout << "������ʽ��Ŀ: ";
    cin >> n;
    while (n--) {
        stack<char> check;
        int flag = 0;
        cout << "������ʽ: ";
        cin >> ch;
        int len = ch.size();
        int i = 0;
        for (i = 0; i < len; i++) {
            //"("��")"��"["��"]"��"{"��"}"��"<"��">"
            if (ch[i] == '(' || ch[i] == '[' || ch[i] == '{' || ch[i] == '<') {
                check.push(ch[i]); flag = 0; //������ֱ�ӽ�ջ
            }
            else if (ch[i] == ')' || ch[i] == ']' || ch[i] == '}' || ch[i] == '>') {
                if (check.empty()) {          //����������ʱ,ջ��Ϊ����Ϊ��ƥ��
                    flag = 1; break;
                }
                else {
                    if ((check.top() == '(' && ch[i] == ')') || (check.top() == '[' && ch[i] == ']') ||
                        (check.top() == '{' && ch[i] == '}') || (check.top() == '<' && ch[i] == '>')) {
                        flag = 0; check.pop();     //��ջ������,�����ж�
                    }
                    else {                         //������Ҳ�ƥ��,���˳��ж�
                        flag = 1; break;
                    }
                }
            }
        }
        if (check.empty() && !flag) { //���ջΪ��,��û�������ų���--ƥ��
            printf("ƥ��\n");
        }
        else if (!check.empty() && !flag){
            cout << "��ƥ��: ��������" << check.top() << endl;
        }
        else if (flag && check.empty()) {
            cout << "��ƥ��: ��������" << ch[i] << endl;
        }
        else if (flag && !check.empty()) {
            switch(ch[i]) {
                case ')' : cout << "��ƥ��: " << check.top()
                                << "��" << ch[i] << "ƥ���\n"; break;
                case ']' : cout << "��ƥ��: " << check.top()
                                << "��" << ch[i] << "ƥ���\n"; break;
                case '}' : cout << "��ƥ��: " << check.top()
                                << "��" << ch[i] << "ƥ���\n"; break;
                case '>' : cout << "��ƥ��: " << check.top()
                                << "��" << ch[i] << "ƥ���\n"; break;
                default : cout << "��ƥ��\n"; break;
            }
        }
        cout << endl;
    }
    return 0;
}
