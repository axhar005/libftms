/// @brief Check if it's an number
/// @param c is a char
/// @return 1 = true 0 = false
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
