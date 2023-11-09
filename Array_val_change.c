#include <stdio.h>
 int main() {
  int s;
 printf("ENTER THE ARRAY SIZE");
scanf("%d", &s);
 int array[s];
for (int i = 0; i < s; i++) {
  scanf("%d", &array[i]);
     }
     for (int i = 0; i < s; i++) {
         printf(" %d", array[i]);
     }
  printf("\nwhat number you want too change");
     int p;
     scanf("%d", &p);
  printf("enter change number");
  int k;
     scanf("%d", &k);
 for (int i = 0; i < s; i++) {
  if (p == array[i])
  array[i] = k;
 printf("%d ", array[i]);
 }}
