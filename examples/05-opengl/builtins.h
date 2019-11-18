PyMODINIT_FUNC PyInit_sdl2(void);

static struct _inittab builtins[] = {
    {"sdl2", PyInit_sdl2},
    {NULL, NULL}
};
