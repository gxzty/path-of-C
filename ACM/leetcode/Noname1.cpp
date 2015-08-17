#include <stdio.h>
#include <string.h>
/*����ѧ���ṹ��*/
struct Student
{
    char ID[20];
    char Name[20];
    float Mark1;
    float Mark2;
    float Mark3;
    float Average;
};

/*����ѧ�����鼰ѧ������*/
struct Student students[1000];
int num=0;
 
/*��ƽ��ֵ*/
float Avg(struct Student stu)
{
    return (stu.Mark1+stu.Mark2+stu.Mark3)/3;
}
 
/*ͨ��ѧ�ŷ��������±�*/
int Student_SearchByIndex(char id[])
{
    int i;
    for (i=0;i<num;i++)
    {
        if (strcmp(students[i].ID,id)==0)
        {
            return i;
        }
    }
    return -1;
}
 
/*ͨ���������������±�*/
int Student_SearchByName(char name[])
{
    int i;
    for (i=0;i<num;i++)
    {
        if (strcmp(students[i].Name,name)==0)
        {
            return i;
        }
    }
    return -1;
}
 
/*��ʾ����ѧ����¼*/
void Student_DisplaySingle(int index)
{
    printf("%10s%10s%8s%8s%8s%10s\n","ѧ��","����","�ɼ�","�ɼ�","�ɼ�","ƽ���ɼ�");
    printf("-------------------------------------------------------------\n");
    printf("%10s%10s%8.2f%8.2f%8.2f%10.2f\n",students[index].ID,students[index].Name,
            students[index].Mark1,students[index].Mark2,students[index].Mark3,students[index].Average);
}
 
/*����ѧ����Ϣ*/
void Student_Insert()
{
    while(1)
    {
        printf("������ѧ��:");
        scanf("%s",&students[num].ID);
        getchar();
 
        printf("����������:");
        scanf("%s",&students[num].Name);
        getchar();
 
        printf("������ɼ�:");
        scanf("%f",&students[num].Mark1);
        getchar();
 
        printf("������ɼ�:");
        scanf("%f",&students[num].Mark2);
        getchar();
 
        printf("������ɼ�:");
        scanf("%f",&students[num].Mark3);
        getchar();
 
        students[num].Average=Avg(students[num]);
        num++;
 
        printf("�Ƿ����?(y/n)");
        if (getchar()=='n')
        {
            break;
        }
    }
 
}
 
/*�޸�ѧ����Ϣ*/
void Student_Modify()
{
    //float mark1,mark2,mark3;
    while(1)
    {
        char id[20];
        int index;
        printf("������Ҫ�޸ĵ�ѧ����ѧ��:");
        scanf("%s",&id);
        getchar();
        index=Student_SearchByIndex(id);
        if (index==-1)
        {
            printf("ѧ��������!\n");
        }
        else
        {
            printf("��Ҫ�޸ĵ�ѧ����ϢΪ:\n");
            Student_DisplaySingle(index);
            printf("-- ��������ֵ--\n");

            printf("������ѧ��:");
            scanf("%s",&students[index].ID);
            getchar();

            printf("����������:");
            scanf("%s",&students[index].Name);
            getchar();

            printf("������ɼ�:");
            scanf("%f",&students[index].Mark1);
            getchar();

            printf("������ɼ�:");
            scanf("%f",&students[index].Mark2);
            getchar();

            printf("������ɼ�:");
            scanf("%f",&students[index].Mark3);
            getchar();

            students[index].Average=Avg(students[index]);
        }
        printf("�Ƿ����?(y/n)");
        if (getchar()=='n')
        {
            break;
        }
    }
}
 
/*ɾ��ѧ����Ϣ*/
void Student_Delete()
{
    int i;
    while(1)
    {
        char id[20];
        int index;
        printf("������Ҫɾ����ѧ����ѧ��:");
        scanf("%s",&id);
        getchar();
        index=Student_SearchByIndex(id);
        if (index==-1)
        {
            printf("ѧ��������!\n");
        }
        else
        {
            printf("��Ҫɾ����ѧ����ϢΪ:\n");
            Student_DisplaySingle(index);
            printf("�Ƿ����Ҫɾ��?(y/n)");
            if (getchar()=='y')
            {
                for (i=index;i<num-1;i++)
                {
                   students[i]=students[i+1];//�Ѻ�ߵĶ�����ǰ�ƶ�
                }
                num--;
            }
            getchar();
        }
        printf("�Ƿ����?(y/n)");
        if (getchar()=='n')
        {
            break;
        }
    }
}
 
