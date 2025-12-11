#include"management.h"
struct student stu[MAX_STU];
int stu_count = 0;
void menu()
{
	printf("****************************************\n");
	printf("***1.添加学生	      2.删除学生**********\n");
	printf("***3.查找学生	      4.修改学生信息*******\n");
	printf("***5.显示学生信息     0.退出**************\n");
	printf("****************************************\n");
}
int main()
{
	int x = 0;
	do 
	{
		menu();
		printf("请输入想执行的操作：");
		scanf("%d", &x);
		switch (x)
		{
			case 1:
			{
				add_stu();
				break;
			}
			case 2:
			{	// 删除学生
                              void del_stu()
                             {
                              if (stu_count == 0)
                             {
                               printf("暂无学生信息，无法删除！\n");
                                   _getch();
                                     return;
                                             }

                                    show_all();
                                    char id[20];
                                printf("请输入要删除的学生学号：");
                                scanf("%s", id);

                                 for (int i = 0; i < stu_count; i++)
                                 {
                                  if (strcmp(id, stu[i].id) == 0)
                                 {
                                  // 数据前移覆盖
                                 for (int j = i; j < stu_count - 1; j++)
                                 {
                                 stu[j] = stu[j + 1];
                                 }
                                  stu_count--;
                                   printf("删除成功！\n");
                                   _getch();
                                    return;
                                   } 
                                 }
                                  printf("未找到该学生！\n");
                                   _getch();
                                  }
				del_stu();
				break;
			}
			case 3:
			{
				search_stu();
				break;
			}
			case 4:
			{
				modify_stu();
				break;
			}
			case 5:
			{
				show_stu();
			}
			case 0:
			{
				
				printf("已退出通讯录\n");
				break;
		        }
			default:
			{
				printf("输入错误，请重新输入\n");
				break;
			}
	}
