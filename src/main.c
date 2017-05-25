#include <stdio.h>
#include <string.h>
#include <ncurses.h>

#include "plot/plot.h"
#include "tasks/tasks.h"
#include "gui/gui.h"

int main(void) {	

  // Declare vars
  int ch, quit = 0;
  char window_selection[20]; sprintf(window_selection, "menuBar");
  char menuBar_selection[20]; sprintf(menuBar_selection, "File");
  char menuWindow_selection[20]; sprintf(menuWindow_selection, "None");
  char taskEcho[20]; sprintf(taskEcho, "NULL");

  // Begin curses session
  initializeCurses();

  // Construct main workspace
  createWorkspace(window_selection, menuBar_selection, menuWindow_selection);

  // Input loop until quit
  while ( quit == 0 ) {

    // Keyboard key input
    ch = wgetch(stdscr);

    // Clear and repaint screen following input
    clear(); refresh();

    // Key input w/ menubar focus
    if ( strcmp(window_selection, "menuBar") == 0 ) {
      switch ( ch ) {
        //case 'q' : quit = 1; break; // Quit

        case '\t' : // Switch windows
          sprintf(menuWindow_selection, "None");
          sprintf(window_selection, "plot");
          break;

        case KEY_RIGHT : // move right along menuBar
          menuBarSwitch(window_selection, menuBar_selection, menuWindow_selection, "Right");
          break;

        case KEY_LEFT : // move lefty along menuBar
          menuBarSwitch(window_selection, menuBar_selection, menuWindow_selection, "Left");
          break;

        case KEY_UP : // move up along menuBar
          menuBarSwitch(window_selection, menuBar_selection, menuWindow_selection, "Up");
          break;

        case KEY_DOWN : // move down along menuBar
          menuBarSwitch(window_selection, menuBar_selection, menuWindow_selection, "Down");
          break;

        case 10 : // execute menubar item
          if ( strcmp(menuWindow_selection, "None") != 0 ) {
            menuBarTask(taskEcho, menuBar_selection, menuWindow_selection);
            if ( strcmp(taskEcho, "QUIT") == 0 ) { quit = 1; }
          }
          break;
      }
    }

    // Key input w/ plot focus
    else if ( strcmp(window_selection, "plot") == 0 ) {
      switch ( ch ) {
        //case 'q' : quit = 1; break; // Quit

        case '\t' : // Switch windows
          sprintf(window_selection, "menuBar");
          break;
      }
    } // End of keys

  // Refresh workspace
  createWorkspace(window_selection, menuBar_selection, menuWindow_selection);
  } // End of key input (quit)

  // End curses session
  terminateCurses();

  return 0;
}
