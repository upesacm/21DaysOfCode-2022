// 21doc, day 5, Shiva
#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
    
    int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
    /*int l=0,w=0,h=0,x=0;
    l = b.lenght;
    w = b.width;     why was this giving an error but not the current method ?
    h = b.height;    sussy baka */  
    return b.length*b.width*b.height ;
    //return x;
}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
    if(b.height < 41)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
    
}

int main() // int main was hidden in question