#include <stdio.h>
struct complex {
  double sb;
  double xb;
};
struct complex complexproduct(struct complex s1, struct complex s2);
int main() {
  struct complex c1, c2, c3;
  scanf("%lf+%lfi", &c1.sb, &c1.xb);
  scanf("%lf+%lfi", &c2.sb, &c2.xb);

  c3 = complexproduct(c1, c2);

  printf("c1*c2=%f+%fi\n", c3.sb, c3.xb);
  return 0;
}
struct complex complexproduct(struct complex s1, struct complex s2) {
  struct complex s;
  s.sb = s1.sb * s2.sb - (s1.xb * s2.xb);
  s.xb = s1.xb * s2.sb + s1.sb * s2.xb;
  return s;
}