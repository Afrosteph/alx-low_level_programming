/**
 * print_name - prints a name.
 * @name: string to print.
 * @f: fuction to use.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		 f(name);
}
