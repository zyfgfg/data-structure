#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>
char bir[20][400];
int number=0;
typedef struct Infomation {
    char num[400];
    char name[400];
    char sexy[400];
    char birth[400];
    char child[400];
} Info;
typedef struct bnode {
    Info person;
    struct bnode *lchild, *rchild;
} BNode, *BiTree;
static Info human[10000];
static int n;
void new_left(BiTree p, Info info) {
    BiTree q = (BiTree) malloc(sizeof(BNode));
    q->person = info;
    q->lchild = q->rchild = NULL;
    p->lchild = q;}
void new_right(BiTree p, Info info) {
    BiTree q = (BiTree) malloc(sizeof(BNode));
    q->person = info;
    q->lchild = q->rchild = NULL;
    p->rchild = q;}
BiTree create() {    BiTree bt;
    FILE *fp = NULL;      // 文件指针
    long len;          // 家谱文件长度
    int n;           // 家谱文件中的记录个数

    fp = fopen(".family", "r");
    if(fp == NULL)
    {
        n = 0;
        return 0;
    }
    fseek(fp, 0, SEEK_END);  // 家谱文件位置指针移到家谱文件末尾
    len = ftell(fp);      // len求出家谱文件长度
    rewind(fp);        // 家谱文件位置指针移到家谱文件开头
    n = len / sizeof(Info);// n求出家谱文件中的记录个数
    for(int i = 0; i < 1; i++)
        fread(&human[i], sizeof(Info), 1, fp); // 将家谱文件中的数据读到fam数组中
    fclose(fp);
    struct Infomation human[7] ={{"第一代", "张一", "男", "2019-1-11", "张二，张三"},
                                {"第二代", "张二", "男", "2049-2-11", "张四，张五"},
                                {"第二代", "张三", "男", "2041-3-11", "张六，张七"},
                                {"第三代", "张四", "男", "2079-4-11", "    无"},
                                {"第三代", "张五", "男", "2080-5-11", "    无"},
                                {"第三代", "张六", "男", "2099-6-11", "    无"},
                                {"第三代", "张七", "男", "2100-7-11", "    无"}};
     bt= (BiTree) malloc(sizeof(BNode));
    bt->person = human[0];
    bt->lchild = bt->rchild = NULL;
    new_left(bt,human[1]);
    new_right(bt, human[2]);
    new_left(bt->lchild, human[3]);
    new_right(bt->lchild, human[4]);
    new_left(bt->rchild, human[5]);
    new_right(bt->rchild, human[6]);
    return bt;}
void output(BiTree p)//输出某结点的信息
{printf("%s    %s     %s       %s     %s\n", p->person.num, p->person.name, p->person.sexy, p->person.birth,p->person.child);}
void display(BiTree t) //输出数据
{BiTree q[400], p;
    int front, rear;
    front = rear = 0;
    printf("1.从文件读取家族信息并显示\n");
    printf(" 辈 分    姓名    性别     出 生 日 期      孩子     \n");
    if (t) {
        rear++;
        q[rear] = t;
        while (front != rear) {
            front = (front + 1) % 20;
            p = q[front];
            output(p);
            if ((rear + 1) % 20 != front && p->lchild != NULL) {
                rear = (rear + 1) % 20;
                q[rear] = p->lchild;}
            if ((rear + 1) % 20 != front && p->rchild != NULL) {
                rear = (rear + 1) % 20;
                q[rear] = p->rchild;}}}}
BiTree Parent(BiTree bt, BiTree p)  //找到结点p的双亲并返回
{BiTree l_result, r_result;
    if (!bt || bt == p)
        return NULL;
    if (bt->lchild == p || bt->rchild == p)
        return bt;
    else {
        l_result = Parent(bt->lchild, p);
        r_result = Parent(bt->rchild, p);
        return l_result ? l_result : (r_result ? r_result : NULL);}}
BiTree search_name(BiTree bt, char na[])  //通过名字找到结点并返回
{BiTree l_result, r_result;
    if (!bt)
        return NULL;
    if (strcmp(bt->person.name, na) == 0)
        return bt;
    else {
        l_result = search_name(bt->lchild, na);
        r_result = search_name(bt->rchild, na);
        return l_result ? l_result : (r_result ? r_result : NULL);}}
void search(BiTree bt)//根据姓名查找信息
{char na[400];
    BiTree node, child[2];
    printf("请输入你想查找的那个人的姓名：\n");
    scanf("%s", na);
    node = search_name(bt, na);
    printf("你查找的这个人的信息为:\n");
    printf("辈分    姓名    性别     出 生 日 期      孩子     \n");
    output(node);}
