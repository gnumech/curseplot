// Draw menu bar window
void drawMenuBar(char* window_selection, char* menuBar_selection) {

  // Create top menubar for program options
  WINDOW* window_menuBar = newwin(3, 169, 0, 0);

  // Add menuBar item strings
  mvwaddstr(window_menuBar, 1,  1, " File ");
  mvwaddstr(window_menuBar, 1,  8, " Edit ");
  mvwaddstr(window_menuBar, 1, 15, " View ");
  mvwaddstr(window_menuBar, 1, 22, " Scripting ");
  mvwaddstr(window_menuBar, 1, 34, " Plot ");
  mvwaddstr(window_menuBar, 1, 41, " Analysis");
  mvwaddstr(window_menuBar, 1, 52, " Table ");
  mvwaddstr(window_menuBar, 1, 60, " Windows ");
  mvwaddstr(window_menuBar, 1, 70, " Help ");

  // Unfold menu option schemes if menuBar has focus
  if ( strcmp(window_selection, "menuBar") == 0 ) {

    // Border and draw menuBar with selection color
    wattron(window_menuBar, COLOR_PAIR(3));
    if ( strcmp(menuBar_selection, "File") == 0 ) { mvwaddstr(window_menuBar, 1, 1, "[File]"); }
    if ( strcmp(menuBar_selection, "Edit") == 0 ) { mvwaddstr(window_menuBar, 1, 8, "[Edit]"); }
    if ( strcmp(menuBar_selection, "View") == 0 ) { mvwaddstr(window_menuBar, 1, 15, "[View]"); }
    if ( strcmp(menuBar_selection, "Scripting") == 0 ) { mvwaddstr(window_menuBar, 1, 22, "[Scripting]"); }
    if ( strcmp(menuBar_selection, "Plot") == 0 ) { mvwaddstr(window_menuBar, 1, 34, "[Plot]"); }
    if ( strcmp(menuBar_selection, "Analysis") == 0 ) { mvwaddstr(window_menuBar, 1, 41, "[Analysis]"); }
    if ( strcmp(menuBar_selection, "Table") == 0 ) { mvwaddstr(window_menuBar, 1, 52, "[Table]"); }
    if ( strcmp(menuBar_selection, "Windows") == 0 ) { mvwaddstr(window_menuBar, 1, 60, "[Windows]"); }
    if ( strcmp(menuBar_selection, "Help") == 0 ) { mvwaddstr(window_menuBar, 1, 70, "[Help]"); }
  }

  // Border and draw menuBar
  box(window_menuBar, 0, 0);
  wrefresh(window_menuBar);
}

