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
		cout << "请输入" << x << "的左子树";
		bt->lchild = creat();
		cout << "请输入" << x << "的右子树";
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
	cout<<"本程序用于计算二叉树叶子结点个数问题"<<endl; 
	cout << "请输入二叉树的根:" ;
	BiTree<char>T;
	T.CountLeaf();
	cout << endl << "二叉树的叶子结点个数为：" <<count;
}


