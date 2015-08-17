#include <stdio.h>
#include <gtk/gtk.h>
GtkWindow *window;//全局变量
int btn1WhenClicked(GtkWidget *widget,int data);
int btn2WhenClicked(GtkWidget *widget,int data);

int main(int argc, char *argv[])
{
    
    gtk_init(NULL,NULL);//NULL一般对应就是0
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window,"destroy",gtk_main_quit,NULL);
    
    gtk

    GtkButton *btn1 = gtk_button_new_with_label("EXIT");
    gtk_container_add(window,btn1);
    g_signal_connect(btn1,"clicked",btn1WhenClicked,NULL);
    
    GtkButton *btn2 = gtk_button_new_with_label("OK");
    gtk_container_add(window,btn2);
    g_signal_connect(btn2,"clicked",btn2WhenClicked,NULL);

    
    gtk_widget_show(window);
    gtk_widget_show(btn1);
    gtk_widget_show(btn2);
    
    gtk_grid_attach(grid1,entry1,0,1,1,1);

    gtk_main();
    return 0;
}

int btn1WhenClicked(GtkWidget *widget,int data){
    gtk_main_quit();
}

int btn2WhenClicked(GtkWidget *widget,int data){
    gtk_main_quit();
}