// Draw drop-down window for menu selection
void drawMenuWindow(char* menuBar_selection, char* menuWindow_selection) {

  // Declare vars
  WINDOW* window_menuWindow;
  int height_menuWindow = 10;
  int width_menuWindow = 40;
  int yPos_menuWindow = 3;
  int xPos_menuWindow = 0;

  if ( strcmp(menuBar_selection, "File") == 0 ) {

    // Create window for menu items
    window_menuWindow = newwin(height_menuWindow, width_menuWindow, yPos_menuWindow, xPos_menuWindow);

    // Draw file menu items
    mvwaddstr(window_menuWindow, 1, 1, "Quit");

    // Redraw selection
    if ( strcmp(menuWindow_selection, "Quit") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 1, 1, "[Quit]"); }

  } else if ( strcmp(menuBar_selection, "Edit") == 0 ) {
    /* Reserved */
    // Create window for menu items
    xPos_menuWindow += 7;
    window_menuWindow = newwin(height_menuWindow, width_menuWindow, yPos_menuWindow, xPos_menuWindow);

    // Draw edit menu items
    mvwaddstr(window_menuWindow, 1, 1, " ");

    // Redraw selection
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 1, 1, " "); }

  } else if ( strcmp(menuBar_selection, "View") == 0 ) {
    /* Reserved */
    // Create window for menu items
    xPos_menuWindow += 14;
    window_menuWindow = newwin(height_menuWindow, width_menuWindow, yPos_menuWindow, xPos_menuWindow);

    // Draw view menu items
    mvwaddstr(window_menuWindow, 1, 1, " ");
 
    // Redraw selection
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 1, 1, " "); }

  } else if ( strcmp(menuBar_selection, "Scripting") == 0 ) {
    /* Reserved */
    // Create window for menu items
    xPos_menuWindow += 21;
    window_menuWindow = newwin(height_menuWindow, width_menuWindow, yPos_menuWindow, xPos_menuWindow);

    // Draw scripting menu items
    mvwaddstr(window_menuWindow, 1, 1, " ");

    // Redraw selection
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 1, 1, " "); }

   } else if ( strcmp(menuBar_selection, "Plot") == 0 ) {

    // Create window for menu items
    xPos_menuWindow += 33;
    window_menuWindow = newwin(height_menuWindow, width_menuWindow, yPos_menuWindow, xPos_menuWindow);

    // Draw file menu items
    mvwaddstr(window_menuWindow, 1, 1, "sin(x)");
    mvwaddstr(window_menuWindow, 2, 1, "cos(x)");

    // Redraw selection
    if ( strcmp(menuWindow_selection, "SinX") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 1, 1, "[sin(x)]"); }
    if ( strcmp(menuWindow_selection, "CosX") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 2, 1, "[cos(x)]"); }

  } else if ( strcmp(menuBar_selection, "Analysis") == 0 ) {
    /* Reserved */
    // Create window for menu items
    xPos_menuWindow += 40;
    window_menuWindow = newwin(height_menuWindow, width_menuWindow, yPos_menuWindow, xPos_menuWindow);

    // Draw analysis menu items
    mvwaddstr(window_menuWindow, 1, 1, " ");

    // Redraw selection
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 1, 1, " "); }

   } else if ( strcmp(menuBar_selection, "Table") == 0 ) {
    /* Reserved */
    // Create window for menu items
    xPos_menuWindow += 51;
    window_menuWindow = newwin(height_menuWindow, width_menuWindow, yPos_menuWindow, xPos_menuWindow);

    // Draw table menu items
    mvwaddstr(window_menuWindow, 1, 1, " ");

    // Redraw selection
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 1, 1, " "); }

  } else if ( strcmp(menuBar_selection, "Windows") == 0 ) {
    /* Reserved */
    // Create window for menu items
    xPos_menuWindow += 59;
    window_menuWindow = newwin(height_menuWindow, width_menuWindow, yPos_menuWindow, xPos_menuWindow);

    // Draw windows menu items
    mvwaddstr(window_menuWindow, 1, 1, " ");

    // Redraw selection
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 1, 1, " "); }

  } else if ( strcmp(menuBar_selection, "Help") == 0 ) {
    /* Reserved */
    // Create window for menu items
    xPos_menuWindow += 69;
    window_menuWindow = newwin(height_menuWindow, width_menuWindow, yPos_menuWindow, xPos_menuWindow);

    // Draw help menu items
    mvwaddstr(window_menuWindow, 1, 1, " ");

    // Redraw selection
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { wattron(window_menuWindow, COLOR_PAIR(3)); mvwaddstr(window_menuWindow, 1, 1, " "); }
   }

  // Border and draw fileMenu
  box(window_menuWindow, 0, 0);
  wrefresh(window_menuWindow);
}

