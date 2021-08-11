/*
	实现一个memmove函数， 需要考虑src 和 dest 的位置， 是否可能存在重叠
*/

void* memmove(void* dest, const void* src, size_t n)
{
	char * p1 = dest;
	const char* p2 = src;
	
	if (p2 > p1) {
		p2 += n;
		p1 += n;
		while (n-- != 0)
			*--p1 = *--p2;
	} else {
		while (n-- != 0)
			*p1++ = *p2++;
	}
	
	return p1;

}