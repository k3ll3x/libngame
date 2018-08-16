# libngame
Is a very simple library for C, that used ncurses. The goal is to keep it simple, and use ncurses for game dev in the console or whatever.


#Building the Library

Go to the ./lib folder and run buildLib.sh, it is going to compile the library and generate a '.a' file. That is the library.
The script is also going to compile the example program on the main directory (file.c).

#Methods/Functions

By reading the header file: ngame.h you can see all the implemented functions.

initcolors(); initializes the colors of ncurses
domram(i); Generate random number between 0 and i
rcolor(); returns a random number between 0 and 7
rchar(); returns a random ASCII char
endg(); disposal of the screen and waits for user input

Drawing functions:

putch(x,y,c); draws a character c on x & y position
puttxt(x,y,str); draws a string str on x & y position
line(x1,y1,x2,y2,c); draws a line from x1,y1 yo x2,y2 with character c
rectangle(x1,y1,x2,y2,c); draws a rectangle from x1,y1 yo x2,y2 with character c

This library is not finished yet....
