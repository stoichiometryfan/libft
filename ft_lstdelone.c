void delete(void *content)
{
	free(content)
}
void ft_lstdelone(t_list *lst ,void (*del)(void *))
{
	void *con;

	if(!lst || del ==NULL)
		return ;
	con=lst->content;
	del(con);
	free(lst)
}
