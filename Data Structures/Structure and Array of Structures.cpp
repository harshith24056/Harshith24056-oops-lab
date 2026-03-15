#define MAX 20

struct Relative {
    int id;
    char name[50];
    int x, y;
    int start, end;
    int visited;
};

struct Relative r[MAX];
int n = 0;
