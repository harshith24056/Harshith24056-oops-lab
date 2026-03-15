void sortRelatives() {

    struct Relative temp;

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {

            if(r[i].start > r[j].start) {

                temp = r[i];
                r[i] = r[j];
                r[j] = temp;
            }
        }
    }

    printf("Relatives sorted by availability time.\n");
}
