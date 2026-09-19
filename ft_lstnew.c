typedef struct	s_list
{
	void	*content;
	struct  s_list *next;
}		t_list;
t_list *ft_lstnew(void * content)
{
	t_list *newnode=(t_list *)malloc(sizeof(t_list));
	if*(newnode==NULL)
		return NULL;
	newnode->content=content;
	newnode->next=NULL;
	return newnode;
}
