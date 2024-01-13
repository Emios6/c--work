#include<iostream>
using namespace std;
int count= 0;

template<class T>
struct BiTNode
{
	T data;
	BiTNode<T>* lchild, * rchild;
};

template<class T>
class BiTree
{
	private:
		BiTNode<T>* root;
		BiTNode<T>* creat();
		void CountLeaf(BiTNode<T>* bt);
	public:
		BiTree() { root = creat(); }
		void CountLeaf() {CountLeaf(root); }
};

template<class T>
BiTNode<T>*BiTree<T>::creat()
{
	BiTNode<T>*bt;
	char x;
	cin >> x;
	if (x == '#')bt = NULL;
	else 
	{
		bt = new BiTNode<T>;
		bt->data = x;
		cout << "������" << x << "��������";
		bt->lchild = creat();
		cout << "������" << x << "��������";
		bt->rchild = creat();
	}
	return bt;
}

template<class T>
void BiTree<T>::CountLeaf(BiTNode<T>* bt)
{
	
	if (bt == NULL) return;		
	else 
	{
		if (bt->lchild==NULL && bt->rchild==NULL) 
		count++;
		CountLeaf(bt->lchild);
		CountLeaf(bt->rchild);
	}
}
int main()
{
	cout<<"���������ڼ��������Ҷ�ӽ���������"<<endl; 
	cout << "������������ĸ�:" ;
	BiTree<char>T;
	T.CountLeaf();
	cout << endl << "��������Ҷ�ӽ�����Ϊ��" <<count;
}


