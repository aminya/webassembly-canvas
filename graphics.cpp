extern "C" {

const auto WIDTH = 600u;
const auto HEIGHT = 600u;
unsigned int BUFFER[WIDTH * HEIGHT];

void draw() {
    for (auto x = 0u; x < WIDTH; x++) {
        for (auto y = 0u; y < HEIGHT; y++) {

            // RGBA little endian
            const auto color = y < HEIGHT/2 ? 0xff0000ff : 0xffff0000;

            BUFFER[WIDTH * x + y] = color;
        }
    }
}



} // extern C needed for exporting to wasm
