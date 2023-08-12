/// @brief Check if it's a printable char
/// @param c is a char
/// @return 1 = true 0 = false
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
