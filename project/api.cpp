#define IMPLEMENT_API
#include <hx/CFFI.h>

#include <glut.h>

void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0); // background color
	glColor3f(1.0, 0, 0);  // foreground color

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glVertex2f(0, 0.5);
		glVertex2f(0.5, 0);
		glVertex2f(-0.5, 0);
	glEnd();
	glFlush();
}

value _main() {
	int argc = 1;
	char *argv = (char*)"glut";
	char **vptr = &argv;
	glutInit(&argc,vptr);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Example"); // open a window named "Example"
	glutDisplayFunc(mydisplay);  // display callback
	init(); // set OpenGL state
	glutMainLoop(); // enter event loop
	return alloc_null();
}
DEFINE_PRIM(_main,0);