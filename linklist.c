#include <stdio.h>
#include <linkedList.h>
 
//��ʼ������ 
Status InitList(LinkedList *L){
	LinkedList p;
	*L=malloc(sizeof(LNode));
	if(!(*L)) return ERROR;//�ڴ����ʧ��'
	p=(*L)->next;
	*p= NULL;
}


void DestroyList(LinkedList *L){
	LinkedList p,q;
	p=(*L)->next;
	while(p!=NULL){
	q=p->next;
	free(p);//�ͷ�ÿ��Ԫ�� 
	p=q;
	}
}


Status InsertList(LNode *p, LNode *q){
	LNode *a;//ԭ����p����Ľڵ� 
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
	q=p->next;//qΪpԭ�ȵĺ�ڵ� 
	p->next=q->next;//p����q����Ľڵ㡤 
	e=q;//��q��ֵ��e 
	free(q);
}

