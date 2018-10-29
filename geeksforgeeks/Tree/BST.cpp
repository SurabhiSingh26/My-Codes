
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int d = 0)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};

Node *insert(Node *root, int data)
{
	if(root == NULL)
	{
		return new Node(data);
	}
	
	if(data>=root->data)
	{
		root->right = insert(root->right,data);
	}
	else
	{
		root->left = insert(root->left, data);
	}
	return root;
}

void inorder(Node *root)
{
	if(root == NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ,";
	inorder(root->right);
	
}

int main()
{
	Node *root = NULL;
	int data;
	for(int i =0; i<5; i++)
	{
		cin>>data;
		root = insert(root,data);
	}
	inorder(root);
}
