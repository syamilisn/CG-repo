#include<GL/glut.h>

void display(void){
	glClearColor(0.0,0.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity(); //restart matrix over at origin
	gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); 
	glFlush(); //force execution of GL commands in finite time
}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(500,500);

	glutCreateWindow("A basic open GL window");

	glutDisplayFunc(display);

	glutMainLoop();
}