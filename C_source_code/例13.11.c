#include <stdio.h>
#include <string.h>
int search_word(char *word,char *d[],int n)
{
	int low=0,high=n-1,mid,search,wordlength=strlen(word);
	do
	{
		mid=(low+high)/2;
		search=strncmp(word,d[mid],wordlength);
		if(search==0) return mid;
		else if(search<0) high=mid-1;
		else low=mid+1;
	}while(high>=low);
	return -1;
}
void main()
{
	char w[30],*dict[5]={"kite:风筝","knife:小刀","knob:球形把手","knot:节，节疤","know:知道"};
	int i;
	printf("请输入单词：\n");
	scanf("%s",w);
	i=search_word(w,dict,5);
	if(i==-1) printf("NOT FOUND!\n");
	else printf("%s\n",dict[i]); 
}
