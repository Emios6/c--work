#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<char> S;
    string C;
    cout << "����������ʵ�жϱ��ʽ����ƥ���������";
    cout<<endl; 
    cout << "��������Ҫ�����жϵı��ʽ: ";
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
			cout<<"ƥ��\n";
		}
        else if (!S.empty() && !flag)
			{
				cout << "��ƥ��: ��������" << S.top(); 	
			}
        else if (flag && S.empty()) 
			{
				cout << "��ƥ��: ��������" << C[i] ;
			}
        else if (flag==1 && !S.empty())
			{
				if(C[i]==')')     
				{
					cout<< "��ƥ��: " << S.top()<< "��" << C[i] << "ƥ�����";
				}
				else if(C[i]==']') 
				{
					cout<< "��ƥ��: " << S.top()<< "��" << C[i] << "ƥ�����";
				}
        	}
        cout << endl;
   
    return 0;
}