// Move menu bar cursor according to key input
void menuBarSwitch(char* window_selection, char* menuBar_selection, char* menuWindow_selection, char* menuBarDirection) {

  // Define menu items
  char menuBarItems[9][15], fileMenuItems[2][10],      editMenuItems[2][10],    viewMenuItems[2][10],
                            scriptingMenuItems[2][10], plotMenuItems[3][10],    analysisMenuItems[2][10],
                            tableMenuItems[2][10],     windowsMenuItems[2][10], helpMenuItems[2][10];

  // Define static names of menu items and subitems
  strcpy(menuBarItems[0], "File");
  strcpy(fileMenuItems[0], "None");
  strcpy(fileMenuItems[1], "Quit");
  strcpy(menuBarItems[1], "Edit"); // Reserved
  strcpy(editMenuItems[0], "None"); // Reserved
  strcpy(editMenuItems[1], "Nothing"); // Reserved
  strcpy(menuBarItems[2], "View"); // Reserved
  strcpy(viewMenuItems[0], "None"); // Reserved
  strcpy(viewMenuItems[1], "Nothing"); // Reserved
  strcpy(menuBarItems[3], "Scripting"); // Reserved
  strcpy(scriptingMenuItems[0], "None"); // Reserved
  strcpy(scriptingMenuItems[1], "Nothing"); // Reserved
  strcpy(menuBarItems[4], "Plot");
  strcpy(plotMenuItems[0], "None");
  strcpy(plotMenuItems[1], "SinX");
  strcpy(plotMenuItems[2], "CosX");
  strcpy(menuBarItems[5], "Analysis"); // Reserved
  strcpy(analysisMenuItems[0], "None"); // Reserved
  strcpy(analysisMenuItems[1], "Nothing"); // Reserved
  strcpy(menuBarItems[6], "Table"); // Reserved
  strcpy(tableMenuItems[0], "None"); // Reserved
  strcpy(tableMenuItems[1], "Nothing"); // Reserved
  strcpy(menuBarItems[7], "Windows"); // Reserved
  strcpy(windowsMenuItems[0], "None"); // Reserved
  strcpy(windowsMenuItems[1], "Nothing"); // Reserved
  strcpy(menuBarItems[8], "Help"); // Reserved
  strcpy(helpMenuItems[0], "None"); // Reserved
  strcpy(helpMenuItems[1], "Nothing"); // Reserved

  // Obtain current selection index
  int menuBarItemIndex, fileMenuIndex, editMenuIndex, viewMenuIndex,
                        scriptingMenuIndex, plotMenuIndex, analysisMenuIndex,
                        tableMenuIndex, windowsMenuIndex, helpMenuIndex;

  // Respond to signal from current location
  //
  if ( strcmp(menuBar_selection, "File") == 0 ) {

    // Obtain filemenu indices
    menuBarItemIndex = 0;
    if ( strcmp(menuWindow_selection, "None") == 0 ) { fileMenuIndex = 0; }
    if ( strcmp(menuWindow_selection, "Quit") == 0 ) { fileMenuIndex = 1; }

    // Iterate menuWindow item index based on keyboard input
    if ( strcmp(menuBarDirection, "Up") == 0 && fileMenuIndex > 0 ) { fileMenuIndex--; }
    if ( strcmp(menuBarDirection, "Down") == 0 && fileMenuIndex < 1 ) { fileMenuIndex++; }
    strcpy(menuWindow_selection, fileMenuItems[fileMenuIndex]);

  } else if ( strcmp(menuBar_selection, "Edit") == 0 ) {

    // Obtain editmenu indices
    menuBarItemIndex = 1;
    if ( strcmp(menuWindow_selection, "None") == 0 ) { editMenuIndex = 0; }
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { editMenuIndex = 1; }

    // Iterate menuWindow item index based on keyboard input
    if ( strcmp(menuBarDirection, "Up") == 0 && editMenuIndex > 0 ) { editMenuIndex--; }
    if ( strcmp(menuBarDirection, "Down") == 0 && editMenuIndex < 1 ) { editMenuIndex++; }
    strcpy(menuWindow_selection, editMenuItems[editMenuIndex]);

  } else if ( strcmp(menuBar_selection, "View") == 0 ) {

    // Obtain viewmenu indices
    menuBarItemIndex = 2;
    if ( strcmp(menuWindow_selection, "None") == 0 ) { viewMenuIndex = 0; }
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { viewMenuIndex = 1; }

    // Iterate menuWindow item index based on keyboard input
    if ( strcmp(menuBarDirection, "Up") == 0 && viewMenuIndex > 0 ) { viewMenuIndex--; }
    if ( strcmp(menuBarDirection, "Down") == 0 && viewMenuIndex < 1 ) { viewMenuIndex++; }
    strcpy(menuWindow_selection, viewMenuItems[viewMenuIndex]);

  } else if ( strcmp(menuBar_selection, "Scripting") == 0 ) {

    // Obtain scriptingmenu indices
    menuBarItemIndex = 3;
    if ( strcmp(menuWindow_selection, "None") == 0 ) { scriptingMenuIndex = 0; }
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { scriptingMenuIndex = 1; }

    // Iterate menuWindow item index based on keyboard input
    if ( strcmp(menuBarDirection, "Up") == 0 && scriptingMenuIndex > 0 ) { scriptingMenuIndex--; }
    if ( strcmp(menuBarDirection, "Down") == 0 && scriptingMenuIndex < 1 ) { scriptingMenuIndex++; }
    strcpy(menuWindow_selection, scriptingMenuItems[scriptingMenuIndex]);

  } else if ( strcmp(menuBar_selection, "Plot") == 0 ) {

    // Obtain filemenu indices
    menuBarItemIndex = 4;
    if ( strcmp(menuWindow_selection, "None") == 0 ) { plotMenuIndex = 0; }
    if ( strcmp(menuWindow_selection, "SinX") == 0 ) { plotMenuIndex = 1; }
    if ( strcmp(menuWindow_selection, "CosX") == 0 ) { plotMenuIndex = 2; }

    // Iterate menuWindow item index based on keyboard input
    if ( strcmp(menuBarDirection, "Up") == 0 && plotMenuIndex > 0 ) { plotMenuIndex--; }
    if ( strcmp(menuBarDirection, "Down") == 0 && plotMenuIndex < 2 ) { plotMenuIndex++; }
    strcpy(menuWindow_selection, plotMenuItems[plotMenuIndex]);

  } else if ( strcmp(menuBar_selection, "Analysis") == 0 ) {

    // Obtain analysismenu indices
    menuBarItemIndex = 5;
    if ( strcmp(menuWindow_selection, "None") == 0 ) { analysisMenuIndex = 0; }
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { analysisMenuIndex = 1; }

    // Iterate menuWindow item index based on keyboard input
    if ( strcmp(menuBarDirection, "Up") == 0 && analysisMenuIndex > 0 ) { analysisMenuIndex--; }
    if ( strcmp(menuBarDirection, "Down") == 0 && analysisMenuIndex < 1 ) { analysisMenuIndex++; }
    strcpy(menuWindow_selection, analysisMenuItems[analysisMenuIndex]);

  } else if ( strcmp(menuBar_selection, "Table") == 0 ) {

    // Obtain tablemenu indices
    menuBarItemIndex = 6;
    if ( strcmp(menuWindow_selection, "None") == 0 ) { tableMenuIndex = 0; }
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { tableMenuIndex = 1; }

    // Iterate menuWindow item index based on keyboard input
    if ( strcmp(menuBarDirection, "Up") == 0 && tableMenuIndex > 0 ) { tableMenuIndex--; }
    if ( strcmp(menuBarDirection, "Down") == 0 && tableMenuIndex < 1 ) { tableMenuIndex++; }
    strcpy(menuWindow_selection, tableMenuItems[tableMenuIndex]);

  } else if ( strcmp(menuBar_selection, "Windows") == 0 ) {

    // Obtain windowsmenu indices
    menuBarItemIndex = 7;
    if ( strcmp(menuWindow_selection, "None") == 0 ) { windowsMenuIndex = 0; }
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { windowsMenuIndex = 1; }

    // Iterate menuWindow item index based on keyboard input
    if ( strcmp(menuBarDirection, "Up") == 0 && windowsMenuIndex > 0 ) { windowsMenuIndex--; }
    if ( strcmp(menuBarDirection, "Down") == 0 && windowsMenuIndex < 1 ) { windowsMenuIndex++; }
    strcpy(menuWindow_selection, windowsMenuItems[windowsMenuIndex]);

  } else if ( strcmp(menuBar_selection, "Help") == 0 ) {

    // Obtain helpmenu indices
    menuBarItemIndex = 8;
    if ( strcmp(menuWindow_selection, "None") == 0 ) { helpMenuIndex = 0; }
    if ( strcmp(menuWindow_selection, "Nothing") == 0 ) { helpMenuIndex = 1; }

    // Iterate menuWindow item index based on keyboard input
    if ( strcmp(menuBarDirection, "Up") == 0 && helpMenuIndex > 0 ) { helpMenuIndex--; }
    if ( strcmp(menuBarDirection, "Down") == 0 && helpMenuIndex < 1 ) { helpMenuIndex++; }
    strcpy(menuWindow_selection, helpMenuItems[helpMenuIndex]);
  }

  // Iterate menuBar item index based on keyboard input
  if (( strcmp(menuBarDirection, "Left") == 0 ) && ( menuBarItemIndex > 0 )) { menuBarItemIndex--; strcpy(menuWindow_selection, "None"); }
  if (( strcmp(menuBarDirection, "Right") == 0 ) && ( menuBarItemIndex < 8 )) { menuBarItemIndex++; strcpy(menuWindow_selection, "None"); }
  strcpy(menuBar_selection, menuBarItems[menuBarItemIndex]);

  // Repaint screen
  drawMenuBar(window_selection, menuBar_selection);
  if ( strcmp(menuWindow_selection, "None") != 0 ) { drawMenuWindow(menuBar_selection, menuWindow_selection); }
}
