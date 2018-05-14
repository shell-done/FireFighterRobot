#ifndef INCLUDES_H
#define INCLUDES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

//Library Vector by Ed Mann
//https://eddmann.com/posts/implementing-a-dynamic-vector-array-in-c/
#include "vector.h"

typedef enum e_direction {
  UP, RIGHT, DOWN, LEFT
} e_direction;

typedef struct s_pos {
  int x,y;
} s_pos;

typedef struct s_node s_node;
struct s_node {
  char symb;
  s_pos pos;

  int G;
  float H;
  s_node* parent;
};

typedef struct s_robot {
  s_pos pos;
  int healthPoints;

  int hasExtinguisher;
  s_pos firePosition;

  s_node* path;
} s_robot;

typedef struct s_room {
  int sizeX, sizeY;
  s_node** nodes;

  s_pos startPos;
  s_pos extinguisherPos;

  s_robot robot;
} s_room;

#endif
