#include<iostream>
using namespace std;
struct Node
{
	char data;
	char *next;
}
int LinkList()
{
	Head=new Node<char>;
	Head->next=NULL;
}
int Delete(int i)
{
	int x;
	char *p,*q;
	p=Head;
	int j=0;
	while(p->next&&j<i-1)
	{
		p=p->next;
		j++; 
	}
	if(!p->next||j>i-1)
		cout<<"Òì³£";
	else
	{
		q=p->next;
		p->next=q->next;
		x=q->data;
		delete q;
		return x;
	}
}
int Locate(int )
