#include "duLinkedList.h"


Status InitList_DuL(DuLinkedList *L){
	*L=(Linklist)malloc(sizeof(LNode));
	if(!(*L)) return ERROR;//�ڴ����ʧ�� 
	*L->next=*L;
	*L->prior=*L
}

void DestroyList_DuL(DuLinkedList *L){
	DLinkedList p,q;
	p=L->next;
	while(p!=NULL){
	q=p->next;
	free(p);//�ͷ�ÿ��Ԫ�� 
	p=q;
	}
}
Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q){
	DuLNode *a;
	a=p->prior;//ȷ��a��λ�� 
	q=p->prior;
	a=p->prior;//һ������ 
	q=a->next;
	p=q->next;//��һ������ 
}

Status InsertAfterList_DuL(DuLNode *p, DuLNode *q){
	DuLNode *a;
	a=p->next;//ȷ��a��λ�� 
	q=p->next;
	a=p->next;//һ������ 
	q=a->prior;
	p=q->prior;//��һ������ 
}
Status DeleteList_DuL(DuLNode *p, ElemType *e){
	DuLNode *q;
	DuLNode *a;
	q=p->next;//qΪpԭ�ȵĺ�ڵ�
	a=p->prior;  
	p->next=q->next;//p����q����Ľڵ㡤
	p->prior=a->prior 
	e=q;//��q��ֵ��e 
	free(q);
}
