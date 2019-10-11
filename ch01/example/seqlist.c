#include "seqlist.h"

SeqList *seqListCreate() {
    SeqList *seqListAddr = (SeqList *) malloc(sizeof(SeqList));
    seqListAddr->head = (int *) calloc(CAPACITY_STEP_SIZE, sizeof(int));
    seqListAddr->length = 0;
    seqListAddr->capacity = CAPACITY_STEP_SIZE;
    return seqListAddr;
}

void seqListDestroy(SeqList *list) {
    int *p = list->head;
    free(list);
    free(p);
}



SeqList seqListCreateDirect() {
    SeqList seqList;
    seqList.head = (int *) calloc(CAPACITY_STEP_SIZE, sizeof(int));
    seqList.length = 0;
    seqList.capacity = CAPACITY_STEP_SIZE;
    printf("inside = %p\n", &seqList);
    return seqList;
}

void seqListDisplay(const SeqList *seqList) {
    for (int i = 1; i < seqList->length; i++) {
        printf("[%d]=%d", i, seqList->head[i]);
    }putchar('\n');
}
/**
 * 结尾追加元素
 * @param list
 * @param elem
 */
void seqListAdd(SeqList *list, int elem) {
    //插入位置判断，取值范围为0～length
    // if (elem > list->length  || elem < 0) {
    //     printf("插入位置有误\n");
    //     return 1;
    // }

    //重新分配内存
    if (list->length == list->capacity) {
        int *temp = (int *)realloc(list->head, (list->capacity + 1) * sizeof(int));

        if (!temp) {
            printf("内存分配失败！\n");
             // return 1;
        }

        list->head = temp;
        list->capacity += 1;
        list->length+=1;
    }
// for (int i = list->length - 1; i >= elem ; i--) {
//         list->head[i + 1] = list->head[i];
    // }
    list->head[list->length] = elem;//元素插入空出的位置

    list->length++;//表长度+1
    // return *list;
}
/**
 * 删除指定位置的数据
 * @param list
 * @param index
 * @return 1成功删除，0index不合法或者是超出范围
 */
int seqListDelete(SeqList *list, int index){
//删除位置判断，取值范围为0～length-1
    if (index >= list->length || index< 0) {
        printf("删除位置有误\n");
    
    return 1;}

    //将删除位置后续元素依次前移
    for (int i = index ; i < list->length - 1 ; i++) {
        list->head[i] = list->head[i + 1];
    }
    list->length--;//表长度-1
return 1;
}

/**
 * 删除第一个遇到的元素，注意后续的元素依次前移，并且修改length
 * @param list
 * @param elem
 * @return 1成功删除，0元素没有查找到
 */
int seqListDeleteElem(SeqList *list, int elem){
if (elem >= list->length || elem< 0) {
        printf("没有查找到\n");
    // return 1;
    }
        //将删除位置后续元素依次前移
    for (int i = 0 ; i < list->length - 1 ; i++) 
    {list->head[i] = list->head[i + 1];}
    list->length--;//表长度-1
return 1;
}
/**
 * 将数据倒序
 * @param list
 */
void seqListRevert(SeqList *list){
    for(int i=0;i<list->length/2;i++){
        int temp=*list->head;
        list->head[i]=list->head[list->length-i];
        list->head[list->length-i]=temp;
        // list->head++;
    
    }


}

/**
 * 向指定位置插入数据，后面的数据后移，如果插入的位置超过最大位置，则提示插入失败，返回0
 * @param list
 * @param index
 * @param elem
 * @return 插入成功返回1，失败返回0
 */
int seqListInsert(SeqList *list, int index, int elem){
    //插入位置判断，取值范围为0～length
    if (elem > list->length  || elem < 0) {
        printf("插入位置有误\n");
    return 1;}

    //重新分配内存
    if (list->length == list->capacity) {
        int *temp = (int *)realloc(list->head, (list->capacity + 1) * sizeof(int));

        if (!temp) {
            printf("插入失败\n");
        }

        list->head = temp;
        list->capacity += 1;
    return 1;
}

    //插入位置及以后的元素依次后移一位
    for (int i = list->length - 1; i >= elem ; i--) {
        list->head[i + 1] = list->head[i];
    }

    list->head[elem] = index;//元素插入空出的位置

    list->length++;//表长度+1
    return 1;
}
/**
 * 更新指定位置的数据
 * @param list
 * @param index
 * @param elem
 * @return 更新成功返回1，传入的index不合法返回0
 */
int seqListUpdate(SeqList *list, int index, int elem){
int pos = seqListGet(list, index);
    list->head[pos] = elem;
    return 1;
}

/**
 * 查询指定位置的数字
 * @param list
 * @param index
 * @return index不合法返回0
 */
int seqListGet(SeqList *list, int index)
{    //顺序查找
    for (int i = 0; i < list->length; i++) {
        if (list->head[i] == index) {
            return i;
        }
    }

    return 1;
}



// int main(void) {
//     SeqList seqList = seqListCreateDirect();

//     for (int i = 0; i < 5; i++) {
//         *list->head = i + 1;
//         list->length++;
//         list->head++;
//     }
// }



