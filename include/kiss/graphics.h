#ifndef _GRAPHICS_H_
#define _GRAPHICS_H_

#ifdef __cplusplus
extern "C" {
#endif

int graphics_open(int width, int height);
void graphics_close();
void graphics_update();
void graphics_clear();

void graphics_blit(unsigned char *data, int x, int y, int width, int height);
void graphics_blit_region(unsigned char *data, int sx, int sy, int ex, int ey, int width, int height, int dx, int dy);

void graphics_fill(int r, int g, int b);

void graphics_pixel(int x, int y, int r, int g, int b);
void graphics_line(int x1, int y1, int x2, int y2, int r, int g, int b);

void graphics_circle(int cx, int cy, int radius, int r, int g, int b);
void graphics_circle_fill(int cx, int cy, int radius, int r, int g, int b);

void graphics_rectangle(int x1, int y1, int x2, int y2, int r, int g, int b);
void graphics_rectangle_fill(int x1, int y1, int x2, int y2, int r, int g, int b);

void graphics_triangle(int x1, int y1, int x2, int y2, int x3, int y3, int r, int g, int b);
void graphics_triangle_fill(int x1, int y1, int x2, int y2, int x3, int y3, int r, int g, int b);

#ifdef __cplusplus
}
#endif

#endif
