#include <stdio.h>
#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    gtk_init(NULL,NULL);
    GtkWindow *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window,"destroy",gtk_main_quit,NULL);
    gtk_widget_show(window);
    
    //Make grid1.
    GtkGrid *grid1 = gtk_grid_new();
    gtk_widget_show(grid1);
    gtk_container_add(window,grid1);
    
    
    GtkButton *btn1 = gtk_button_new();
    gtk_button_set_label(btn1,"1111111");
    gtk_widget_show(btn1);
    gtk_grid_attach(grid1,btn1,0,0,1,1);

    GtkButton *btn2 = gtk_button_new();
    gtk_button_set_label(btn2,"2222222");
    gtk_widget_show(btn2);
    gtk_grid_attach(grid1,btn2,1,0,1,1);

    GtkButton *btn3 = gtk_button_new();
    gtk_button_set_label(btn3,"3333333");
    gtk_widget_show(btn3);
    gtk_grid_attach(grid1,btn3,0,1,2,2);



    gtk_main();
    return 0;
}
