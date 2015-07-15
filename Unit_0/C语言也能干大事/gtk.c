#include <stdio.h>
#include <gtk/gtk.h>
int main(int argc,char *argv[])
{
	gtk_init(NULL,NULL);
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_position(window,GTK_WIN_POS_CENTER_ALWAYS);
	gtk_window_set_title(window,"你好");
	g_signal_connect(window,"destroy",gtk_main_quit,NULL);
	gtk_widget_show(window);


	/*This is an Entry.
	GtkEntry *entry1 = gtk_entry_new();
	gtk_widget_show(entry1);
	gtk_container_add(window,entry1);
	*/


	/*This is a Button.
	GtkButton *btn1 = gtk_button_new();
	gtk_button_set_label(btn1,"Click!");
	gtk_widget_show(btn1);
	gtk_container_add(window,btn1);
	*/

	//This is a label.
	GtkLabel *label1 = gtk_label_new("Name: ");
	gtk_container_add(window,label1);
	gtk_widget_show(label1);

	gtk_main();//阻塞在这里，代码一般要写在之前
    return 0;
}