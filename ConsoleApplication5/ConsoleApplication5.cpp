

#include <iostream>
#include <GL/freeglut.h>

void RenderSceneCB() {
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
	
}
	int main(int argc, char** argv) {
		glutInit(&argc, argv);
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
		glutInitWindowSize(1024, 768);
		glutInitWindowPosition(100, 100);
		glutCreateWindow("Tutorial 01");
		glutDisplayFunc(RenderSceneCB);
		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		glutMainLoop();
		return 0;
	}
