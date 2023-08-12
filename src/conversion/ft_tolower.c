/// @brief transform a lette in lowercase
/// @param c is a char
/// @return c if it's alrady a lower or c + 32 
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
