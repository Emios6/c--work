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
	cout<<"请依次输入"<<n<<"个元素值："<<endl;
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
	cout<<"本程序用于实现直接插入排序"<<endl; 
	cout<<"请输入需要排序序列的元素个数：";
	cin>>len;
	if(len==0)
	{
		cout<<"待排序的序列为空。"; 
	}
	
	else
	{
		CreateList(L,len);
		cout<<"待排序的序列为：";
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
		cout<<"排序后的序列为："; 
		Display(L);
	}
}
