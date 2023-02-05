#include <gb/gb.h>
#include <stdint.h>
#include "../assets/DmgScreenTiles.h"
#include "../assets/DmgScreenMap.h"


void init_gfx() {
    // Load Background tiles and then map
    set_bkg_data(0, DmgScreenTiles_TILE_COUNT, DmgScreenTiles_tiles);
    set_bkg_tiles(0, 0, 20u, 18u, DmgScreenMap_map);

	// Turn the background map on to make it visible
    SHOW_BKG;
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
