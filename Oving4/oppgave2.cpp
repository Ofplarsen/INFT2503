//
// Created by ofplarsen on 29/08/2022.
//

#include <gtkmm.h>

class Window : public Gtk::Window{
public:
    Gtk::VBox vbox;
    Gtk::Entry entry;
    Gtk::Button button;
    Gtk::Label label;

    Window() {
        button.set_label("Click here");

        vbox.pack_start(entry);
        vbox.pack_start(button);
        vbox.pack_start(label);

        add(vbox);
        show_all();

        entry.signal_changed().connect([this] () {
            label.set_text("Entry now contains: " + entry.get_text());
        });

        entry.signal_activate().connect([this] () {
            label.set_text("Entry activated: " + entry.get_text());
        });

        button.signal_clicked().connect([this]() {
            label.set_text("Button clicked");
        });

    }
};
int main(){

    Gtk::Main gtk_main;
    Window window;
    gtk_main.run(window);
    return 0;
}