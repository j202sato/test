#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){//if( (n & 1) == 0 )とn&1に括弧を付け加えることで、入力した値が偶数か奇数か判定することができる
    printf("%d は偶数です\n", n);
  }else{
    printf("%d は奇数です\n", n);
  }
  return 0;
}
