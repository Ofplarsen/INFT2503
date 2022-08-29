//
// Created by ofplarsen on 29/08/2022.
//

#include <gtkmm.h>

class Window : public Gtk::Window{
public:
    Gtk::VBox vbox;
    Gtk::Entry entry_first_name;
    Gtk::Entry entry_last_name;
    Gtk::Button button;
    Gtk::Label label_first_name;
    Gtk::Label label_last_name;
    Gtk::Label label;
    Window() {
        button.set_label("Combine names");
        label_first_name.set_text("First name");
        label_last_name.set_text("Last name");
        label.set_text("Names combined: John Doe");

        vbox.pack_start(label_first_name);
        vbox.pack_start(entry_first_name);
        vbox.pack_start(label_last_name);
        vbox.pack_start(entry_last_name);
        vbox.pack_start(button);
        vbox.pack_start(label);


        add(vbox);
        show_all();

        entry_first_name.signal_changed().connect([this] () {
            //label.set_text("Entry now contains: " + entry.get_text());
        });

        entry_first_name.signal_activate().connect([this] () {
            //label.set_text("Entry activated: " + entry.get_text());
        });

        button.signal_clicked().connect([this]() {
            label.set_text("Names combined: " + entry_first_name.get_text() + " " + entry_last_name.get_text());
        });

    }
};
int main(){

    Gtk::Main gtk_main;
    Window window;
    gtk_main.run(window);
    return 0;
}