- Write a function that creates an array of chars, and initializes it with a specific char.
		

		
- Prototype: char *create_array(unsigned int size, char c);
		
- Returns NULL if size = 0
		
- Returns a pointer to the array, or NULL if it fails
Write a function that concatenates two strings.

Prototype: char *str_concat(char *s1, char *s2);
The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
if NULL is passed, treat it as an empty string
The function should return NULL on failure
