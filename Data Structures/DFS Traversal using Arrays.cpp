void dfs(int current,int time,int visited[],int count) {

    if(count > bestCount) {
        bestCount = count;

        for(int i=0;i<count;i++)
            bestPath[i] = currentPath[i];
    }

    for(int i=0;i<n;i++) {

        if(!visited[i]) {

            int travel = (int)ceil(graph[current][i]);
            int arrival = time + travel;

            if(arrival <= r[i].end) {

                if(arrival < r[i].start)
                    arrival = r[i].start;

                visited[i] = 1;
                currentPath[count] = i;

                dfs(i, arrival + VISIT_DURATION, visited, count + 1);

                visited[i] = 0;
            }
        }
    }
}
