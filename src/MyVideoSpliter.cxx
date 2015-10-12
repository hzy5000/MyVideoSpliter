#include <opencv/cv.h>
#include <opencv/highgui.h>

int main(int argc, char* argv[])
{
	if( argc < 3 )
	{
		printf("VideoSpliter inputVideo outputDir\n");
		return 0;
	}

	bool showFrames = false;
	
	if( argc > 3 )
		showFrames = true;


	char videoFile[ 128 ];
	char outputDir[ 128 ];
	char fileName[ 128 ];

	sprintf( videoFile, "%s", argv[ 1 ] );
	sprintf( outputDir, "%s", argv[ 2 ] );

	CvCapture* capture = cvCaptureFromFile( videoFile );

	if( !capture ) return 0;

	int icounter = 0;

	while( true )
	{
		IplImage* image = cvQueryFrame( capture );

		if( !image ) return 0;

		if( showFrames ) cvShowImage("Image", image );
		
		++icounter;

		// if( icounter > 2160 )
		// {
			sprintf( fileName, "%s/%05d.png",outputDir, icounter /*- 600*/ );
			printf( "%s\n", fileName );
			cvSaveImage( fileName, image );
		//}

		if( showFrames ) cvWaitKey(10);
	}

	return 0;
	return 0;
}

