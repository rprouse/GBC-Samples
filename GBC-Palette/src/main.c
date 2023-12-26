#include <gb/gb.h>
#include <gb/cgb.h> // Include cgb functions
#include <gbdk/platform.h>
#include <gbdk/metasprites.h>
#include <stdint.h>
#include "../res/Tiles.h"
#include "../res/Map.h"

const palette_color_t palettes[32] = {
    PaletteTestTilesCGBPal0c0, PaletteTestTilesCGBPal0c1, PaletteTestTilesCGBPal0c2, PaletteTestTilesCGBPal0c3,
    PaletteTestTilesCGBPal1c0, PaletteTestTilesCGBPal1c1, PaletteTestTilesCGBPal1c2, PaletteTestTilesCGBPal1c3,
    PaletteTestTilesCGBPal2c0, PaletteTestTilesCGBPal2c1, PaletteTestTilesCGBPal2c2, PaletteTestTilesCGBPal2c3,
    PaletteTestTilesCGBPal3c0, PaletteTestTilesCGBPal3c1, PaletteTestTilesCGBPal3c2, PaletteTestTilesCGBPal3c3,
    PaletteTestTilesCGBPal4c0, PaletteTestTilesCGBPal4c1, PaletteTestTilesCGBPal4c2, PaletteTestTilesCGBPal4c3,
    PaletteTestTilesCGBPal5c0, PaletteTestTilesCGBPal5c1, PaletteTestTilesCGBPal5c2, PaletteTestTilesCGBPal5c3,
    PaletteTestTilesCGBPal6c0, PaletteTestTilesCGBPal6c1, PaletteTestTilesCGBPal6c2, PaletteTestTilesCGBPal6c3,
    PaletteTestTilesCGBPal7c0, PaletteTestTilesCGBPal7c1, PaletteTestTilesCGBPal7c2, PaletteTestTilesCGBPal7c3,
};

void init_gfx() {
    // Load Background tiles and then map
    set_bkg_palette(0, 8, palettes);
    set_bkg_data(0, 1, PaletteTestTiles);
    set_bkg_tiles(0, 0, MapWidth, MapHeight, MapPLN0);
    set_bkg_attributes(0, 0, MapWidth, MapHeight, MapPLN1);

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
