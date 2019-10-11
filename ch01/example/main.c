//
// Created by 李熠 on 2019/10/8.
//

#include "seqlist.h"
#define SIZE 5
#define ADDNUM 9
#define ADDPOS 3
#define DELPOS 3
#define SEARCHNUM 4
#define MODIFYNUM 27


//int *getIntList() {
//    int a = 5;
//    return &a;
//}

// int main(void) {
//     SeqList *seqList = seqListCreate();
//     seqListAdd(seqList, 14);
//     seqListAdd(seqList, 20);
//     seqListAdd(seqList, 15);
//     seqListAdd(seqList, 11);
//     seqListAdd(seqList, 13);
//     seqListAdd(seqList, 11);
//     seqListAdd(seqList, 12);
//     seqListAdd(seqList, 13);
//     seqListAdd(seqList, 16);
//     seqListAdd(seqList, 124);
//     seqListAdd(seqList, 124);
//     seqListAdd(seqList, 124);
//     seqListAdd(seqList, 124);
//     seqListAdd(seqList, 124);
//     seqListAdd(seqList, 124);
//     seqListAdd(seqList, 124);
//     seqListAdd(seqList, 124);
//     seqListAdd(seqList, 124);
//     seqListDisplay(seqList);
//     seqListDestroy(seqList);}
int main(void) {
    SeqList *seqlist = seqListCreate();

    for (int i = 0; i < SIZE; i++) {
        seqlist->head[i] = i + 1;
        seqlist->length++;
    }

    printf("顺序表中存储的元素分别是：\n");
    seqListDisplay(seqlist);

    printf("在顺序表的末尾插入元素：%d\n", ADDPOS);
    seqListAdd(seqlist, ADDPOS);
    seqListDisplay(seqlist);

    printf("删除第%d个元素\n", DELPOS);
    seqListDelete(seqlist, 3);
    seqListDisplay(seqlist);

    printf("删除第一个元素\n");
    seqListDeleteElem(seqlist, 1);
    seqListDisplay(seqlist);

    printf("数据倒序\n");
    seqListRevert(seqlist);
    seqListDisplay(seqlist);

    printf("在顺序表的第%d位插入元素%d\n", 2, 323);
    seqListInsert(seqlist, 323, 2);
    seqListDisplay(seqlist);

    printf("将%d更新为%d\n", 323, 23);
    seqListUpdate(seqlist, 323, 23);
    seqListDisplay(seqlist);

    printf("查找元素为%d的位置\n", 23);
    int pos=seqListGet(seqlist,23);
    printf("元素%d的位置为第%d个\n", 23, pos);

    printf("内存空间为%d  数组长度为%d\n", seqlist->capacity, seqlist->length);

    free(seqlist->head);
    seqlist->head = NULL;

    return 0;
}


//    int *p = getIntList();
//    printf("%d\n", *p);
//    *p = 10;
//    printf("*p = %d\n", *p);
//    printf("p = %p\n", p);
//    int *p2 = getIntList();
//    printf("*p2 = %d\n", *p2);
//    printf("p2 = %p\n", p2);
//    *p2 = 15;
//    printf("*p = %d\n", *p);
//    printf("p = %p\n", p);
//    printf("*p2 = %d\n", *p2);
//    printf("p2 = %p\n", p2);
//    printf("*p = %d\n", *p);
//    printf("p = %p\n", p);




