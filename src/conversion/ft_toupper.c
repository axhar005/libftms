/// @brief transform a lette in uppercase
/// @param c is a char
/// @return c if it's alrady a upper or c - 32 
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
