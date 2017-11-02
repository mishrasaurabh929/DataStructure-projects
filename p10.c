#include<stdio.h>
#include<stdlib.h>
struct TREE
{
	int data;
	struct TREE *left,*right;
};
typedef struct TREE *tree;
tree create()
{
	tree node;
	node=(tree)malloc((sizeof(struct TREE)));
	if(node==NULL)
	{
		printf("memory is not allocated\n");
		return node;
	}
	return node;
}
tree createbst(tree root)
{
	tree node,prev,cur;
	node=create();
	printf("enter the data of the tree\n");
	scanf("%d",&node->data);
	node->left=NULL;
	node->right=NULL;
	if(root==NULL)
	{
		root=node;
		return(root);
	}
	prev=NULL;
	cur=root;
	while(cur!=NULL)
	{	
		prev=cur;
		if(node->data<cur->data)
			cur=cur->left;
		else
			cur=cur->right;
	}
		if(node->data<prev->data)
			prev->left=node;
		else
			prev->right=node;
			
		return(root);
}
void inorder(tree root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("%3d\n",root->data);
	inorder(root->right);
}
void preorder(tree root)
{
	if(root==NULL)
	{
		return;
	}
	printf("%3d\n",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(tree root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("%3d\n",root->data);
}
void search(tree root)
{
	int flag=0,key;
	tree temp;
	printf("enter the key value\n");
	scanf("%d",&key);
	if(root==NULL)
		return;
	temp=root;
	while(temp!=NULL)
	{	
		if(key==temp->data)
		{
			flag=1;
			break;
		}
		else if(key<temp->data)
		{
			temp=temp->left;
		}
		else
		{
			temp=temp->right;
		}
	}
	if(flag==1)
	{
		printf("key element found\n");
	}
	else
	{	
		printf("key not found\n");
	}
}
int main()
{
	int ch,n,i;
	tree root=NULL;
	for(;;)
	{
		printf("Binary search operations are :\n");
		printf("1.create\n2.inorder traversal\n3.preorder\n4.postorder\n5.search\n6.exit\nenter you choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter the number of integers\n");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					root=createbst(root);
				}
				break;
			case 2: inorder(root);
				break;
			case 3: preorder(root);
				break;
			case 4: postorder(root);
				break;
			case 5: search(root);
				break;
			case 6: return(0);
		}
	}
}	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
		
		
		
		
		
		
		
		
		
		
		
		

