#include <gb/gb.h>
#include <stdint.h>
#include "../res/Logo.h"


void init_gfx() {
    // Load Background tiles and then map
    set_bkg_palette( 0, 1, &Logo_palettes[0] );

    set_bkg_data(0, Logo_TILE_COUNT, Logo_tiles);
    set_bkg_tiles(0, 0, 20u, 18u, Logo_map);

	// Turn the background map on to make it visible
    SHOW_BKG;

	DISPLAY_ON;
}


void main(void)
{
	init_gfx();

    // Loop forever
    while(1) {


		// Game main loop processing goes here


		// Done processing, yield CPU and wait for start of next frame
        wait_vbl_done();
    }
}
