// void		merger(int *array, int start, int niddle, int size)
// {

// }

void		sort_merge_int(int *array, int start, int size)
{
	int middle;
	if (start < size)
	{
		middle = start + (size - start) / 2;  // you may use arifmetical average (start + end) / 2, but it can exit from range of int
		sort_merge_int(array, start, middle);
		sort_merge_int(array, middle + 1, size);

		// merger(array, start, middle, size);
	}
}

int		main(void)
{
	int array[] = {38,27,43,3,9,82,10};
	int size = sizeof(array)/sizeof(int);
	sort_merge_int(array, 0, size - 1);
	return (0);
}