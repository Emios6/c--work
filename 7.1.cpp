#include<iostream>
using namespace std;
int count=0;

template<class T>
struct BTNode
{
	T data;
	BTNode<T>*lchild,*rchild; 
};

template<class T>
class BinaryTree
{
	BTNode<T>*BT;
	public:
		BinaryTree(){BT=NULL;};
		void CreateBiTree(T end);
		void CountLeaf(BTNode<T> *root);
		void DisplayBTreeshape(BTNode<T>*bt,int level=1);
		BTNode<T>*GetRoot();
};

template<class T>
void BinaryTree<T>::CreateBiTree(T end)
{
	cout<<"请按先序顺序输入二叉树，-1为空指针域标志："<<endl;
	BTNode<T> *p;
	T x;
	cin>>x;
	if(x==end) return;
	p=new BTNode<T>;
	
	p->data=x;
	p->lchild =NULL;
	p->rchild =NULL;
	BT=p;
	create(p,1,end);
	create(p,2,end);
}

template<class T>
static int create(BTNode<T>*p,int k,T end)
{
	BTNode<T> *q;
	T x;
	cin>>x;
	if(x!=end)
	{
		q=new BTNode<T>;
		q->data =x;
		q->lchild =NULL;
		q->rchild =NULL;
		if(k==1) p->lchild=q;
		if(k==2) p->rchild=q;
		create(q,1,end);
		create(q,2,end);
	}
}
template<class T>
void BinaryTree<T>::CountLeaf(BTNode<T> *root)
{
	if(root!=NULL)
	{
		if(root->lchild==NULL&&root->rchild==NULL)
		count++;
		CountLeaf(root->lchild,count);
		CountLeaf(root->rchild,count);	
	}
	
} 

template<class T>
void BinaryTree<T>::DisplayBTreeshape(BTNode<T>*bt,int level)
{
	if(bt)
	{
		DisplayBTreeshape(bt->rchild,level+1);
		cout<<endl;
		for(int i=0;i<level-1;i++)
			cout<<" ";
		cout<<bt->data;
		DisplayBTreeshape(bt->lchild,level+1);
	}
}

template<class T>
BTNode<T>*BinaryTree<T>::GetRoot()
{
	return BT;
}
int main()
{
	BinaryTree<char>Tree;
	Tree.CreateBiTree(-1); 
	cout<<"下面显示的是一棵左转了90度的树！"<<endl;
	Tree.DisplayBTreeshape(Tree.GetRoot() );
	cout<<endl;
	cout<<"二叉树有"<<Tree.CountLeaf()<<"个叶节点。";
	cout<<endl;
	return 0;  
}
