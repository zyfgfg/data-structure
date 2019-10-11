//
// Created by 李熠 on 2019/10/10.
//
#include "singlyIntNode.h"

SinglyIntNode *singlyIntNodeCreate() {
    SinglyIntNode *rlt = (SinglyIntNode *) malloc(sizeof(SinglyIntNode));

    rlt->value = 0;
    rlt->next = NULL;
    return rlt;
}

void singlyIntNodeAdd(SinglyIntNode *head, int elem) {
    SinglyIntNode *newNode = singlyIntNodeCreate();
    SinglyIntNode *lastNode = head;
    while (lastNode->next) {
        lastNode = lastNode->next;
    }

    newNode->value = elem;
    lastNode->next = newNode;
    head->value++;
}

void singlyIntNodeDisplay(const SinglyIntNode *head) {
    printf("singly node size=%d\n", head->value);
    SinglyIntNode *curNode = head->next;
    int count = 0;
    while (curNode != NULL) {
        printf("[%d]=%d ", count++, curNode->value);
        curNode = curNode->next;
    }
    printf("\n");
}

void singlyIntNodeDestroy(SinglyIntNode *head) {
    SinglyIntNode *curNode = head;
    SinglyIntNode *temp;
    while (curNode != NULL) {
        temp = curNode->next;
        free(curNode);
        curNode = temp;
    }
}

int singlyIntNodeInsert(SinglyIntNode *head, int index, int elem) {
    if (index < 0 || index >= head->value) {
        printf("index is illegal!");
        return 0;
    }

    SinglyIntNode *beforeIndexNode = head;
    for (int i = 0; i < index; ++i) {
        beforeIndexNode = beforeIndexNode->next;
    }

    SinglyIntNode *newNode = singlyIntNodeCreate();
    newNode->next = beforeIndexNode->next;
    newNode->value = elem;
    beforeIndexNode->next = newNode;
    head->value++;


}

