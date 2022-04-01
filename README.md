# laba1

#include <GL/glew.h>
#include <iostream>
#include <GL/freeglut.h>
#include <glm/vec3.hpp>
GLuint VBO; //глобальная переменная для хранения указателя на буфер вершин
void RenderSceneCB() {
	glClear(GL_COLOR_BUFFER_BIT); //очистка буфера кадра
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glDrawArrays(GL_POINTS, 0, 1);
	glDrawArrays(GL_TRIANGLES, 0, 3);
	glDisableVertexAttribArray(0);
	glutSwapBuffers();  //меняем фоновый буфер и буфер кадра местами

}


	int main(int argc, char** argv) {
		glutInit(&argc, argv); //инициализируем GLUT
int main(int argc, char** argv) {
	glutInit(&argc, argv); //инициализируем GLUT

		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //включаем двойную буферизацию и буфер цвета
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //включаем двойную буферизацию и буфер цвета

		glutInitWindowSize(1024, 768);
		glutInitWindowPosition(100, 100); //задаем параметры окна и создаем его
		glutCreateWindow("Tutorial 01"); // заголовок

		glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
		glutDisplayFunc(RenderSceneCB); //очистка буфера

		GLenum res = glewInit();
		if (res != GLEW_OK)
		{
			fprintf(stderr, "Error: '%s'\n", glewGetErrorString(res));
			return 1;
		} //проверяем на ошибки

		glm::vec3 Vertices[1];
		Vertices[0] = glm::vec3(0.0f, 0.0f, 0.0f); // создаем точку в центре экрана
	glutInitWindowSize(1024, 768);
	glutInitWindowPosition(100, 100); //задаем параметры окна и создаем его
	glutCreateWindow("Tutorial 01"); // заголовок

		glGenBuffers(1, &VBO); //функция для генерации объектов переменных типов
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glutDisplayFunc(RenderSceneCB); //очистка буфера

	GLenum res = glewInit();
	if (res != GLEW_OK)
	{
		fprintf(stderr, "Error: '%s'\n", glewGetErrorString(res));
		return 1;
	} //проверяем на ошибки

		glutMainLoop();

	glm::vec3 Vertices[3];
	Vertices[0] = glm::vec3(1.0f, 1.0f, 0.0f);
	Vertices[1] = glm::vec3(-1.0f, 1.0f, 0.0f);
	Vertices[2] = glm::vec3(0.0f, -1.0f, 0.0f);


	}
	glGenBuffers(1, &VBO); //функция для генерации объектов переменных типов
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);


	glutMainLoop();



}
