#include <stdio.h>
#include <stdlib.h>

#define CAPACITY_STEP_SIZE 10

typedef struct {
    // 顺序表头的地址
    int *head;
    // 列表的长度
    int length;
    // 列表最大长度
    int capacity;
} SeqList;

SeqList *seqListCreate();

//SeqList seqListCreateDirect();

void seqListDestroy(SeqList *);

void seqListDisplay(const SeqList *seqList);

/**
 * 结尾追加元素
 * @param list
 * @param elem
 */
void seqListAdd(SeqList *list, int elem);

/**
 * 删除指定位置的数据
 * @param list
 * @param index
 * @return 1成功删除，0index不合法或者是超出范围
 */
int seqListDelete(SeqList *list, int index);

/**
 * 删除第一个遇到的元素，注意后续的元素依次前移，并且修改length
 * @param list
 * @param elem
 * @return 1成功删除，0元素没有查找到
 */
int seqListDeleteElem(SeqList *list, int elem);

/**
 * 将数据倒序
 * @param list
 */
void seqListRevert(SeqList *list);

/**
 * 向指定位置插入数据，后面的数据后移，如果插入的位置超过最大位置，则提示插入失败，返回0
 * @param list
 * @param index
 * @param elem
 * @return 插入成功返回1，失败返回0
 */
int seqListInsert(SeqList *list, int index, int elem);

/**
 * 更新指定位置的数据
 * @param list
 * @param index
 * @param elem
 * @return 更新成功返回1，传入的index不合法返回0
 */
int seqListUpdate(SeqList *list, int index, int elem);

/**
 * 查询指定位置的数字
 * @param list
 * @param index
 * @return index不合法返回0
 */
int seqListGet(SeqList *list, int index);

