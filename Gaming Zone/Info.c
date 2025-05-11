#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Prototype() {
// It's always a good idea to wright a function prototype.
void code_is_running();
// }

// Function defined() {
void code_is_running()
{
  printf("\n\tCode is Running !!!\n\n");
}
// }

// int main() {
int main()
{
  char go[5];
  char name[10];
  int age;
  char phone_no[15];
  int rating;
  int i = 0;
  FILE *yaml;
  FILE *txt;

  txt = fopen("count.txt", "r");
  if (txt != NULL)
  {
    fscanf(txt, "%d", &i);
    fclose(txt);
  }

  yaml = fopen("yaml.yaml", "a");
  if (yaml == NULL)
  {
    printf("nahi khuli yaml\n");
    exit(1);
  }

  // fprintf(yaml, "None\n");
  // fprintf(yaml, "\n this i ssecond None\n");
  do
  {
    printf("Should we move on: ");
    scanf("%s", go);

    if (strcmp(go, "no") != 0)
    {
      i++;
      printf("Enter Name: ");
      scanf("%s", name);
      printf("Enter Age: ");
      scanf("%d", &age);
      printf("Enter Phone.no: ");
      scanf("%s", phone_no);
      printf("Enter Rating: ");
      scanf("%d", &rating);

      fprintf(yaml,
              "\n%d:\n\tName: %s\n\tAge: %d\n\tPhone.no: %s\n\tRating: %d\n",
              i, name, age, phone_no, rating);
    }

  } while (strcmp(go, "no") != 0);
  fclose(yaml);

  txt = fopen("txt.txt", "w");
  fprintf(txt, "%d", i);
  fclose(txt);
  //
  // code_is_running();
  return 0;
}
// }
