char * countAndSay(int n)
{
    char *a,*b;
    int i,j,c1=0,c2=0,c3=0,num=1;
    a=(char*)malloc(sizeof(char)*10000);
    b=(char*)malloc(sizeof(char)*10000);
    a[0]='1',a[1]='\0';
    while(n>num)
    {
        i=j=0;
        while(a[i]!='\0')
        {
            if(a[i]=='1')
            {
                if(c2!=0)
                {
                    b[j]='0'+c2;
                    j++;
                    b[j]='2';
                    j++;
                    b[j]='\0';
                    c2=0;
                }
                if(c3!=0)
                {
                    b[j]='0'+c3;
                    j++;
                    b[j]='3';
                    j++;
                    b[j]='\0';
                    c3=0;
                }
                c1++;
            }
            else if(a[i]=='2')
            {
                if(c1!=0)
                {
                    b[j]='0'+c1;
                    j++;
                    b[j]='1';
                    j++;
                    b[j]='\0';
                    c1=0;
                }
                if(c3!=0)
                {
                    b[j]='0'+c3;
                    j++;
                    b[j]='3';
                    j++;
                    b[j]='\0';
                    c3=0;
                }
                c2++;
            }
            else if(a[i]=='3')
            {
                if(c1!=0)
                {
                    b[j]='0'+c1;
                    j++;
                    b[j]='1';
                    j++;
                    b[j]='\0';
                    c1=0;
                }
                if(c2!=0)
                {
                    b[j]='0'+c2;
                    j++;
                    b[j]='2';
                    j++;
                    b[j]='\0';
                    c2=0;
                }
                c3++; 
            }
            if(a[i+1]=='\0')
            {
                if(c1!=0)
                {
                    b[j]='0'+c1;
                    j++;
                    b[j]='1';
                    j++;
                    b[j]='\0';
                    c1=0;
                }
                if(c2!=0)
                {
                    b[j]='0'+c2;
                    j++;
                    b[j]='2';
                    j++;
                    b[j]='\0';
                    c2=0;
                }
                                if(c3!=0)
                {
                    b[j]='0'+c3;
                    j++;
                    b[j]='3';
                    j++;
                    b[j]='\0';
                    c3=0;
                }
            }
            i++;
        }
        i=0;
        while(b[i]!='\0')
        {
            a[i]=b[i];
            i++;
        }
        a[i]='\0';
        num++;
    }
    return a;
}
