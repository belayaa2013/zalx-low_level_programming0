
char *string_toupper(char *)
{
	int i;

	for (i = 0; n[i] != '\0'; n++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 22;
	}
	return (n);
}

