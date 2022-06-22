#include <stdio.h>

int main() {
  int T;    // no. of test cases
  scanf("%d", &T);
  printf("\n");

  for (int i = 0; i < T; i++) {
    char str[401];
    scanf("%s", str);
    
    int issuperASCII = 1;

    int idx = 0, count = 0;
    char ch = str[idx];
    count++;
    while (ch != '\0') {
      if (str[idx + 1] != '\0' && str[idx + 1] == ch) {
        count++;
        idx++;
        ch = str[idx];

      } else {
        if (count != ch - 96) {
          printf("No\n");
          issuperASCII = 0;
          break;
        }
        count = 1;
        idx++;
        ch = str[idx];
      }
    }

    if (issuperASCII) {
      printf("Yes\n");
    }
  }

  return 0;
}