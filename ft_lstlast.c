t_list *ft_lstlast(t_list *lst)
{
	if(lst!)
		return NULL;
	while(lst != NULL && lst->next != NULL)
		lst->next;
	return lst;
}
