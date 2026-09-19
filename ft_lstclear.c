void delete_nodes(void *cont)
{
	free(cont);
}
void ft_lstclear(t_list **lst,void (*del)(void*))
{
	if(!lst|| !*lst|| !del)
		return ;
	t_list *tmp=*lst;
	while(tmp!=NULL)
	{
		t_list *newnode=tmp->next;
		ft_lstdelone(tmp,del)
		tmp=newnode;
	}
}
