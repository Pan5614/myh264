#ifndef CONFIG_H_
#define CONFIG_H_

struct yuv422_sample {
	__u8 b1;
	__u8 b2;
	__u8 b3;
	__u8 b4;
};


struct bpp32_pixel {
	__u8 red;
	__u8 green;
	__u8 blue;
	__u8 alpha;
};



static char *MY_CAMERA = "/dev/video0";  //摄像头设备路径和名字 
#define CLEAR(x)	memset(&(x), 0, sizeof(x))


//#define  CBUF_NUM  21
#define  CBUF_NUM  1




#endif
