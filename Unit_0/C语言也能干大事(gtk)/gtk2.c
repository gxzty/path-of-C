#include <stdio.h>
#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    gtk_init(NULL,NULL);
    //Make a new window.
    GtkWindow *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window,"destroy",gtk_main_quit,NULL);
    gtk_window_set_title(window,"Hello");
    gtk_widget_show(window);
    
    //Make a new box.
    //GtkBox *box1 = gtk_box_new(GTK_ORIENTATION_VERTICAL,0);
    //Vertical.
    GtkBox *box1 = gtk_box_new(GTK_ORIENTATION_HORIZONTAL,0);
    //Horizontal.
    gtk_container_add(window,box1);
    gtk_widget_show(box1);//不可见控件也要show，否则子控件显示不出来

    //Make btn1.
    GtkButton *btn1 = gtk_button_new();
    gtk_button_set_label(btn1,"btn1");
    gtk_box_pack_start(box1,btn1,FALSE,FALSE,0);
    gtk_widget_show(btn1);
    
    //Make btn2.
    GtkButton *btn2 = gtk_button_new();
    gtk_button_set_label(btn2,"btn2");
    gtk_box_pack_start(box1,btn2,FALSE,FALSE,0);
    gtk_widget_show(btn2);
    
    //Make an entry.
    GtkEntry *entry1 = gtk_entry_new();
    gtk_box_pack_start(box1,entry1,FALSE,FALSE,0);
    gtk_widget_show(entry1);



    gtk_main();
    return 0;
}
