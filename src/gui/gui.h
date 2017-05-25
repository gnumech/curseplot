#include "gui_menuBar.h"

// Configure and initialize curses screen
void initializeCurses() {

  initscr(); // Initialize curses
  noecho();  // Disable key echoing
  refresh(); // Apply curses screen
  curs_set(0); // No cursor blink
  keypad(stdscr, 1);

  // Initialize color and define schemes
  start_color(); // Also default white on black
  init_pair(1, COLOR_WHITE, COLOR_BLACK);
  init_pair(2, COLOR_RED,   COLOR_BLACK);
  init_pair(3, COLOR_BLUE,  COLOR_BLACK);
  init_pair(4, COLOR_CYAN,  COLOR_BLACK);
}

// Safely end curses screen
void terminateCurses() {

  echo(); // Re-enble key echoing
  endwin(); // End curses session
}

// Construct main program work area
void createWorkspace(char* window_selection, char* menuBar_selection, char* menuWindow_selection) {

  // Draw top menubar for program options
  drawMenuBar(window_selection, menuBar_selection);
  if ( strcmp(menuWindow_selection, "None") != 0 ) { drawMenuWindow(menuBar_selection, menuWindow_selection); }

  // Create active windows
  createPlot(window_selection);
}
