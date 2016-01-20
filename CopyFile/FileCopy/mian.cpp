#include <stdio.h>

int main()
{
	//文件拷贝的实现
	FILE *fp1=fopen("F:\\Softwared\\MSDN_1.5_SETUP.exe","rb");
	FILE *fp2=fopen("C:\\Users\\Administrator\\Desktop\\msdn.exe","wb");

	int  iRet;
	char szBuff[1024];
	while(!feof(fp1))
	{
		iRet=fread(szBuff,1,sizeof(szBuff),fp1);
		fwrite(szBuff,1,iRet,fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}