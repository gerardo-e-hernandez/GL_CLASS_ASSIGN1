#include "Dependencies\glew\include\GL\glew.h"
#include "Dependencies\freeglut\include\GL\freeglut.h"

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_TRIANGLES);
		glVertex2f(-0.8, -0.8);
		glVertex2f(-0.8, 0.8);
		glVertex2f(0.0, 0.0);
		glVertex2f(0.0,0.0);
		glVertex2f(0.8, 0.8);
		glVertex2f(0.8, -0.8);
	glEnd();

	glFlush();

}

void init()
{

	/* set clear color to black */

	 	glClearColor (0.0, 0.0, 0.0, 0.0); 
	/* set fill  color to white */

	 	glColor3f(1.0, 1.0, 1.0); 

	/* set up standard orthogonal view with clipping */
	/* box as cube of side 2 centered at origin */
	/* This is default view and these statement could be removed */

	// glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);  
}

int main(int argc,char** argv)
{
	
	glutInit(&argc ,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Polygons");


	glutDisplayFunc(display);
	init();
	glutMainLoop();

	return 0;
}