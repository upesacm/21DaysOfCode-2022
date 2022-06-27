// 21doc, day 2, Shiva
void update(int *a,int *b) {
    // Complete this function
    int x;
    int y; // x is addition y is subs
    x = *a + *b;
    y = *a - *b;
    
    *a = x;
    if (y<0)
    {
        y=-y;
    }
    *b = y;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
