#include <stdio.h>
#include <linkedList.h>
 
//初始化链表 
Status InitList(LinkedList *L){
	LinkedList p;
	*L=malloc(sizeof(LNode));
	if(!(*L)) return ERROR;//内存分配失败'
	p=(*L)->next;
	*p= NULL;
}


void DestroyList(LinkedList *L){
	LinkedList p,q;
	p=(*L)->next;
	while(p!=NULL){
	q=p->next;
	free(p);//释放每个元素 
	p=q;
	}
}


Status InsertList(LNode *p, LNode *q){
	LNode *a;//原先在p后面的节点 
	a=p->next;
	if(p->next=NULL){
		p->next=q;
	} 
	else{
		p->next=q;
		q->next=a;
	}
}

Status DeleteList(LNode *p, ElemType *e){
	LNode *q;
	q=p->next;//q为p原先的后节点 
	p->next=q->next;//p连接q后面的节点· 
	e=q;//把q赋值给e 
	free(q);
}

