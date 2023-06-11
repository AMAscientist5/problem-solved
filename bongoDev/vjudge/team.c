#include <stdio.h>


int main() {
int problem, petya, vasya, tonya;
int solution = 0;

printf("give me some problem:");
scanf("%d", &problem);

for(int i = 1; i <= problem; i++){
scanf("%d%d%d", &petya, &vasya, &tonya);

 if( (petya == 1 && petya == vasya) || (petya == 1 && petya == tonya) ){
     solution = solution+1;
   }

else if( (tonya == 1 && tonya == vasya) || (tonya == 1 && tonya == petya) ){
    solution = solution+1;
}

}
printf("solution number is%d", solution);


  return 0;
}

