#include <stdio.h>
#include <sys/types.h> 
#include <sys/stat.h>
#include <errno.h>

int main()
{
	/*
	FILE *fp=fopen("F:\\Softwared\\Fedora-14-i386-DVD.iso","r");
	
	if(NULL==fp)
	{
		printf("文件不存在！\n");
	}
	else
	{
		int iFileSize;
		//使用fseek和ftell获取文件大小，这种解决方案只适用于小于2G的文件
		fseek(fp,0,SEEK_END);
		iFileSize=ftell(fp);
		fseek(fp,0,SEEK_SET);

		printf("文件大小：%d\n",iFileSize);
		
		fclose(fp);
	}
	*/

	/*
	struct _stat st;

	if(-1==_stat("F:\\Softwared\\Fedora-14-i386-DVD.iso",&st))
	{
		if(errno==ENOENT) 
		{
			printf("文件不存在！\n");
		}
	}
	else
	{
		if(st.st_mode & _S_IFDIR) printf("是目录！\n");
		else if(st.st_mode & _S_IFREG) printf("是文件！n");
		
		printf("文件大小：%u\n",st.st_size);
	}
	*/

	char c1;

	//c1=getchar();
	//c1=fgetc(stdin); //使用fgetc实现标准输入

	char str[10];
	fgets(str,sizeof(str),stdin); //实现行输入的最简单并且安全的解决方案，不会溢出

	//printf("c1=%c\n",c1);
	printf("str=%s\n",str);
	return 0;
}