#include "duLinkedList.h"


Status InitList_DuL(DuLinkedList *L){
	*L=(Linklist)malloc(sizeof(LNode));
	if(!(*L)) return ERROR;//内存分配失败 
	*L->next=*L;
	*L->prior=*L
}

void DestroyList_DuL(DuLinkedList *L){
	DLinkedList p,q;
	p=L->next;
	while(p!=NULL){
	q=p->next;
	free(p);//释放每个元素 
	p=q;
	}
}
Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q){
	DuLNode *a;
	a=p->prior;//确定a的位置 
	q=p->prior;
	a=p->prior;//一个方向 
	q=a->next;
	p=q->next;//另一个方向 
}

Status InsertAfterList_DuL(DuLNode *p, DuLNode *q){
	DuLNode *a;
	a=p->next;//确定a的位置 
	q=p->next;
	a=p->next;//一个方向 
	q=a->prior;
	p=q->prior;//另一个方向 
}
Status DeleteList_DuL(DuLNode *p, ElemType *e){
	DuLNode *q;
	DuLNode *a;
	q=p->next;//q为p原先的后节点
	a=p->prior;  
	p->next=q->next;//p连接q后面的节点·
	p->prior=a->prior 
	e=q;//把q赋值给e 
	free(q);
}
