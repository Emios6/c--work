#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<char> S;
    string C;
    cout << "本程序用于实判断表达式括号匹配配对问题";
    cout<<endl; 
    cout << "请输入需要进行判断的表达式: ";
    cin >> C;
    int len = C.size();
    int i = 0,flag = 0;
    for (i = 0; i < len; i++)
		{
            if (C[i] == '(' || C[i] == '[' ) 
				{
               		S.push(C[i]);
					flag = 0; 
            	}
            else if(C[i] == ')' || C[i] == ']' )
				{
                	if (S.empty()) 
						{          
                    		flag = 1; break; 
                		}
                	else 
					{
                    	if ((S.top() == '(' && C[i] == ')') || (S.top() == '[' && C[i] == ']')) 
							{
                        		flag = 0;
								S.pop();    
                    		}
                    	else
							{                         
                       			flag = 1; break;
                    		}
                	}
           		}
        }
        if (S.empty() && !flag) 
		{
			cout<<"匹配\n";
		}
        else if (!S.empty() && !flag)
			{
				cout << "不匹配: 多左括号" << S.top(); 	
			}
        else if (flag && S.empty()) 
			{
				cout << "不匹配: 多右括号" << C[i] ;
			}
        else if (flag==1 && !S.empty())
			{
				if(C[i]==')')     
				{
					cout<< "不匹配: " << S.top()<< "与" << C[i] << "匹配出错";
				}
				else if(C[i]==']') 
				{
					cout<< "不匹配: " << S.top()<< "与" << C[i] << "匹配出错";
				}
        	}
        cout << endl;
   
    return 0;
}
