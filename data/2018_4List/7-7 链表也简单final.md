# 7-7 链表也简单final
将学生成绩绩点组成一个链表。链表结构如下：  
struct student {  
string name; //学生姓名  
double gpa; //绩点  
student *next;  
};

输入是一组学生的姓名和绩点，以链表形式存储。 删除绩点小于平均绩点的学生结点，成为一个新链表。
后按照输入的顺序，依序输出新链表的学生信息。平均绩点是输入的所有学生绩点取算术平均值。

### 输入格式:

输入包括若干行。 每行是一个学生的 姓名和绩点，以空格隔开。  
最后一行是-1。

### 输出格式:

输出包括学生姓名。 每个学生姓名一行。

### 输入样例:

    
    
    zhang 3.5
    liu 2.1
    tie 1.9
    -1
    

### 输出样例:

    
    
    zhang
    

