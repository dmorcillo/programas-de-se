#include <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>
#include "physics.h"
#include "game.h"

const float FPS = 60;
const int SCREEN_W = 640;
const int SCREEN_H = 480;
const int BOUNCER_SIZE = 32;

int main(){

    struct Movil nave;
    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    ALLEGRO_TIMER *timer = NULL;
    ALLEGRO_BITMAP *bouncer = NULL;
    float bouncer_x = SCREEN_W / 2.0 - BOUNCER_SIZE / 2.0;
    float bouncer_y = SCREEN_H / 2.0 - BOUNCER_SIZE / 2.0;
    bool keys[4] = { false, false, false, false };
    bool redraw = true;
    bool doexit = false;

    if(!al_init()){
        fprintf(stderr, "fallo para iniciar allegro\n");
        return -1;
    }

    if(!al_install_keyboard()){
        fprintf(stderr, "Fallo al iniciar el teclado\n");
        return -1;
    }

    timer = al_create_timer(1.0 / FPS);
    if(!timer) {
        fprintf(stderr, "Fallo al iniciar el timer\n");
        return -1;
    }

    display = al_create_display(SCREEN_W, SCREEN_H);
    if(!display) {
        fprintf(stderr, "Fallo al crear el display\n");
        al_destroy_timer(timer);
        return -1;
    }

    bouncer = al_create_bitmap(BOUNCER_SIZE, BOUNCER_SIZE);
    if(!bouncer) {
        fprintf(stderr, "Fallo al crear el bouncer\n");
        al_destroy_display(display);
        al_destroy_timer(timer);
        return -1;
    }

    al_set_target_bitmap(bouncer);

    al_clear_to_color(al_map_rgb(0,0,0));

    al_set_target_bitmap(al_get_backbuffer(display));

    event_queue = al_create_event_queue();
    if(!event_queue) {
        fprintf(stderr, "fallo al crear la cola de eventos\n");
        al_destroy_bitmap(bouncer);
        al_destroy_display(display);
        al_destroy_timer(timer);
        return -1;
    }

    al_register_event_source(event_queue, al_get_display_event_source(display));

    al_register_event_source(event_queue, al_get_timer_event_source(timer));

    al_register_event_source(event_queue, al_get_keyboard_event_source());

    al_clear_to_color(al_map_rgb(0,120,120));

    al_flip_display();

    al_start_timer(timer);

    while(!doexit){
        ALLEGRO_EVENT ev;
        al_wait_for_event(event_queue, &ev);


        if(ev.type == ALLEGRO_EVENT_TIMER)
            redraw = true;
        else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
            break;
        else if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
            switch(ev.keyboard.keycode) {
                case ALLEGRO_KEY_UP:
                    keys[KEY_THROTTLE] = true;
                    break;

                case ALLEGRO_KEY_DOWN:
                    keys[KEY_BRAKE] = true;
                    break;

                case ALLEGRO_KEY_LEFT:
                    keys[KEY_ROTATE_LEFT] = true;
                    break;

                case ALLEGRO_KEY_RIGHT:
                    keys[KEY_ROTATE_RIGHT] = true;
                    break;
            }
        } else if (ev.type == ALLEGRO_EVENT_KEY_UP) {
            switch(ev.keyboard.keycode) {
                case ALLEGRO_KEY_UP:
                    keys[KEY_THROTTLE] = false;
                    break;

                case ALLEGRO_KEY_DOWN:
                    keys[KEY_BRAKE] = false;
                    break;

                case ALLEGRO_KEY_LEFT:
                    keys[KEY_ROTATE_LEFT] = false;
                    break;

                case ALLEGRO_KEY_RIGHT:
                    keys[KEY_ROTATE_RIGHT] = false;
                    break;

                case ALLEGRO_KEY_ESCAPE:
                    doexit = true;
                    break;
            }
        }

if(redraw && al_is_event_queue_empty(event_queue)){
    redraw = false;

    update_physics(keys, &nave);

    al_clear_to_color(al_map_rgb(0,120,120));

    al_draw_bitmap(bouncer, bouncer_x, bouncer_y, 0);

    al_flip_display();
}
}

al_destroy_bitmap(bouncer);
al_destroy_timer(timer);
al_destroy_display(display);
al_destroy_event_queue(event_queue);
return EXIT_SUCCESS;
}
