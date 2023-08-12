/// @brief Check if it's an alphabet
/// @param c is a char
/// @return 1 = true 0 = false
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
