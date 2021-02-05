#include <stdio.h>

int main() {
  double x,y;
    scanf("%lf %lf",&x,&y);
 
    
    switch(x>0){
        case 1:
            switch (y>0){
                case 1: printf("1");break;
                case 0: printf("4");break;
            }
            break;
        case 0:
             switch (y<0){
                  case 1: printf("3");break;
                  case 0:printf("2");break;
             }
             }
                    
  return 0;
}