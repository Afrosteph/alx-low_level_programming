/**
 * print_name - prints a name.
 * @name: pointer to name.
 * @f: fuction to pointer.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
