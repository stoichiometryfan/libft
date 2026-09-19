void ft_lstiter(t_list *lst,void (*f)(void *))
{
	t_list *tmp=lst;

	while(tmp!=NULL)
	{
		t_list *newnode=tmp->next;
		tmp->content=f(content);
		tmp=newnode;
		
	}
}
