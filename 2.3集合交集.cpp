#include <iostream>
using namespace std;
 
typedef struct LNode
{
	char data;
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
	cout<<"����������"<<n<<"��Ԫ��ֵ��";
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
		cout<<p->data;
		p=p->next;
		i++;
	}
	
}
int GetElem(LinkList&L,int n)
{
	LNode*p;
	p=L->next;
	int j=1;
	while(p&&j<n)
	{
		p=p->next;
		j++;
	}
	return p->data;
}
int Locate(LinkList&L,char n)
{
	int j=1;
	LNode*p;
	p=L->next;
	while(p&&p->data!=n)
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
		return 0;
	else 
		return j;
}
void Delete(LinkList&L,int i)
{
	LNode *p,*q;
	p=L;
	int j=0;
	while(p->next &&j<i-1)
	{
		p=p->next;
		j++;
	}
	q=p->next ;
	p->next=q->next ;
	delete q;
}
void Destroy(LinkList&L) 
{
	LNode*p;
	while(L)
	{
		p=L;
		L=L->next;
		delete p;
	}
	L=NULL;
}
int main()
{
	int A_len,B_len;	
	char x1;
	int  x2;
	LinkList A;
	LinkList B;
	InitList(A);
	InitList(B);
	
	cout<<"����������ʵ�������ַ��ͼ����󽻼�������"<<endl; 
	cout<<"������A���ϵ�Ԫ�ظ�����";
	cin>>A_len;
	CreateList(A,A_len);
	
	cout<<"������B���ϵ�Ԫ�ظ�����";
	cin>>B_len;
	CreateList(B,B_len);
	
	cout<<endl;
	cout<<"����AΪ��{";Display(A);cout<<"}"<<endl;
	cout<<"����BΪ��{";Display(B);cout<<"}"<<endl;
	
	if(A_len==0)
		{	cout<<"������{"; Display(B);cout<<"}";}
	else if(B_len==0)
		{	cout<<"������{"; Display(A);cout<<"}";}
	else if(A_len!=0&&B_len!=0)
	{
		for(int t=0;t<A_len;t++)
 		{
			x1=GetElem(A,t);
			x2=Locate(B,x1);
			if(x2==0) Delete(A,t);
		}
		cout<<"����Ϊ:{"; Display(A);cout<<"}";
		Destroy(B);
	}
	return 0;
}
