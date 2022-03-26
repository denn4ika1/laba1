

#include <iostream>
#include <GL/freeglut.h>

void RenderSceneCB() {
	glClear(GL_COLOR_BUFFER_BIT); //очистка буфера кадра
	glutSwapBuffers();  //меняем фоновый буфер и буфер кадра местами
	
}
	int main(int argc, char** argv) {
		glutInit(&argc, argv); //инициализируем GLUT
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //включаем двойную буферизацию и буфер цвета
		glutInitWindowSize(1024, 768);
		glutInitWindowPosition(100, 100); //задаем параметры окна и создаем его
		glutCreateWindow("Tutorial 01"); // заголовок
		glutDisplayFunc(RenderSceneCB);
		glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // задаем цвет окна
		glutMainLoop();
		return 0;
	}
