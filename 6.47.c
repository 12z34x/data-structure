void search(CSTree &T)//孩子兄弟二叉链表
{
    LinkQueue *C;//建立孩子队列
    InitQueue(C);
    if(T==NULL) return;
    else
    {
        Enqueue(C,T->firstchild);
        while(!QueueEmpty(C))
        {
            if(T!=NULL)//是否此层次遍历完
            {
            printf("%lf",T.data);
            T=T->nextsibling;//因为没遍历完，故访问兄弟
            EnQueue(C,T->firstchild);//兄弟第一个孩子进队列
            }
            else
            {
                DeQueue(C,&e);//退队
                T=e;//队首
                EnQueue(C,T->firstchild);
            }
        }
        printf("此遍历方式下的最后一个节点为:",T.data);//最后一个节点尚未访问
    }
    DestoryQueue(C);
}
