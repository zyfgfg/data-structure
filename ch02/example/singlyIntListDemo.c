#include "singlyIntNode.h"

int main(void) {
    SinglyIntNode *node = singlyIntNodeCreate();
    singlyIntNodeAdd(node, 10);
    singlyIntNodeAdd(node, 2);
    singlyIntNodeAdd(node, 4);
    singlyIntNodeAdd(node, 3);
    singlyIntNodeAdd(node, 6);
//    singlyIntNodeDisplay(node);
//    singlyIntNodeInsert(node, 2, 25);
    singlyIntNodeDisplay(node);
    singlyIntNodeInsert(node, 4, 100);
    singlyIntNodeDisplay(node);

    singlyIntNodeDestroy(node);
    node = NULL;

}


