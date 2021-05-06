//Simple program to create window and display line-segment
#include<GL/glut.h>
void init(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0); //white display screen
	glMatrixMode(GL_PROJECTION); //projection parameters
	gluOrtho2D(0.0, 200.0, 0.0, 150.0);
}

void lineSegment(void) {
	glClear(GL_COLOR_BUFFER_BIT); //create display window
	glColor3f(1.0, 0.0, 0.0); //line segment color- red
	glBegin(GL_LINES);
	glVertex2i(180, 15); //specify line-segment geometry
	glVertex2i(10, 145);
	glEnd();
	glFlush();
}

void main(int argc, char** argv) {
	//InitCreateDisplayMain: IC DM
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(400, 300);

	glutCreateWindow("My first window");

	init();

	glutDisplayFunc(lineSegment);
	glutMainLoop();
}