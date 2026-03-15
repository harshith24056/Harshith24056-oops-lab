double graph[MAX][MAX];

void buildGraph() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            graph[i][j] = dist(r[i].x, r[i].y, r[j].x, r[j].y);
        }
    }
}
