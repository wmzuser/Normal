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
		printf("�ļ������ڣ�\n");
	}
	else
	{
		int iFileSize;
		//ʹ��fseek��ftell��ȡ�ļ���С�����ֽ������ֻ������С��2G���ļ�
		fseek(fp,0,SEEK_END);
		iFileSize=ftell(fp);
		fseek(fp,0,SEEK_SET);

		printf("�ļ���С��%d\n",iFileSize);
		
		fclose(fp);
	}
	*/

	/*
	struct _stat st;

	if(-1==_stat("F:\\Softwared\\Fedora-14-i386-DVD.iso",&st))
	{
		if(errno==ENOENT) 
		{
			printf("�ļ������ڣ�\n");
		}
	}
	else
	{
		if(st.st_mode & _S_IFDIR) printf("��Ŀ¼��\n");
		else if(st.st_mode & _S_IFREG) printf("���ļ���n");
		
		printf("�ļ���С��%u\n",st.st_size);
	}
	*/

	char c1;

	//c1=getchar();
	//c1=fgetc(stdin); //ʹ��fgetcʵ�ֱ�׼����

	char str[10];
	fgets(str,sizeof(str),stdin); //ʵ�����������򵥲��Ұ�ȫ�Ľ���������������

	//printf("c1=%c\n",c1);
	printf("str=%s\n",str);
	return 0;
}