#include"DataFuncdecl.h"

int NowStudentNums = 0;//当前存储人数
Student StuArry[MaxNums];//创建学生结构体数组
Score SoArry[MaxNums];//成绩结构体数组，用于排序
Admin AdminUser;//创建一个管理员用户，数据从文件中读取
int FlagAI = -1;//显示全部数据的页面跳转标识
int FlagFPT = -1;//查询找到页面跳转标识，1返回增删改查界面，-1返回普通用户界面