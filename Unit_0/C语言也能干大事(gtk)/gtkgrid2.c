#include <stdio.h>
#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    gtk_init(NULL,NULL);
    GtkWindow *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window,"destroy",gtk_main_quit,NULL);
    
    //Make grid1.
    GtkGrid *grid1 = gtk_grid_new();
    
    //two buttons.
    GtkButton *btn1 = gtk_button_new();
    gtk_button_set_label(btn1,"submit");

    GtkButton *btn2 = gtk_button_new();
    gtk_button_set_label(btn2,"cancel");

    //two entries.
    GtkEntry *entry1 = gtk_entry_new();
    GtkEntry *entry2 = gtk_entry_new();

    //two labels.
    GtkLabel *label1 = gtk_label_new("Username:");
    GtkLabel *label2 = gtk_label_new("Password:");

    //position
    gtk_grid_attach(grid1,btn1,0,2,1,1);
    gtk_grid_attach(grid1,btn2,2,2,1,1);
    gtk_grid_attach(grid1,entry1,1,0,3,1);
    gtk_grid_attach(grid1,entry2,1,1,3,1);
    gtk_grid_attach(grid1,label1,0,0,1,1);
    gtk_grid_attach(grid1,label2,0,1,1,1);
    
    //Show Time.
    gtk_widget_show(grid1);
    gtk_widget_show(window);
    gtk_container_add(window,grid1);
    gtk_widget_show(btn1);
    gtk_widget_show(btn2);
    gtk_widget_show(entry1);
    gtk_widget_show(entry2);
    gtk_widget_show(label1);
    gtk_widget_show(label2);
    
    
    gtk_main();
    return 0;
}
