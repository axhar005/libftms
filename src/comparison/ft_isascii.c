/// @brief Check if it's a ascii char
/// @param c is a char
/// @return 1 = true 0 = false
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
