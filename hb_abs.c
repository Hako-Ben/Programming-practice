unsigned int	hb_abs(int n)
{
	if (n < 0)
		return ((unsigned int) n * -1);
	else
		return (n);
}
