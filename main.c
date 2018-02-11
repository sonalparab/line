#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = 0;
  c.blue = MAX_COLOR;

  clear_screen(s);

  draw_line(250,0,250,500,s,c);
  draw_line(0,250,500,250,s,c);

  c.red = MAX_COLOR;
  c.green = 0;

  //bottom left 
  draw_line(125,0,0,125,s,c);
  draw_line(125,0,250,125,s,c);
  draw_line(125,250,250,125,s,c);
  draw_line(125,250,0,125,s,c);
  draw_line(0,125,250,125,s,c);
  draw_line(125,0,125,250,s,c);

  c.green = 20;
  c.blue = 147;
  
  //top right
  draw_line(375,250,250,375,s,c);
  draw_line(375,250,500,375,s,c);
  draw_line(375,500,500,375,s,c);
  draw_line(375,500,250,375,s,c);
  draw_line(312,312,437,437,s,c);
  draw_line(312,437,437,312,s,c);


  c.red = 0;
  c.green = 191;
  c.blue = MAX_COLOR;

  //top left
  draw_line(0,400,250,400,s,c);
  draw_line(250,400,0,250,s,c);
  draw_line(0,250,125,500,s,c);
  draw_line(125,500,250,250,s,c);
  draw_line(250,250,0,400,s,c);

  c.red = MAX_COLOR;
  c.green = 250;
  c.blue = 250;

  //bottom right
  draw_line(250,70,500,70,s,c);
  draw_line(500,70,375,250,s,c);
  draw_line(375,250,250,70,s,c);
  draw_line(250,180,500,180,s,c);
  draw_line(500,180,375,0,s,c);
  draw_line(375,0,250,180,s,c);

  display(s);
  save_extension(s, "lines.png");
}
