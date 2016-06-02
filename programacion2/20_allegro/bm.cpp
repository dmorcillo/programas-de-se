#inclde <stdio.h>
#include <stdlib.h>
#include <allegro5/allegro.h>

#define SW 800
#define SH 600

int main(){

    //  Variables
    ALLEGRO_DISPLAY *ventana = NULL;
    ALLEGRO_EVENT_QUEUE *mensajes = NULL;
    ALLEGRO_TIMER *alarma = NULL;
    ALLEGRO_BITMAP *nave = NULL;
    bool dibujar = true;
    double x = 0;

    al_init();
    //  Crear
    //    -el display
    display = al_create_display(SW, SH);
    //    -cola de eventos
    mensajes = al_create_event_queue();
    //    -timer
    alarma = al_create_timer(1/60.);


    //  Registrar como fuente de eventos:
    //    -display
    al_register_event_source(mensajes, al_get_display_event_source(ventana));
    //    -timer
    al_register_event_source(mensajes, al_get_timer_event_source(alarma));

    nave = al_create_bitmap(40, 40);
    al_set_Target_bitmap(nave);
    al_clear_to_color(al_map_rgb(255,0,255));
    al_set_target_bitmap(al_get_backbuffer(ventana));

    //  Iniciar allegro
    al_start_timer(alarma);
    //  Bucle:
    while(1){
    //    Miro los eventos
      ALLEGRO_EVENT ev;
      al_wait_for_event(mensajes, &ev);
    //      Si cierran la ventana
      if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
    //        salgo del bucle
        break;
    //      Si se cumple el tiempo:
      if (ev.type == ALLEGRO_EVENT_TIMER)
    //        repintar
        dibujar = true;
    //    Si repintar
      if (dibujar){
    //      No repintar
        dibujar = false;
    //      Mover el cuadrado
        x += 1;
    //      Borrar la pantalla
        al_clear_to_color(al_map_rgb(0,0,0));
    //      Pintar
      al_draw_bitmap(nave, x, 20);
    //      Voltear el buffer
      al_flip_display();
    }

    //  Destruir el timer
    al_destroy_timer(reloj);
    //  Destruir el display
    al_destroy_display(ventana);
    //  Destruir cola de eventos
    al_destroy_event_queue(mensajes);


    return EXIT_SUCCESS;
}
