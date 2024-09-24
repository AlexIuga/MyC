#include<stdio.h>
#include<math.h>
typedef struct{
  float x;
  float y;
}punto;

typedef struct{
  punto A;
  punto B;
  punto C;
}triangolo;

typedef struct{
  //?? coppia di punti
  punto NO;
  punto SE;
}rettangolo;

int main{
//triangolo e controllo
  triangolo t;
  float distab,distac,distcb;

  printf("inserire le cooerdinate dei punti del triangolo \n");
  scanf("%f",&t.A);
  scanf("%f",&t.B);
  scanf("%f",&t.C);

//distanze alla seconda
  distab=(t.A.x-t.B.x)(t.A.x-t.B.x)+(t.A.y-t.B.y)(t.A.y-t.B.y);
  distac=(t.A.x-t.C.x)(t.A.x-t.C.x)+(t.A.y-t.C.y)(t.A.y-t.C.y);
  distcb=(t.C.x-t.B.x)(t.C.x-t.B.x)+(t.C.y-t.B.y)(t.C.y-t.B.y);

  if(distab==distac || distac==distcb || distab==distcb)
    printf("il triangolo è isoscele \n");

  else if(distab==distac && distac==distcb)
    printf("il triangolo è equilatero \n");
  else
    printf("il triangolo è scaleno \n");

//rettangoli

  return 0;
}
