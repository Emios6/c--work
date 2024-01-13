#include<iostream>
using namespace std;

typedef struct
{
	char ch[20];	
	int length;	
}String;

typedef struct
{
	char *base;
	int top;
	int stacksize;
}SqStack;

void InitSatck(SqStack&S,int m)
{
	S.base=new char[m];
	S.top=-1;
	S.stacksize=m;
}

void Push(SqStack&S,char m)
{
	S.top++;
	S.base[S.top]=m;
}

char Pop(SqStack&S,char &e)
{
	e=S.base[S.top];
	S.top--;
	return e;
}
char Stackempty(SqStack&S)
{
	if(S.top==-1)
		return 0;
	else 
		return 1;
}
char GetTop(SqStack&S,char &e)
{
	if(S.top==-1)
		return 0;
	e=S.base[S.top];
		return e;
}


int main()
{
	int n1,n2;
	int t;
	cout<<"������ʽ���ȣ�";
	cin>>n1;
	char arr[n1];
	cout<<"��������ʽ��";
	for(t=0;t<n1;t++)
	{
		cin>>arr[t];
	} 
	
	cout<<"������ջ�Ĵ�С��";
	cin>>n2; 
	SqStack C;
	InitSatck(C,n2);
	
	int n;
    string C;
    cout << "������ʽ��Ŀ: ";
    cin >> n;
    while (n--) 
	{
        stack<char> check;
        int flag = 0;
        cout << "������ʽ: ";
        cin >> C;
        int len = C.size();
        int i = 0;
        for (i = 0; i < len; i++)
		{
            if (C[i] == '(' || C[i] == '[' || C[i] == '{' || C[i] == '<') 
			{
                check.push(C[i]); flag = 0; 
            }
            else if (C[i] == ')' || C[i] == ']' || C[i] == '}' || C[i] == '>')
			{
                if (check.empty()) 
				{          
                    flag = 1; break;
                }
                else 
				{
                    if ((check.top() == '(' && C[i] == ')') || (check.top() == '[' && C[i] == ']') ||(check.top() == '{' && C[i] == '}') || (check.top() == '<' && C[i] == '>')) 
					{
                        flag = 0; check.pop();    
                    }
                    else
					{                         
                        flag = 1; break;
                    }
                }
            }
        }
        if (check.empty() && !flag) cout<<"ƥ��\n";
        else if (!check.empty() && !flag)cout << "��ƥ��: ��������" << check.top() << endl;
        else if (flag && check.empty()) cout << "��ƥ��: ��������" << C[i] << endl;
        else if (flag && !check.empty())
		{
			if(C[i]==')')      cout<< "��ƥ��: " << check.top()<< "��" << C[i] << "ƥ���\n";
			else if(C[i]==']') cout<< "��ƥ��: " << check.top()<< "��" << C[i] << "ƥ���\n";
			else if(C[i]=='}') cout<< "��ƥ��: " << check.top()<< "��" << C[i] << "ƥ���\n";
			else if(C[i]=='>') cout<< "��ƥ��: " << check.top()<< "��" << C[i] << "ƥ���\n";
        }
        cout << endl;
    }
	
	
}

