#include <stdio.h>
#include <stdlib.h>
struct boxes
{
    int width,length,height;
};

int get_volume(struct boxes *b)//or we can write b[]
{
    int v;
v=b->width * b->height *b->length;
return v;
}

int is_lower_than_max_height(struct boxes *b)//or we can write b[]
{
if(b->height<41)
return 1;
else
return 0;
}

int main()
{
int n;
scanf("%d", &n);
struct boxes box[n];
for (int i = 0; i < n; i++) {
scanf("%d%d%d", &box[i].length, &box[i].width, &box[i].height);
}
for (int i = 0; i < n; i++) {
if (is_lower_than_max_height(box+i)) {
printf("%d\n", get_volume(box+i));//here, we are passing address
                                   //or by "&box[i]"
}
}
return 0;
}
