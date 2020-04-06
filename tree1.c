/*  Postorder traversal in a binary tree By
    Name: GOVIND KUMAR
    Roll No: 11912057
    Branch: I.T.
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
};
struct node *create()
{
  int num;
  struct node *new_node;
  new_node=(struct node *)malloc(sizeof(struct node));
  printf("Enter data(Enter -1 for no node)\n");
  scanf("%d",&num);
  if (num==-1)
  {
  	return NULL;
  }
  new_node->data=num;
  printf("Enter left child data for node %d\n",num);
  new_node->lchild=create();
  printf("Enter right child data for node %d\n",num);
  new_node->rchild=create();
  return new_node;
}
void postorder(struct node *root)
{
	if (root==NULL)
	{
		return;
	}
	postorder(root->lchild);
	postorder(root->rchild );
    printf("%d\n",root->data);
}
int main()
{
	struct node *root=NULL;
	root=create();
	printf("Postorder is\n");
	postorder(root);
	return 0;

}