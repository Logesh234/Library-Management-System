#include <stdio.h>
#include<string.h>
void student();
struct book
{
    char bn[100],an[100];//bn=book name,an=author name
int id,f;
    
}b[100];
int i,tot,t=0,id=1;
void add()
{
    int n;
    printf("\nenter no of books to add :");
    scanf("%d",&n);
    tot+=n;
    for(i=t;i<tot;i++)
    {
        printf("\nenter book name:");
        scanf("%s",b[i].bn);
        printf("\nenter an author name :");
        scanf("%s",b[i].an);
        b[i].id=id;id++;
        printf("\n enetr an book id:%d",b[i].id);
        b[i].f=1;
    }
    t=i;
}
void view()
{
	int fl=1;
    for(i=0;i<tot;i++)
    {
        if(b[i].f==1)
        {
			printf("%s %s %d \n",b[i].bn,b[i].an,b[i].id);
			fl=0;
    }
}
if(fl)
printf("\nthere is no books\n");
}
void viewissue()
{
	int fl=1;
    for(i=0;i<tot;i++)
    {
        if(b[i].f==0)
        {
			printf("%s %s %d \n",b[i].bn,b[i].an,b[i].id);
			fl=0;
		}
	}  
    if(fl)
    printf("\no books were issued\n");
}
void lend()
{
    char x[100];
    int tid,fl=1;
    printf("\nenter book name;");
    scanf("%s",x);
    printf("enter book id :");
    scanf("%d",&tid);
    for(i=0;i<tot;i++)
    {
        if(!strcmp(x,b[i].bn)&&b[i].id==tid&&b[i].f==1)
        {
            b[i].f=0;
            fl=0;
            
        }
    }
    if(fl)
    printf("\ninvalid book name\n");
    else
    printf("\n book lended succesfully\n");
    
    
}
void ret()
{
    char x[100];
    int tid,fl=1;
    printf("\nenter book name:");
    scanf("%s",x);
    printf("enter book id:");
    scanf("%d",&tid);
    for(i=0;i<tot;i++)
    {
        if(!strcmp(x,b[i].bn)&&b[i].id==tid&&b[i].f==0)
        {
            b[i].f=1;
            fl=0;
            
        }
    }
    if(fl)
    printf("\ninvalid book name\n");
    else 
    printf("\n book returned succesfully\n");
}
void admin()
{
    int n;
   
    while(1)
    {
        printf("\n1.add book\n2.view book\n3.view issued book\n4.exit\n");
        scanf("%d",&n);
        if(n==1)
        {
            add();
        }
        else if(n==2)
        {
            view();
        }
        else if(n==3)
        {
            viewissue();
        }
        else if(n==4)
        {
            break;
        }
        else
        printf("invalid option");
    }
    
}
void student()
{
    int n;
    while(n)
    {
        printf("\n1.view book\n2.lend book\n3.return book\n4.exit\n");
        scanf("%d",&n);
        if(n==1)
        {
            view();
        }
        else if(n==2)
        {
            lend();
        }
        else if(n==3)
        {
            ret();
        }
        else if(n==4)
        {
            break;
        }
        else
        printf("invalid option");
    }
}


int main()
{
    int n;
    char p1[8];
    printf("\n***welcome to library***\n");
    while(1)
    {
        printf("1.admin\n2.student\n3.exit\n");
        scanf("%d",&n);
        if(n==1)
        {
			printf("enter the password\n");
			scanf("%s",p1);
				if(strcmp(p1,"123")==0)
				{
				admin();
				}
				else
				printf("password is incorrect\n");
		}
        if(n==2)
        {
            printf("enter the password\n");
			scanf("%s",p1);
				if(strcmp(p1,"123")==0)
				{
				    student();
				}
				else
				printf("password is incorrect");
            
        }
        else if(n==3)
        {
            printf("\nthanks for using");
            break;
            
        }
        else
        printf("invalid option");
		}
}