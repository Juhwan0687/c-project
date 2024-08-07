#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

#define WIDTH 20
#define HEIGHT 10

#define STOP 0
#define LEFT 1
#define RIGHT 2
#define UP 3
#define DOWN 4

int x, y, fruitX, fruitY, score = 0;
int tailX[100], tailY[100];
int length;
int dir;
int mineX[900], mineY[900], mines;

void setup() {
  int i;
  char yn;
  printf("Q : 먹이 M : 지뢰\n");
  printf("게임을 시작하시겠습니까? (Y/N) : ");
  scanf("%c", &yn);
  getchar();

  if (toupper(yn) == 'Y') {
    for (i = 3; i >= 1; i--) {
      printf("%d초 후 게임을 시작합니다.\n", i);

      Sleep(1000);

      system("cls");
    }
  } else {
    exit(0);
  }

  x = WIDTH / 2;
  y = HEIGHT / 2;

  fruitX = rand() % WIDTH;
  fruitY = rand() % HEIGHT;

  score = 0;
  dir = STOP;
  length = 0;
}

void draw() {
  int i, j, k;
  system("cls");
  for (i = 0; i < WIDTH + 2; i++)
    printf("#");
  printf("\n");

  for (i = 0; i < HEIGHT; i++) {
    for (j = 0; j < WIDTH; j++) {

      if (j == 0)
        printf("#");
      if (i == y && j == x)
        printf("0"); //뱀 머리
      else if (i == fruitY && j == fruitX)
        printf("Q"); //먹이
      else {
        int print = 0;
        int print2 = 0;
        for (k = 0; k < length; k++) {
          if (tailX[k] == j && tailY[k] == i) {
            printf("o"); //뱀 꼬리
            print = 1;
          }
        }
        for (k = 0; k < mines; k++) {
          if (j == mineX[k] && i == mineY[k]) {
            printf("M"); //지뢰(k = 0; k < mines; k++)
            print2 = 1;
          }
        }
        if (print == 0 && print2 == 0)
          printf(" ");
      }
      if (j == WIDTH - 1)
        printf("#");
    }
    printf("\n");
  }

  for (i = 0; i < WIDTH + 2; i++)
    printf("#");
  printf("\n");
  printf("Score: %d\n", score);
}

void input() {
  if (_kbhit()) {
    switch (_getch()) {
    case 'a':
      dir = LEFT;
      break;
    case 'd':
      dir = RIGHT;
      break;
    case 'w':
      dir = UP;
      break;
    case 's':
      dir = DOWN;
      break;
    }
  }
}

void logic() {
  int i;

  int prevX = tailX[0];
  int prevY = tailY[0];
  int prev2X, prev2Y;

  tailX[0] = x;
  tailY[0] = y;

  for (i = 1; i < length; i++) {
    prev2X = tailX[i];
    prev2Y = tailY[i];

    tailX[i] = prevX;
    tailY[i] = prevY;

    prevX = prev2X;
    prevY = prev2Y;
  }

  switch (dir) {
  case LEFT:
    x--;
    break;
  case RIGHT:
    x++;
    break;
  case UP:
    y--;
    break;
  case DOWN:
    y++;
    break;
  default:
    break;
  }

  if (x >= WIDTH)
    x = 0;
  else if (x < 0)
    x = WIDTH - 1;
  if (y >= HEIGHT)
    y = 0;
  else if (y < 0)
    y = HEIGHT - 1;

  for (i = 0; i < length; i++) {
    if (tailX[i] == x && tailY[i] == y)
      exit(0);
  }

  if (x == 0 || x == WIDTH - 1 || y == 0 || y == HEIGHT - 1) {
    exit(0);
  }

  if (x == fruitX && y == fruitY) {
    score += 10;

    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    mineX[mines] = rand() % WIDTH;
    mineY[mines] = rand() % HEIGHT;
    while (1) 
      if (mineX[mines] == x && mineY[mines] == y) {
        mineX[mines] = rand() % WIDTH;
        mineY[mines] = rand() % HEIGHT;
      } else if (mineX[mines] == fruitX && mineY[mines] == fruitY) {
        mineX[mines] = rand() % WIDTH;
        mineY[mines] = rand() % HEIGHT;
      } else {
        break;
      }
    mines++;
    length++;
    Sleep(100);
  }
  for (i = 0; i < mines; i++) {
    if (x == mineX[i] && y == mineY[i]) {
      exit(0);
    }
  }
}


int main() {
  srand(time(NULL));

  system("mode con cols=32 lines=15 | title Bouncing_Snake");

  setup();

  while (1) {
    draw();
    Sleep(100);
    input();
    Sleep(100);
    logic();
    Sleep(100);
  }
  return 0;
}

