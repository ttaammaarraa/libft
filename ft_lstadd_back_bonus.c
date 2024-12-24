#include "libft.h"
//#include <stdio.h>
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    if (!new)
        return ;
    if (!*lst)
    {
        *lst = new;
    }
    else
    {
        last = ft_lstlast(*lst);
        last-> next = new;
        //new->next = NULL;
    }
}
/*int main()
{
    t_list *p1;
    t_list *p2;
    int data;
    int data2;

    p1 = malloc(sizeof(t_list));
    p2 = malloc(sizeof(t_list));
    data = 5;
    data2 = 10;
    p1->content = &data;
    p1->next = NULL;
    p2->content = &data2;
    p2->next = NULL;
    ft_lstadd_back(&p2, p1);
       while (p2)
    {
        printf("%d\n", *(int *)p2->content);
        
        p2= p2->next;
    }
}*/