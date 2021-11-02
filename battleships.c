#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool player1 = true;
bool player2 = false;
char p1board[9][18];
char p2board[9][18];
char hor[9] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
char ships[5][20] = {"Carrier", "Battleship", "Destroyer", "Submarine", "Patrol Boat"};
char shipKeys[5] = {'c', 'b', 'd', 's', 'p'};

void setup(){
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 18; j++){
      p1board[i][j] = ' ';
      p2board[i][j] = ' ';
    }
  }
}

int boardCheck(const char* pos, const char* ship, const int player){

  int y;
  int x = pos[2] - '0';
  
  for(int i = 1; i < 9; i++){
    if(pos[0] == hor[i]){
      y = i;
      break;
    }else{
      if(i == 8){
        return 0;
      }
    }
  }

  if(x < 1 || x > 8){
    return 0;
  }

  if(pos[4] == 'H'){
    if(player == 1){
      if(strcmp(ship, "Carrier") == 0){
        for(int i = x; i <= (x+4); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Battleship") == 0){
        for(int i = x; i <= (x+3); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Destroyer") == 0){
        for(int i = x; i <= (x+2); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Submarine") == 0){
        for(int i = x; i <= (x+1); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Patrol Boat") == 0){
        for(int i = x; i <= (x+1); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }
    }else{
      if(strcmp(ship, "Carrier") == 0){
        for(int i = x; i <= (x+4); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Battleship") == 0){
        for(int i = x; i <= (x+3); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Destroyer") == 0){
        for(int i = x; i <= (x+2); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Submarine") == 0){
        for(int i = x; i <= (x+1); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Patrol Boat") == 0){
        for(int i = x; i <= (x+1); i++){
          if((i*2) > 16){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[y][i*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }
    }
  }else if(pos[4] == 'V'){
    if(player == 1){
      if(strcmp(ship, "Carrier") == 0){
        for(int i = y; i <= (y+4); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Battleship") == 0){
        for(int i = y; i <= (y+3); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Destroyer") == 0){
        for(int i = y; i <= (y+2); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Submarine") == 0){
        for(int i = y; i <= (y+1); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Patrol Boat") == 0){
        for(int i = y; i <= (y+1); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p1board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }
    }else{
      if(strcmp(ship, "Carrier") == 0){
        for(int i = y; i <= (y+4); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Battleship") == 0){
        for(int i = y; i <= (y+3); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Destroyer") == 0){
        for(int i = y; i <= (y+2); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Submarine") == 0){
        for(int i = y; i <= (y+1); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }else if(strcmp(ship, "Patrol Boat") == 0){
        for(int i = y; i <= (y+1); i++){
          if(i > 8){
            return 0;
          }
          for(int j = 0; j < 5; j++){
            if(p2board[i][x*2] == shipKeys[j]){
              return 0;
            }
          }
        }
      }
    }
  }else{
    return 0;
  }


  return 1;
}

void setplayersBoard(const char vertical, const char horizontal, const char orientation, const char* ship, int player) {

  int y;
  for(int i = 1; i < 9; i++){
    if(vertical == hor[i]){
      y = i;
      break;
    }
  }

  int x = horizontal - '0';

  if(player == 1){
    if(orientation == 'H'){
      if(strcmp(ship, "Carrier") == 0){
        for(int i = x; i <= (x+4); i++){
          p1board[y][i*2] = 'c';
        }
      }else if(strcmp(ship, "Battleship") == 0){
        for(int i = x; i <= (x+3); i++){
          p1board[y][i*2] = 'b';
        }
      }else if(strcmp(ship, "Destroyer") == 0){
        for(int i = x; i <= (x+2); i++){
          p1board[y][i*2] = 'd';
        }
      }else if(strcmp(ship, "Submarine") == 0){
        for(int i = x; i <= (x+1); i++){
          p1board[y][i*2] = 's';
        }
      }else if(strcmp(ship, "Patrol Boat") == 0){
        for(int i = x; i <= (x+1); i++){
          p1board[y][i*2] = 'p';
        }
      }
    }else{
      if(strcmp(ship, "Carrier") == 0){
        for(int i = y; i <= (y+4); i++){
          p1board[i][x*2] = 'c';
        }
      }else if(strcmp(ship, "Battleship") == 0){
        for(int i = y; i <= (y+3); i++){
          p1board[i][x*2] = 'b';
        }
      }else if(strcmp(ship, "Destroyer") == 0){
        for(int i = y; i <= (y+2); i++){
          p1board[i][x*2] = 'd';
        }
      }else if(strcmp(ship, "Submarine") == 0){
        for(int i = y; i <= (y+1); i++){
          p1board[i][x*2] = 's';
        }
      }else if(strcmp(ship, "Patrol Boat") == 0){
        for(int i = y; i <= (y+1); i++){
          p1board[i][x*2] = 'p';
        }
      }
    }
  }else{
    if(orientation == 'H'){
      if(strcmp(ship, "Carrier") == 0){
        for(int i = x; i <= (x+4); i++){
          p2board[y][i*2] = 'c';
        }
      }else if(strcmp(ship, "Battleship") == 0){
        for(int i = x; i <= (x+3); i++){
          p2board[y][i*2] = 'b';
        }
      }else if(strcmp(ship, "Destroyer") == 0){
        for(int i = x; i <= (x+2); i++){
          p2board[y][i*2] = 'd';
        }
      }else if(strcmp(ship, "Submarine") == 0){
        for(int i = x; i <= (x+1); i++){
          p2board[y][i*2] = 's';
        }
      }else if(strcmp(ship, "Patrol Boat") == 0){
        for(int i = x; i <= (x+1); i++){
          p2board[y][i*2] = 'p';
        }
      }
    }else{
      if(strcmp(ship, "Carrier") == 0){
        for(int i = y; i <= (y+4); i++){
          p2board[i][x*2] = 'c';
        }
      }else if(strcmp(ship, "Battleship") == 0){
        for(int i = y; i <= (y+3); i++){
          p2board[i][x*2] = 'b';
        }
      }else if(strcmp(ship, "Destroyer") == 0){
        for(int i = y; i <= (y+2); i++){
          p2board[i][x*2] = 'd';
        }
      }else if(strcmp(ship, "Submarine") == 0){
        for(int i = y; i <= (y+1); i++){
          p2board[i][x*2] = 's';
        }
      }else if(strcmp(ship, "Patrol Boat") == 0){
        for(int i = y; i <= (y+1); i++){
          p2board[i][x*2] = 'p';
        }
      }
    }
  }
}

void draw(){
  char label = 'A';
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 18; j++){

      if(i == 0){
        if(j == 0){
          printf("%c", ' ');
        }else if(j == 17){
          printf("\n");
        }else if(j % 2 == 0){
          printf("%d", j/2);
        }else{
          printf(" ");
        }
      }

      else if(j == 0){
        printf("%c", label);
      }else if(j == 17){
        printf("%c\n", '|');
      }else if(j % 2 == 1){
        printf("%c", '|');
      }else{
        if(player1){
          if(p2board[i][j] == 'm'){
            printf("%c", '0');
          }else if(p2board[i][j] == 'h'){
            printf("%c", 'X');
          }else{
            printf("%c", ' ');
          }
          //printf("%c", p2board[i][j]);
        }else{
          if(p1board[i][j] == 'm'){
            printf("%c", '0');
          }else if(p1board[i][j] == 'h'){
            printf("%c", 'X');
          }else{
            printf("%c", ' ');
          }
          //printf("%c", p1board[i][j]);
        }
      }
    }

    if(i != 0){
      label++;
    }
  }
}

int string_compare(const char* w1, const char* w2, int len){
  const char *p1 = w1;
  const char *p2 = w2;
  int x = 0;
  for(int i = 0; i < len; i++){
    if(*p1 == '\0' || *p2 == '\0'){
      break;
    }else if(*p1 != *p2){
      x++;
    }
    p1++;
    p2++;
  }
  return x;
}

int fire(const char vertical, const char horizontal, bool player){

  if(vertical == '\0' || vertical == '\n' || vertical == ' ' || horizontal == '\0' || horizontal == '\n' || horizontal == ' '){
    return 0;
  }

  int y;
  for(int i = 1; i < 9; i++){
    if(vertical == hor[i]){
      y = i;
      break;
    }else{
      if(i == 8){
        return 0;
      }
    }
  }

  int x = horizontal - '0';
  if(x < 1 || x > 8){
    return 0;
  }

  if(player == player1){
    if(p2board[y][x*2] == 'm' || p2board[y][x*2] == 'h'){
      return -1;
    }else{
      return 1;
    }
  }else{
    if(p1board[y][x*2] == 'm' || p1board[y][x*2] == 'h'){
      return -1;
    }else{
      return 1;
    }
  }

}

char* checkDestruction(const char vertical, const char horizontal, bool player){

  int y;
  for(int i = 1; i < 9; i++){
    if(vertical == hor[i]){
      y = i;
      break;
    }
  }

  int x = horizontal - '0';

  int c_count = 0;
  int b_count = 0;
  int d_count = 0;
  int s_count = 0;
  int p_count = 0;
  for(int i = 0; i < 9; i++){
    for(int j = 0; j < 18; j++){
      if(player == player1){
        if(p2board[i][j] == 'c'){
          c_count++;
        }else if(p2board[i][j] == 'b'){
          b_count++;
        }else if(p2board[i][j] == 'd'){
          d_count++;
        }else if(p2board[i][j] == 's'){
          s_count++;
        }else if(p2board[i][j] == 'p'){
          p_count++;
        }
      }else{
        if(p1board[i][j] == 'c'){
          c_count++;
        }else if(p1board[i][j] == 'b'){
          b_count++;
        }else if(p1board[i][j] == 'd'){
          d_count++;
        }else if(p1board[i][j] == 's'){
          s_count++;
        }else if(p1board[i][j] == 'p'){
          p_count++;
        }
      }
    }
  }

  if(player == player1) {
    if(p2board[y][x*2] == 'c'){
      if(c_count == 1){
        p2board[y][x*2] = 'h';
        return "We have sunk your Carrier!";
      }else{
        p2board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else if(p2board[y][x*2] == 'b'){
      if(b_count == 1){
        p2board[y][x*2] = 'h';
        return "We have sunk your Battleship!";
      }else{
        p2board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else if(p2board[y][x*2] == 'd'){
      if(d_count == 1){
        p2board[y][x*2] = 'h';
        return "We have sunk your Destroyer!";
      }else{
        p2board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else if(p2board[y][x*2] == 's'){
      if(s_count == 1){
        p2board[y][x*2] = 'h';
        return "We have sunk your Submarine!";
      }else{
        p2board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else if(p2board[y][x*2] == 'p'){
      if(p_count == 1){
        p2board[y][x*2] = 'h';
        return "We have sunk your Patrol Boat!";
      }else{
        p2board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else{
      p2board[y][x*2] = 'm';
      return "You have missed!";
    }
  }else{
    if(p1board[y][x*2] == 'c'){
      if(c_count == 1){
        p1board[y][x*2] = 'h';
        return "We have sunk your Carrier!";
      }else{
        p1board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else if(p1board[y][x*2] == 'b'){
      if(b_count == 1){
        p1board[y][x*2] = 'h';
        return "We have sunk your Battleship!";
      }else{
        p1board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else if(p1board[y][x*2] == 'd'){
      if(d_count == 1){
        p1board[y][x*2] = 'h';
        return "We have sunk your Destroyer!";
      }else{
        p1board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else if(p1board[y][x*2] == 's'){
      if(s_count == 1){
        p1board[y][x*2] = 'h';
        return "We have sunk your Submarine!";
      }else{
        p1board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else if(p1board[y][x*2] == 'p'){
      if(p_count == 1){
        p1board[y][x*2] = 'h';
        return "We have sunk your Patrol Boat!";
      }else{
        p1board[y][x*2] = 'h';
        return "We have hit the target!";
      }
    }else{
      p1board[y][x*2] = 'm';
      return "You have missed!";
    }
  }
}

int winCheck(){

  int count = 0;
  if(player1){
    for(int i = 0; i < 9; i++){
      for(int j = 0; j < 18; j++){
        if(p2board[i][j] == 'c' || p2board[i][j] == 'b' || p2board[i][j] == 'd' || p2board[i][j] == 's' || p2board[i][j] == 'p'){
          count++;
        }
      }
    }
  }else{
    for(int i = 0; i < 9; i++){
      for(int j = 0; j < 18; j++){
        if(p1board[i][j] == 'c' || p1board[i][j] == 'b' || p1board[i][j] == 'd' || p1board[i][j] == 's' || p1board[i][j] == 'p'){
          count++;
        }
      }
    }
  }

  return count;
}

int main() {

  setup();
  char pos[6];

  for(int i = 1; i <= 2; i++){
    printf("Player %d, please set up your ships (y, x, orientation)\n", i);
    for(int j = 0; j < 5; j++){
      printf("%s: ", ships[j]);
      fgets(pos, 7, stdin);
      int check = boardCheck(pos, ships[j], i);
      if(check == 0){
        printf("Invalid ship configuration\n");
        j--;
      }else{
        setplayersBoard(pos[0], pos[2], pos[4], ships[j], i);
      }
    }
    if(i == 1){
      printf("\n\n");
    }else{
      printf("\n");
    }
  }
  printf("All boats set up, Player 1 can now strike.\n\n");

  char input[10];
  while(fgets(input, 10, stdin)){
     bool fireflag = false;

     for(int i = 0; i < 10; i++){
		    if(input[i] == '\n'){
			     input[i] = '\0';
			     break;
		    }
	    }

      if(string_compare(input, "fire", 4) == 0){
        if(player1){
          if(strlen(input) > 8 || input[4] != ' ' || input[6] != ' '){
            fireflag = false;
            printf("Invalid coordinates\n");
            getchar();
          }else{
            int a = fire(input[5], input[7], player1);
            if(a == 0){
              fireflag = false;
              printf("Invalid coordinates\n");
            }else if(a == -1){
              fireflag = false;
              printf("You have already fired at this location\n");
            }else{
              fireflag = true;
              printf("\n%s\n\n", checkDestruction(input[5], input[7], player1));
            }
          }

        }else{
          if(strlen(input) > 8 || input[4] != ' ' || input[6] != ' '){
            fireflag = false;
            printf("Invalid coordinates\n");
            getchar();
          }else{
            int b = fire(input[5], input[7], player2);
            if(b == 0){
              fireflag = false;
              printf("Invalid coordinates\n");
            }else if(b == -1){
              fireflag = false;
              printf("You have already fired at this location\n");
            }else{
              fireflag = true;
              printf("\n%s\n\n", checkDestruction(input[5], input[7], player2));
            }
          }
        }
      }else if(strcmp(input, "exit") == 0){
		     break;
	    }else if(strcmp(input, "shots") == 0){
        fireflag = false;
        printf("\n");
        draw();
        printf("\n");
      }else{
        fireflag = false;
        printf("Unrecognised command\n\n");
      }

      int win = winCheck();
      if(win == 0){
        if(player1){
          printf("Player 1 wins!\n");
          break;
        }else{
          printf("Player 2 wins!\n");
          break;
        }
      }

      if(fireflag){
        if(player1){
          player2 = true;
          player1 = false;
        }else{
          player1 = true;
          player2 = false;
        }
      }

      if(fireflag){
        if(player1){
          printf("Player 1's turn\n\n");
        }else{
          printf("Player 2's turn\n\n");
        }
      }

	}

  return 0;
}