void add(BiTree bt)   //添加孩子
{char na[20];
    int i;
    BiTree p;
    Info new_child;
    printf("请输入你想让其拥有孩子的那个人的名字：\n");
    scanf("%s", na);
    p = search_name(bt, na);
    printf("你是想让他有熊孩子呀，还是奶孩子呀？左孩子请按1,右孩子请按0：\n");
    scanf("%d", &i);
    switch (i) {
        case 1:
            if (p->lchild != NULL) {
                printf("添加失败！超生了！！！\n");
                break;
            } else {
                printf("请输入新孩子的辈分");
                scanf("%s", new_child.num);
                printf("请输入新孩子的姓名：\n");
                scanf("%s", new_child.name);
                printf("请输入新孩子的性别：\n");
                scanf("%s", new_child.sexy);
                printf("请输入新孩子的出生日期：\n");
                scanf("%s", new_child.birth);
                printf("请输入新孩子的孩子：\n");
                scanf("%s", new_child.child);
                new_left(p, new_child);
                break;}
        case 2:
            if (p->rchild != NULL) {
                printf("添加失败！超生了\n");
                break;}
            else {printf("请输入新孩子的辈分");
                scanf("%s", new_child.num);
                printf("请输入新孩子的姓名：\n");
                scanf("%s", new_child.name);
                printf("请输入新孩子的性别：\n");
                scanf("%s", new_child.sexy);
                printf("请输入新孩子的出生日期：\n");
                scanf("%s", new_child.birth);
                printf("请输入新孩子的孩子：\n");
                scanf("%s", new_child.child);
                new_right(p, new_child);
                break;}}}
void update(BiTree bt)//更改信息
{char na[20];
    BiTree p;
    printf("请输入你想修改孩子的姓名：\n");
    scanf("%s", na);
    p = search_name(bt, na);
    printf("请输入修改过后的辈分：\n");
    scanf("%s", p->person.num);
    printf("请输入修改过后的姓名：\n");
    scanf("%s", p->person.name);
    printf("请输入修改过后的性别：\n");
    scanf("%s", p->person.sexy);
    printf("请输入修改过后的出生日期：\n");
    scanf("%s", p->person.birth);
    printf("请输入修改过后的所拥有的孩子：\n");
    scanf("%s", p->person.child);}
void delete(BiTree bt) //删除一个结点和他的孩子们孙子们
{char na[20];
    BiTree p, f;
    printf("请输入你想删除的那个人的姓名，删除之后他的孩子孙子们也将一并删除！\n");
    scanf("%s", na);
    p = search_name(bt, na);
    f = Parent(bt, p);
    if (f != NULL) {
        if (f->lchild == p) {
            f->lchild = NULL;
            free(p);}
        if (f->rchild == p) {
            f->rchild = NULL;
            free(p);}
    } else { bt = NULL; }}
BiTree search_birth(BiTree bt, char bir[])  //通过生日找到结点并返回
{BiTree l_result, r_result;
    if (!bt)
        return NULL;
    if (strcmp(bt->person.birth, bir) == 0)
        return bt;
    else {
        l_result = search_birth(bt->lchild, bir);
        r_result = search_birth(bt->rchild, bir);
        return l_result ? l_result : (r_result ? r_result : NULL);}}
void transport(BiTree bt)  //把家谱中所有人的生日传参给二维数组bir[][]
{if (bt) {strcpy(bir[(number)++], bt->person.birth);
        {transport(bt->rchild);
        transport(bt->lchild);}}}
void transfer(BiTree bt,  int n)//将二维数组升序排序并输出
{n = 1;
    char t[20]={};
    int i, j;
    BiTree p;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(bir[i], bir[j]) > 0) {
                strcpy(t, bir[i]);
                strcpy(bir[i], bir[j]);
                strcpy(bir[j], t);}
    for (i = 0; i < n; i++) {
        p = search_birth(bt, bir[i]);
        output(p);}
    puts("");}
void menu() {printf("1.从文件读取家族信息并显示\n2. 根据姓名查询，输出成员信息\n3. 给某个成员添加孩⼦\n""4. 修改某个成员信息\n""5. 删除某成员(连同其后代) \n6. 按出⽣生⽇日期增顺显示家族成员\n7. 退出系统\n");}
int main() {
    BiTree bt;
    int i,a = 0;
    printf("欢迎来到家谱管理系统！\n");
    bt = create();
    LL1:menu();
    printf("请输入你的选择:");
    scanf("%d", &i);
    switch (i) {
        case 1:
            display(bt);
            goto LL1;
        case 2:
            search(bt);
            goto LL1;
        case 3:
            add(bt);
            goto LL1;
        case 4:
            update(bt);
            goto LL1;
        case 5:
            delete(bt);
            goto LL1;
        case 6:
            transport(bt);
            transfer(bt,a);
            goto LL1;
        case 7:
            break;
        default:
            printf("你的输入有误，请重新输入！\n");
            goto LL1;}}


