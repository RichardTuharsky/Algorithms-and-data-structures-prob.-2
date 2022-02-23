#include <stdio.h>
#include <stdlib.h>
#define ML (ATOM*)malloc(sizeof(ATOM))

typedef struct atom{
  int h;
  struct atom *nasl;
}ATOM;

//ini
//vloz
//odober
//test
//hodnota
//hodnota

void ini (ATOM **r){
  *r = ML;
  (*r) -> nasl = NULL;
}

void odober(ATOM **r){
  if(!test(*r)){
    ATOM *pom = *r;
    *r = (r) - > nasl;
    free(void*(pom));
  }
}
int test(ATOM *r){
  return r -> nasl == NULL;
}
void odstran(ATOM **r){
  while(!test(*r))
        odober(r);
  free((void*(*r));
  *r = NULL;
}
void vloz (ATOM *r, int x){
  ATOM *pom = r;
  while(pom -> nasl != NULL)
        pom = pom -> nasl;
  pom -> h = x;
  pom -> nasl = ML;
  pom -> nasl -> nasl == NULL;

}

void hodnota (ATOM *r, int *x){
  if(!test(r)){
    *x = r -> h;
  }
}


int main()
{
  ATOM *rad_a;//smernik na zaciatok radu
  char s[] = "ahoj";
  int i;
  ini(&rad_a);
  for (i = 0; i < strlen(s); i++)
      vloz(rad_a,s[i]);
  int c;
  while(!test(rad_a)){
    hodnota(rad_a, &c);
    printf("%c\n",c);
    odober(&rad_a);
  }
  return 0;
}




/*
typedef struct {
  char s[26];
  int vek;
  int a;
}OSOBA;

typedef struct atom{
  int h;
  struct atom *nasl;
}ATOM;

void ini(OSOBA **z){
  return z == NULL;
}
int test (ATOM *z){
  if (!test(z)){
    return z == NULL;
  }
}

void vloz (ATOM **z, OSOBA x){
  ATOM *p;
  p = ML;
  p -> h = x;
  p -> nasl = *z;
  *z = p;
}

void odober (ATOM **z){
  if (!test(z)){
    (*z) -> (nasl - 1);
    free((void*)p);
  }
}

void hodnota (ATOM *z, CLOVEK *x){
  if (!test(*z)){
    *x = *z -> h;
  }
}

void odstran(ATOM **z){
  if (!test(*z)){
    odstran(*z);
  }
  free((void*)p);
  *z = NULL;
}

int main()
{
  FILE *f;
  int per;
  zas = ini(zas);
  int i = 0;
  f = fopen("input.txt","w");
  fscanf(f,"%d %s\n", &per);
  OSOBA o;
  while(!feof(f){
    fscanf("%d %s\n", o[i].s, o[i].vek);
    i++;
  }
  fclose(f);

  while(!test(zas)){

  }
}
*/
