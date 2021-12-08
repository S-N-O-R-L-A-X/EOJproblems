NODE *EraseNodes(NODE *h,int v) {
    //TODO: your definition
    //请提交该函数，不要提交其它部分

    for(NODE *p=h->next,*pre=h;p;)
    {
        if(p->value==v)
        {
            pre->next=p->next;
            NODE *q=p;
            p=p->next;
            delete q;
        }
        else
        {
            p=p->next;
            pre=pre->next;
        }
    }


    if(h->value==v)
    {
        NODE *q=h;
        h=h->next;
        delete q;
    }
    return h;
}
