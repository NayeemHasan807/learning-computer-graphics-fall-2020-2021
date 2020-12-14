#include <windows.h>
#include <GL/glut.h>

void initGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); //Black and opaque
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 0.0f); //red
	glVertex2f(-0.5f, 0.4f);
	glVertex2f(-0.5f, 0.35f);
	glVertex2f(0.5f, 0.35f);
	glVertex2f(0.5f, 0.4f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.5f, 0.0f); //orange
	glVertex2f(-0.5f, 0.35f);
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(0.5f, 0.3f);
	glVertex2f(0.5f, 0.35f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);//Yellow
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(-0.5f, 0.25f);
	glVertex2f(0.5f, 0.25f);
	glVertex2f(0.5f, 0.3f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(-0.5f, 0.25f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.5f, 0.25f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 1.0f); //blue
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.5f, 0.15f);
	glVertex2f(0.5f, 0.15f);
	glVertex2f(0.5f, 0.2f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(93, 111, 211); //indigo
	glVertex2f(-0.5f, 0.15f);
	glVertex2f(-0.5f, 0.1f);
	glVertex2f(0.5f, 0.1f);
	glVertex2f(0.5f, 0.15f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(238,130,238); //purple
	glVertex2f(-0.5f, 0.1f);
	glVertex2f(-0.5f, 0.05f);
	glVertex2f(0.5f, 0.05f);
	glVertex2f(0.5f, 0.1f);
	glEnd();

	glFlush(); //Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
