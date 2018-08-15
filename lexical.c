#include<stdio.h>
#include<string.h>
void main(){
	int k=0,i=0,s=0,o=0,j=0,j1=0,f=0,f1=0,d=0;
	char ch,t[10];
	char key[8][10]={"void","int","float","char","else","if","main","FILE"};
	FILE *fp=fopen("sample.c","r");
	while((ch = fgetc(fp)) != EOF){
		//if(ch=='#' && ch!='\n')
		//	{
		//	printf("%c",ch);
		//	}      		
		//else 
		//	{
			if(ch!=' ' && ch!='\n' && ch!=';' && ch!='(' && ch!=')' && ch!='{' && ch!='}' && ch!='=' && ch!='*' && ch!='/' && ch!='+' && ch!='-')
				{
				t[j]=ch;
				j++;
				}
			else
				{
				f=1;
				if(ch==';' || ch=='(' || ch==')' || ch=='{' || ch=='}')
					{
					printf("%c special chara\n",ch);
					s=s+1;
					}
				if(ch=='=' || ch=='*' || ch=='/' || ch=='+' || ch=='-')
					{
					printf("%c operator\n",ch);
					o=o+1;
					}
				}
			//}
		if(f==1)
			{
			t[j]='\0';
			//if(isdigit(t)){
			//	printf("%s operand\n",t);				
			//	}
			//else{
			for(j1=0;j1<8;j1++){
				if(strcmp(key[j1],t)==0){
				printf("%s keyword \n",t);
				k=k+1;
				f1=1;			
				}			
			}
			f=0;
			if(f1==0 && j!=0)
				{
				if(isdigit(t[0])){
				printf("%s digit \n",t);
				d=d+1;
				}
				else{
				printf("%s identifier \n",t);
				i=i+1;
			}
				}
			f1=0;
			j=0;
			//}
			j=0;
}
	}
printf("\nkeyword = %d",k);	
printf("\nidentifier = %d",i);	
printf("\nspecial char = %d",s);
printf("\ndigit = %d",d);	
printf("\noperator = %d\n",o);	

}

