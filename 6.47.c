void search(CSTree &T)//�����ֵܶ�������
{
    LinkQueue *C;//�������Ӷ���
    InitQueue(C);
    if(T==NULL) return;
    else
    {
        Enqueue(C,T->firstchild);
        while(!QueueEmpty(C))
        {
            if(T!=NULL)//�Ƿ�˲�α�����
            {
            printf("%lf",T.data);
            T=T->nextsibling;//��Ϊû�����꣬�ʷ����ֵ�
            EnQueue(C,T->firstchild);//�ֵܵ�һ�����ӽ�����
            }
            else
            {
                DeQueue(C,&e);//�˶�
                T=e;//����
                EnQueue(C,T->firstchild);
            }
        }
        printf("�˱�����ʽ�µ����һ���ڵ�Ϊ:",T.data);//���һ���ڵ���δ����
    }
    DestoryQueue(C);
}
