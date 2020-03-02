#include <stdlib.h>
#include <unistd.h>

// typedef struct	node
// {
// 	char *word;
// 	struct node *next;
// }				t_list;

typedef struct node // struct Decelaration
{
	char		*word;
	struct node *next;
}				t_list;

t_list	*create_list(char *str)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->word = str;
	new->next = NULL;
	return (new);
}

t_list	*push_word(t_list *head, char *str)
{
	t_list	*new;

	new = create_list(str);
	new->next = head;
	head = new;
	return (head);
}

t_list	*rev_list_wstr(char *str)
{
	int		i;
	int		start;
	int		word_len;
	int		j;
	char	*word;
	t_list	*head;

	i = 0;
	head = NULL;
	while(str[i])
	{
		j = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = i;
		word_len = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i])
		{
			word_len++;
			i++;
		}
		word = (char *)malloc(sizeof(char) * word_len + 1);
		while (word_len)
		{
			word[j++] = str[start++];
			word_len--;
		}
		word[j] = '\0';
		head = push_word(head, word);
		if (str[i])
			i++;
	}
	return (head);
}

void	printf_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void print_rev(t_list *head) // print via recursion 
{
	if (head == NULL)
		return ;
	if (head)
	{
		printf_str(head->word); // first print the word because the words are store in a reverse manner in the list
		if (head->next)// assign space till second last element because for last element we don't need space.
			write(1, " ", 1);
		print_rev(head->next); // call next head location and do the recursion.
	}
}

int 	main(int argc, char **argv)
{
	t_list	*head;

	if (argc == 2)
	{
		head = rev_list_wstr(argv[1]);
		print_rev(head);
	}
	write(1, "\n", 1);
	return (0);
}