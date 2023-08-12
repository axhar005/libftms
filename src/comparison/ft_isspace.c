/// @brief Check if c it's a space
/// @param c is a char
/// @return 1 = true 0 = false
int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\f' || c == '\r'
		|| c == '\v' || c == ' ')
		return (1);
	return (0);
}
