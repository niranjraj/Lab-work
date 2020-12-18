#include<stdio.h>
#include <stdlib.h>

void main()

{

    int k=0,output[10],d=0,t=0,ins[5],i,avail[5],allocated[10][5],need[10][5],MAX[10][5],pno,p[10],j,rz,count=0;

    printf("\nEnter the no. of resources");

    scanf("%d",&rz);

    printf("\nEnter the max instance of each resource\n");

    for(i=0;i<rz;i++)

    {

        avail[i]=0;

        printf("%c=",(i+97));

        scanf("%d",&ins[i]);

    }

    printf("\n Enter the no of processes");

    scanf("%d",&pno);

    printf("\nEnter the allocation matrix");

    for(i=0;i<rz;i++)

        printf("%c",(i+97));

        printf("\n");

        for(i=0;i<pno;i++)

        {

            p[i]=i;

            printf("p[%d]",i);

            for(j=0;j<rz;j++)

            {

            scanf("%d",&allocated[i][j]);

            avail[j]+=allocated[i][j];

            }

            }

    printf("\nEnter the MAX matrix\n");

    for(i=0;i<rz;i++)

    {

        printf("%c",(i+97));

        avail[i]=ins[i]-avail[i];

    }

    printf("\n");

    for(i=0;i<pno;i++)

    {

        printf("p[%d]",i);

         for(j=0;j<rz;j++)

        scanf("%d",&MAX[i][j]);

    }

    printf("\n");

   A: d=-1;

    for(i=0;i<pno;i++)

    {

        count=0;

        t=p[i];

        for(j=0;j<rz;j++)

        {

            need[t][j]=MAX[t][j]-allocated[t][j];

            if(need[t][j]<=avail[j])

            count++;

        }

        if(count==rz)

        {

            output[k++]=p[i];

            for(j=0;j<rz;j++)

            avail[j]+=allocated[t][j];

        }

        else

        p[++d]=p[i];

    }

    if(d!=-1)

    {

        pno=d+1;

        goto A;

    }

    printf("\t<");

    for(i=0;i<k;i++)

    printf("p[%d]",output[i]);

    printf(">");

}