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
        this->set_title("Øving 4");

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
        button.set_sensitive(false);

        add(vbox);
        show_all();



        entry_first_name.signal_changed().connect([this] () {
            if(entry_last_name.get_text().empty() || entry_first_name.get_text().empty())
                button.set_sensitive(false);
            else
                button.set_sensitive(true);
        });

        entry_last_name.signal_changed().connect([this] () {
            if(entry_last_name.get_text().empty() || entry_first_name.get_text().empty())
                button.set_sensitive(false);
            else
                button.set_sensitive(true);
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