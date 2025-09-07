void	ft_rev_int_tab(int *tab, int size)
{
	int		tmp;
	int		start;
	int		end;

	// on commence à zéro et on fini à size - 1
	start = 0;
	end = size - 1;
	while (start < end)
	{
		// on sauvegarde tab[start] pour pas le perdre
		tmp = tab[start];
		// on dit que le tab[start] vaut maintenant tab[end]
		// pour le premier cas c'est tab[0] = tab[dernier]
		tab[start] = tab[end];
		// on reprends le tab[start] sauvegardé pour le mettre dans tab[end]
		tab[end] = tmp;
		// on passe à tab[1] et tab[dernier - 1] pour les inverser
		start = start + 1;
		end = end - 1;
	}
}

// solution avec ft_swap que tu as déjà faites :

void	ft_swap(int *tab1, int *tab2)
{
	int		tmp;

	tmp = *tab1;
	*tab1 = *tab2;
	*tab2 = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int		tmp;
	int		start;
	int		end;

	// on commence à zéro et on fini à size - 1
	start = 0;
	end = size - 1;
	while (start < end)
	{
		// on envoi l'addresse de tab[start] et tab[end], en utilisant &
		ft_swap(&tab[start], &tab[end])
		start = start + 1;
		end = end - 1;
	}
}