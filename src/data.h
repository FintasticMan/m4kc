#pragma once
#include <limits.h>
#include "inputbuffer.h"

typedef struct {
        int buffer[16 * 16];
} data_WorldThumbnail;

typedef struct data_WorldListItem {
        data_WorldThumbnail thumbnail;
        char name[NAME_MAX];
        struct data_WorldListItem *next;
} data_WorldListItem;

extern data_WorldListItem *data_worldList;

typedef struct {
        int   fogType;
        int   drawDistance;
        int   trapMouse;
        float fov;
        InputBuffer username;
} data_Options;

extern data_Options data_options;

int data_init ();
int data_directoryExists       (const char *);
int data_ensureDirectoryExists (const char *);

int data_findDirectoryName (char *, const char *);
int data_getScreenshotPath (char *);
int data_getWorldPath      (char *, const char *);

int data_refreshWorldList ();