/*��������ѯ*/
void Student_Select()
{
    while(1)
    {
        char name[20];
        int index;
        printf("������Ҫ��ѯ��ѧ��������:");
        scanf("%s",&name);
        getchar();
        index=Student_SearchByName(name);
        if (index==-1)
        {
            printf("ѧ��������!\n");
        }
        else
        {
            printf("��Ҫ��ѯ��ѧ����ϢΪ:\n");
            Student_DisplaySingle(index);
        }
        printf("�Ƿ����?(y/n)");
        if (getchar()=='n')
        {
            break;
        }
    }
}
 
/*��ƽ��ֵ����*/
void Student_SortByAverage()
{
    int i,j;
    struct Student tmp;
    for (i=0;i<num;i++)
    {
        for (j=1;j<num-i;j++)
        {
            if (students[j-1].Average<students[j].Average)
            {
                tmp=students[j-1];
                students[j-1]=students[j];
                students[j]=tmp;
            }
        }
    }
}
 
/*��ʾѧ����Ϣ*/
void Student_Display()
{
    int i;
    printf("%10s%10s%8s%8s%8s%10s\n","ѧ��","����","�ɼ�","�ɼ�","�ɼ�","ƽ���ɼ�");
    printf("-------------------------------------------------------------\n");
    for (i=0;i<num;i++)
    {
        printf("%10s%10s%8.2f%8.2f%8.2f%10.2f\n",students[i].ID,students[i].Name,
            students[i].Mark1,students[i].Mark2,students[i].Mark3,students[i].Average);
    }
}
 
/*��ѧ����Ϣ���ļ�����*/
void IO_ReadInfo()
{
    FILE *fp;
    int i;
    if ((fp=fopen("Database.txt","rb"))==NULL)
    {
        printf("���ܴ��ļ�!\n");
        return;
    }
    if (fread(&num,sizeof(int),1,fp)!=1)
    {
        num=-1;
    }
    else
    {
        for(i=0;i<num;i++)
        {
            fread(&students[i],sizeof(struct Student),1,fp);
        }
    }
    fclose(fp);
}
 
/*��ѧ����Ϣд���ļ�*/
void IO_WriteInfo()
{
    FILE *fp;
    int i;
    if ((fp=fopen("Database.txt","wb"))==NULL)
    {
        printf("���ܴ��ļ�!\n");
        return;
    }
    if (fwrite(&num,sizeof(int),1,fp)!=1)
    {
        printf("д���ļ�����!\n");
    }
    for (i=0;i<num;i++)
    {
        if (fwrite(&students[i],sizeof(struct Student),1,fp)!=1)
        {
            printf("д���ļ�����!\n");
        }
    }    
    fclose(fp);
}
 
 
/*������*/
int main()
{
    int choice;
    IO_ReadInfo();
    while(1)
    {
        /*���˵�*/
        printf("\n------ ѧ���ɼ�����ϵͳ------\n");
        printf("1. ����ѧ����¼\n");
        printf("2. �޸�ѧ����¼\n");
        printf("3. ɾ��ѧ����¼\n");
        printf("4. ��������ѯѧ����¼\n");
        printf("5. ��ƽ���ɼ�����\n");
        printf("6. �˳�\n");
        printf("��ѡ��(1-6):");
        scanf("%d",&choice);
        getchar();
        switch(choice)
        {
        case 1:
            Student_Insert();
            break;
        case 2:
            Student_Modify();
            break;
        case 3:
            Student_Delete();
            break;
        case 4:
            Student_Select();
            break;
        case 5:
            Student_SortByAverage();
            Student_Display();
            break;
        case 6:
            break;
        }
        IO_WriteInfo();
    }
}