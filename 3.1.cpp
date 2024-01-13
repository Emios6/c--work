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
	cout<<"输入表达式长度：";
	cin>>n1;
	char arr[n1];
	cout<<"请输入表达式：";
	for(t=0;t<n1;t++)
	{
		cin>>arr[t];
	} 
	
	cout<<"请输入栈的大小：";
	cin>>n2; 
	SqStack C;
	InitSatck(C,n2);
	
	int n;
    string C;
    cout << "输入表达式数目: ";
    cin >> n;
    while (n--) 
	{
        stack<char> check;
        int flag = 0;
        cout << "输入表达式: ";
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
        if (check.empty() && !flag) cout<<"匹配\n";
        else if (!check.empty() && !flag)cout << "不匹配: 多左括号" << check.top() << endl;
        else if (flag && check.empty()) cout << "不匹配: 多右括号" << C[i] << endl;
        else if (flag && !check.empty())
		{
			if(C[i]==')')      cout<< "不匹配: " << check.top()<< "与" << C[i] << "匹配错\n";
			else if(C[i]==']') cout<< "不匹配: " << check.top()<< "与" << C[i] << "匹配错\n";
			else if(C[i]=='}') cout<< "不匹配: " << check.top()<< "与" << C[i] << "匹配错\n";
			else if(C[i]=='>') cout<< "不匹配: " << check.top()<< "与" << C[i] << "匹配错\n";
        }
        cout << endl;
    }
	
	
}

