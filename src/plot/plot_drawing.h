// Draw plot window
void drawPlot(char* window_selection, char* plotCommands) {

  // Declare vars
  int plot_row_i = 0,
      plot_yPos = 5,
      plot_xPos = 70,
      feedX = 80,
      feedY = 30;
  FILE* fp;
  char gnuplotCommands[145],
       plotText[100],
       plotTextLengthChecker;

  // Construct and execute gnuplot commands
  sprintf(gnuplotCommands, "gnuplot -e \"set term dumb %d %d; %s\"", feedX, feedY, plotCommands);
  fp = popen(gnuplotCommands, "r"); if ( fp == NULL ) { /* error handle */ }

  // Create window and print gnuplot 'dumb' terminal output
  WINDOW* window_plot = newwin(feedY, feedX, plot_yPos, plot_xPos);
  while ( fgets(plotText, 100, fp) != NULL ) {
    mvwaddstr(window_plot,  plot_row_i, 0, plotText); plot_row_i++;
  }

  // Close stdout pipe
  pclose(fp);

  // Add border and refresh screen
  if ( strcmp(window_selection, "plot") == 0 ) { wattron(window_plot, COLOR_PAIR(3)); }
  box(window_plot, 0, 0);
  wrefresh(window_plot);
}
