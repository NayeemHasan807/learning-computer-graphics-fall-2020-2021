#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //level 1
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 1.0f, 0.8f);//light green
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(-0.4f, -0.2f);
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.4f, 0.0f);
	glEnd();

    //level 2
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 1.0f, 0.8f);//light green
	glVertex2f(-0.4f, 0.2f);
	glVertex2f(-0.4f, 0.0f);
	glVertex2f(0.4f, 0.0f);
	glVertex2f(0.4f, 0.2f);
	glEnd();

	//level 3
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 1.0f, 0.8f);//light green
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.4f, 0.2f);
	glVertex2f(0.4f, 0.2f);
	glVertex2f(0.4f, 0.4f);
	glEnd();

	//level 4
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 1.0f, 0.8f);//light green
	glVertex2f(-0.4f, 0.6f);
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(0.4f, 0.4f);
	glVertex2f(0.4f, 0.6f);
	glEnd();

	//level 5
	glBegin(GL_POLYGON);
	glColor3f(0.8f, 1.0f, 0.8f);//light green
	glVertex2f(-0.4f, 0.8f);
	glVertex2f(-0.4f, 0.6f);
	glVertex2f(0.4f, 0.6f);
	glVertex2f(0.4f, 0.8f);
	glEnd();

    //entrance of level 1
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(-0.05f, -0.2f);
	glVertex2f(-0.05f, -0.05f);
	glVertex2f(0.05f, -0.05f);
	glVertex2f(0.05f, -0.2f);
	glEnd();

	//window 1 of level 1
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(-0.3f, -0.05f);
	glVertex2f(-0.3f, -0.15f);
	glVertex2f(-0.2f, -0.15f);
	glVertex2f(-0.2f, -0.05f);
	glEnd();

	//window 2 of level 1
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(0.3f, -0.05f);
	glVertex2f(0.3f, -0.15f);
	glVertex2f(0.2f, -0.15f);
	glVertex2f(0.2f, -0.05f);
	glEnd();

	//window 1 of level 2
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(-0.3f, 0.05f);
	glVertex2f(-0.3f, 0.15f);
	glVertex2f(-0.2f, 0.15f);
	glVertex2f(-0.2f, 0.05f);
	glEnd();

	//window 2 of level 2
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(0.3f, 0.05f);
	glVertex2f(0.3f, 0.15f);
	glVertex2f(0.2f, 0.15f);
	glVertex2f(0.2f, 0.05f);
	glEnd();

	//window 1 of level 3
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(-0.3f, 0.35f);
	glVertex2f(-0.3f, 0.25f);
	glVertex2f(-0.2f, 0.25f);
	glVertex2f(-0.2f, 0.35f);
	glEnd();

	//window 2 of level 3
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.3f, 0.25f);
	glVertex2f(0.2f, 0.25f);
	glVertex2f(0.2f, 0.35f);
	glEnd();

	//window 1 of level 4
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(-0.3f, 0.55f);
	glVertex2f(-0.3f, 0.45f);
	glVertex2f(-0.2f, 0.45f);
	glVertex2f(-0.2f, 0.55f);
	glEnd();

	//window 2 of level 4
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(0.3f, 0.55f);
	glVertex2f(0.3f, 0.45f);
	glVertex2f(0.2f, 0.45f);
	glVertex2f(0.2f, 0.55f);
	glEnd();

	//window 1 of level 5
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(-0.3f, 0.75f);
	glVertex2f(-0.3f, 0.65f);
	glVertex2f(-0.2f, 0.65f);
	glVertex2f(-0.2f, 0.75f);
	glEnd();

	//window 2 of level 5
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);//green
	glVertex2f(0.3f, 0.75f);
	glVertex2f(0.3f, 0.65f);
	glVertex2f(0.2f, 0.65f);
	glVertex2f(0.2f, 0.75f);
	glEnd();



	glFlush();                              // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                    // Initialize GLUT
	glutCreateWindow("OpenGL Setup");       // Create a window with the given title
	glutInitWindowSize(420, 420);           // Set the window's initial width & height
	glutDisplayFunc(display);               // Register display callback handler for window re-paint
	glutMainLoop();                         // Enter the event-processing loop
	return 0;
}
