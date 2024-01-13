#include<iostream>
using namespace std;
 
typedef struct LNode
{
	int data;
	struct LNode *next;
}LNode,*LinkList;

void InitList(LinkList &L)
{
	L=new LNode;
	L->next=NULL; 
	
}
 
void CreateList(LinkList &L,int n)
{
	LNode*p,*s;
	p=L;
	cout<<"����������"<<n<<"��Ԫ��ֵ��"<<endl;
	for(int i=1;i<=n;i++)
	{
		s=new LNode;
		cin>>s->data;
		s->next=p->next;
		p->next=s;
		p=s;
	} 
}
 
void Display(LinkList &L)
{
	LNode*p;
	p=L->next ;
	int i=1;
	while(p)
	{
		cout<<p->data<<'\t';
		p=p->next;
		i++;
	}
	
}

int main()
{
	LNode*p,*q,*r,*s;
	int len; 
	LinkList L;
	InitList(L);
	cout<<"����������ʵ��ֱ�Ӳ�������"<<endl; 
	cout<<"��������Ҫ�������е�Ԫ�ظ�����";
	cin>>len;
	if(len==0)
	{
		cout<<"�����������Ϊ�ա�"; 
	}
	
	else
	{
		CreateList(L,len);
		cout<<"�����������Ϊ��";
		Display(L);
		p=L;
		q=L->next;
		r=q->next;
		q->next=NULL;
		while(r)
		{
			s=r->next;
			while(q&&q->data<=r->data)
			{
				p=q;
				q=q->next;
			}
			r->next=q;
			p->next=r;
			r=s;
			p=L;
			q=p->next;
		}
		cout<<endl; 
		cout<<"����������Ϊ��"; 
		Display(L);
	}
}
