#include <stdio.h>

#define MAX_NUMBER 1001

struct dd_result {
    int number;  
    int depth;
};

int forest[MAX_NUMBER] = {0};

void make_tree(int v) {
    forest[v] = v;
}

int find_depth(int v, int depth) {
    if (v == forest[v]) {
        return depth;
    }
    return find_depth(forest[v], depth + 1);
}

void graft(int r, int v) {
    forest[r] = v;
}

int main() {

    struct dd_result results[MAX_NUMBER];
    int count = 0;
    int stop = 0;
    while(stop == 0) {
        char operation;
        scanf("%s", &operation);
        switch (operation) {
            case 'M': {
                int node_number = 0;
                scanf("%d", &node_number);
                make_tree(node_number);
                break;
            }
            case 'G': {
                int child_number = 0;
                int parent_number = 0;
                scanf("%d %d", &child_number, &parent_number);
                graft(child_number, parent_number);	
                break;
            }
            case 'F': {
                int node_number = 0;
                scanf("%d", &node_number);
                int depth = find_depth(node_number, 0);
                struct dd_result result;
                result.number = node_number;
                result.depth = depth;
                results[count] = result;
                count++;
                break;
            }
            default: {
                for(int i = 0; i < count; i++) {
                   struct dd_result result = results[i];
                   printf("%d %d\n", result.number, result.depth);
                }
                stop = 1;
                break;
            }
        }
    }
}
