#ifndef MMAP_H
#define MMAP_H

#include <sys/cdefs.h>

/* open file for reading, mmap whole file, close file, write length of
 * map in filesize and return pointer to map. */
extern char* mmap_read(const char *filename,unsigned long* filesize) __THROW;

/* open file for writing, mmap whole file privately (copy on write),
 * close file, write length of map in filesize and return pointer to
 * map. */
extern int mmap_write(const char *filename,unsigned long* filesize) __THROW;

/* open file for writing, mmap whole file shared, close file, write
 * length of map in filesize and return pointer to map. */
extern int mmap_shared(const char *filename,unsigned long* filesize) __THROW;

#endif