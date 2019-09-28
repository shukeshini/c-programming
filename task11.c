#include<stdio.h>
struct book
{
	char tittle[10];
	char author[10];
	char genre[10];
};
int main()
{
	struct book b1;
	printf("enter tittle of the book");
	scanf("%s",b1.tittle);
	printf("enter author name of the book");
	scanf("%s",b1.author);
	printf("enter genre of the book");
	scanf("%s",b1.genre);
	printf("tittle:%s\n",b1.tittle);
	printf("author:%s\n",b1.author);
	printf("genre:%s\n",b1.genre);
}
