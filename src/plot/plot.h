#include "plot_drawing.h"

// Create plot
void createPlot(char* window_selection) {

  // Declare and define command string
  char plotCommands[100];
  sprintf(plotCommands, "set title 'Plot title';");
  sprintf(plotCommands, "%s set xlabel 'XAxis Title';", plotCommands);
  sprintf(plotCommands, "%s set ylabel 'YAxis Title';", plotCommands);
  sprintf(plotCommands, "%s plot sin(x);",              plotCommands);

  // Draw plot window
  drawPlot(window_selection, plotCommands);
}
