#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  //if( n & 1 == 0 )という条件式について、比較演算子==のほうが&より優先されてうまく計算されないため、
  //if( (n & 1) == 0 )として優先順位をつけて計算結果が正しく条件判定に使われるようにした。
  if( (n & 1) == 0 ){
    printf("%d は偶数です\n", n);
  }
  return 0;
}
