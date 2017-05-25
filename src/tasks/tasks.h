// Execute task from menuBar item
void menuBarTask(char* taskEcho, char* menuBar_selection, char* menuWindow_selection) {

  // File menu items
  if ( strcmp(menuBar_selection, "File") == 0 ) {

    // Quit
    if ( strcmp(menuWindow_selection, "Quit") == 0 ) {
      sprintf(taskEcho, "QUIT");
    }
  }
}
