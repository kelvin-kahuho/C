#include <gtk/gtk.h>

void convert_temperature(GtkButton *button, gpointer user_data) {
    GtkEntry *entry_celsius = GTK_ENTRY(user_data);
    GtkEntry *entry_fahrenheit = GTK_ENTRY(g_object_get_data(G_OBJECT(button), "fahrenheit"));
    const char *celsius_text = gtk_entry_get_text(entry_celsius);
    double celsius = atof(celsius_text);
    double fahrenheit = (celsius * 1.8) + 32.0;
    char fahrenheit_text[64];
    snprintf(fahrenheit_text, sizeof(fahrenheit_text), "%.2f", fahrenheit);
    gtk_entry_set_text(entry_fahrenheit, fahrenheit_text);
}

int main(int argc, char *argv[]) {
    GtkWidget *window, *grid, *label_celsius, *label_fahrenheit, *entry_celsius, *entry_fahrenheit, *button;
    
    gtk_init(&argc, &argv);
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Temperature Converter");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_widget_set_size_request(window, 400, 200);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);
    
    label_celsius = gtk_label_new("Celsius:");
    gtk_grid_attach(GTK_GRID(grid), label_celsius, 0, 0, 1, 1);
    
    entry_celsius = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), entry_celsius, 1, 0, 1, 1);
    
    label_fahrenheit = gtk_label_new("Fahrenheit:");
    gtk_grid_attach(GTK_GRID(grid), label_fahrenheit, 0, 1, 1, 1);
    
    entry_fahrenheit = gtk_entry_new();
    gtk_entry_set_tabs(GTK_ENTRY(entry_fahrenheit), FALSE);
    gtk_grid_attach(GTK_GRID(grid), entry_fahrenheit, 1, 1, 1, 1);
    
    button = gtk_button_new_with_label("Convert");
    g_object_set_data(G_OBJECT(button), "fahrenheit", entry_fahrenheit);
    g_signal_connect(button, "clicked", G_CALLBACK(convert_temperature), entry_celsius);
    gtk_grid_attach(GTK_GRID(grid), button, 0, 2, 2, 1);
    
    gtk_widget_show_all(window);
    
    gtk_main();
    
    return 0;
}
