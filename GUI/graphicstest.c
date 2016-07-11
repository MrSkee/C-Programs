/*Sean Kee*/
/*Graphics Test*/

#include <stdio.h>
#include <GL/glut.h>
#include <GL/gl.h>

void display() {
	glClearColor(.5, 0, 1, 0); /* Changes Window Color (R, G, B, alpha) Numbers between 1 and 0*/
	glClear(GL_COLOR_BUFFER_BIT); /* Clears the Screen to the desired colorset*/
	glFlush(); /*Executes the commands to the screen instead of storing it in a buffer*/
}

int main(int argc, char**argv) {
	glutInit(&argc, argv); /*Initalizes OpenGL*/
	glutInitWindowPosition(100,100); /*Window Location on screen*/
	glutInitWindowSize(500,500); /*Window Size*/
	glutCreateWindow("Hello World"); /*Window Name*/
	glutDisplayFunc(display); /*Runs display function*/
	glutMainLoop(); /*Opens window*/

	return 0;	
}
