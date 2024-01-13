#include <iostream>
using namespace std;
 
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;
 
void InitList(LinkList &L)
{
	L=new LNode;
	L->next=NULL; 
	return;
}
 
void CreateList_R(LinkList &L,int n)
{
	int i; 
	LinkList r=L;
	LinkList p; 
	
	for(i=0;i<n;i++)
	{
		p=new LNode;
		int data;
		cin>>data;
		p->data=data;
		p->next=NULL;
		r->next=p;
		r=p; 
	}
	return;
}
 
void Show(LinkList &L)
{
	LinkList p=L->next;
	while(p){
		cout<<p->data;
		if(p->next) cout<<" ";
		p=p->next;
	}
	cout<<endl;
	return;
}
 
void Create2List(LinkList &A,LinkList &B,int n,int m)
{
		CreateList_R(A,n);
		CreateList_R(B,m);
		return;
}
 
void Same(LinkList &A,LinkList &B)
{
	LinkList pc=A,pa=A->next,pb=B->next;
	while(pa&&pb)
	{
		//比较操作 
		if(pa->data==pb->data)
		{
			pc->next=pa; 
			pc=pa;
			
			if(pb->next==NULL||pa->next==NULL)
			{
				//cout<<"!!!!!!!!!!!!!!!!!!"<<endl; 
				pc->next=NULL;//移动到循环外才能Accept，不知道为什么 
				break;//！ 
			}//这一块可以不要 
				
			//后移操作：	
			pa=pa->next;
			pb=pb->next;
		}
		else if(pa->data > pb->data) pb=pb->next;
				else if(pa->data < pb->data) pa=pa->next;
		
	}
	//cout<<pc->next;
	//赋值，使A截断 
	pc->next=NULL;//key 
	delete B;
	return;
}
 
void Interaction(LinkList &a,LinkList &b,LinkList &c){
	LinkList pa,pb,pc,t;
	pc=a;
	for(pa=a->next;pa;pa=pa->next){
		for(pb=b->next;pb;pb=pb->next){
			if(pb->data==pa->data){
				pc->next=pa;
				pc=pa;
				break;
			}
		}
	}
	pc->next=NULL; 
	delete b;
	c=a;
	return;
}
 
 
int main()
{
	int n,m;	
	LinkList A,B,C;
	cin>>n>>m;
	while(n!=0&&m!=0)
	{
	
		InitList(A);
		InitList(B);
		Create2List(A,B,n,m);
		//Interaction(A,B,C);
		//cout<<1<<endl;
		Same(A,B);
		Show(A); 
		cin>>n>>m;
	}
	return 0;
}
