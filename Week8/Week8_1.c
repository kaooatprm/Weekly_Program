//โจทย์ข้อ 76
#include <stdio.h>
int main() {
  int m , n , i , j , a[100][100], b[100][100], sum[100][100];
  scanf("%d %d", &m , &n);

  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j) {
      scanf("%d", &a[i][j]);
    }

  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j) {
      scanf("%d", &b[i][j]);
    }

  for (i = 0; i < m; ++i)
    for (j = 0; j < n; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  for (i = 0; i < m; ++i){
    for (j = 0; j < n; ++j) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}