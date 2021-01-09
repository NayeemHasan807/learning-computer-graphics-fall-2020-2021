#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
GLfloat xmascolorchanger = 50;
GLfloat xmascolorchangeg = 100;
GLfloat xmascolorchangeb = 150;
GLfloat xmasincrement = 1;

void xmascolorupdate(int value) //u_xmas_1
{
    if(xmascolorchanger >255 && xmascolorchangeg >255 && xmascolorchangeb >255)
    {
        xmascolorchanger = 20;
        xmascolorchangeg = 50;
        xmascolorchangeb = 70;
    }
    xmascolorchanger += xmasincrement;
    xmascolorchangeg += xmasincrement;
    xmascolorchangeb += xmasincrement;

    glutTimerFunc(20, xmascolorupdate, 0);
    glutPostRedisplay();
}

void init() {

   gluOrtho2D(-5,5,-5,5);

}

void xmastree_background() //f_xmas_1
{
    glBegin(GL_POLYGON); //floor
    glColor3ub(95, 127, 104); //Rgb combination green
    glVertex2f(-3.0f, -1.0f);
    glVertex2f(5.0f, -1.0f);
    glVertex2f(5.0f, -5.0f);
    glVertex2f(-5.0f, -5.0f);
    glEnd();
    glBegin(GL_POLYGON); //wall
    glColor3ub(255, 204, 229); //Rgb combination purple
    glVertex2f(-3.0f, -1.0f);
    glVertex2f(-3.0f, 5.0f);
    glVertex2f(-5.0f, 5.0f);
    glVertex2f(-5.0f, -5.0f);
    glEnd();
    glBegin(GL_POLYGON); //wall
    glColor3ub(255, 204, 229); //Rgb combination purple
    glVertex2f(-3.0f, -1.0f);
    glVertex2f(5.0f, -1.0f);
    glVertex2f(5.0f, 5.0f);
    glVertex2f(-3.0f, 5.0f);
    glEnd();
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-3.0f, -1.0f);
    glVertex2f(5.0f, -1.0f);
    glVertex2f(-3.0f, -1.0f);
    glVertex2f(-5.0f, -5.0f);
    glVertex2f(-3.0f, -1.0f);
    glVertex2f(-3.0f, 5.0f);
    glEnd();
}

void xmastree_tob() //f_xmas_2
{
    glBegin(GL_POLYGON); //river
    glColor3ub(98, 177, 222); //Rgb combination blue
    glVertex2f(-0.7f, -1.5f);
    glVertex2f(-0.5f, -3.0f);
    glVertex2f(0.5f, -3.0f);
    glVertex2f(0.7f, -1.5f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-0.7f, -1.5f);
    glVertex2f(-0.5f, -3.0f);
    glVertex2f(-0.5f, -3.0f);
    glVertex2f(0.5f, -3.0f);
    glVertex2f(0.5f, -3.0f);
    glVertex2f(0.7f, -1.5f);
    glVertex2f(-0.7f, -1.5f);
    glVertex2f(0.7f, -1.5f);
    glEnd();
}

void xmastree_trunk() //f_xmas_3
{
    glBegin(GL_POLYGON); //river
    glColor3ub(73, 43, 28); //Rgb combination brown
    glVertex2f(-0.1f, -1.5f);
    glVertex2f(-0.1f, -1.2f);
    glVertex2f(0.1f, -1.2f);
    glVertex2f(0.1f, -1.5f);
    glEnd();

    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-0.1f, -1.5f);
    glVertex2f(-0.1f, -1.2f);
    glVertex2f(-0.1f, -1.2f);
    glVertex2f(0.1f, -1.2f);
    glVertex2f(0.1f, -1.2f);
    glVertex2f(0.1f, -1.5f);
    glVertex2f(-0.1f, -1.5f);
    glVertex2f(0.1f, -1.5f);
    glEnd();
}

void xmastree_leaf() //f_xmas_4
{
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 85, 3); //Rgb combination green
    glVertex2f(0.0f, 0.7f);
	glVertex2f(-1.5f, -1.2f);
	glVertex2f(1.5f, -1.2f);
	glEnd();
	glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(-1.5f, -1.2f);
	glVertex2f(1.5f, -1.2f);
    glVertex2f(-1.1f, -0.7f);
	glVertex2f(-1.5f, -1.2f);
    glVertex2f(1.1f, -0.7f);
    glVertex2f(1.5f, -1.2f);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(20, 130, 20); //Rgb combination green
    glVertex2f(0.0f, 1.0f);
	glVertex2f(-1.3f, -0.7f);
	glVertex2f(1.3f, -0.7f);
	glEnd();
	glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.0f, 1.0f);
	glVertex2f(-1.3f, -0.7f);
	glVertex2f(-1.3f, -0.7f);
	glVertex2f(1.3f, -0.7f);
	glVertex2f(1.3f, -0.7f);
	glVertex2f(0.0f, 1.0f);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(20, 180, 20); //Rgb combination green
    glVertex2f(0.0f, 1.3f);
	glVertex2f(-1.1f, -0.2f);
	glVertex2f(1.1f, -0.2f);
	glEnd();
	glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.0f, 1.3f);
	glVertex2f(-1.1f, -0.2f);
	glVertex2f(-1.1f, -0.2f);
	glVertex2f(1.1f, -0.2f);
	glVertex2f(1.1f, -0.2f);
	glVertex2f(0.0f, 1.3f);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(40, 180, 75); //Rgb combination green
    glVertex2f(0.0f, 1.6f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(0.9f, 0.3f);
	glEnd();
	glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.0f, 1.6f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(0.9f, 0.3f);
	glVertex2f(0.9f, 0.3f);
	glVertex2f(0.0f, 1.6f);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(110, 180, 100); //Rgb combination green
    glVertex2f(0.0f, 1.9f);
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(0.7f, 0.8f);
	glEnd();
	glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.0f, 1.9f);
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(-0.7f, 0.8f);
	glVertex2f(0.7f, 0.8f);
	glVertex2f(0.7f, 0.8f);
	glVertex2f(0.0f, 1.9f);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(145, 231, 100); //Rgb combination green
    glVertex2f(0.0f, 2.2f);
	glVertex2f(-0.5f, 1.3f);
	glVertex2f(0.5f, 1.3f);
	glEnd();
	glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.0f, 2.2f);
	glVertex2f(-0.5f, 1.3f);
	glVertex2f(-0.5f, 1.3f);
	glVertex2f(0.5f, 1.3f);
	glVertex2f(0.5f, 1.3f);
	glVertex2f(0.0f, 2.2f);
    glEnd();

	glBegin(GL_TRIANGLES);
    glColor3ub(190, 231, 100); //Rgb combination green
    glVertex2f(0.0f, 2.5f);
	glVertex2f(-0.3f, 1.8f);
	glVertex2f(0.3f, 1.8f);
	glEnd();
	glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.0f, 2.5f);
	glVertex2f(-0.3f, 1.8f);
	glVertex2f(-0.3f, 1.8f);
	glVertex2f(0.3f, 1.8f);
	glVertex2f(0.3f, 1.8f);
	glVertex2f(0.0f, 2.5f);
	glEnd();
}

void decoration_star_1() //f_xmas_5
{
    glBegin(GL_TRIANGLES);
    glColor3ub(255, xmascolorchangeg, 0); //Rgb combination
    glVertex2f(0.0f, 3.0f);
    glVertex2f(0.0f, 2.7f);
    glVertex2f(0.15f, 2.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, xmascolorchangeg, 0); //Rgb combination
    glVertex2f(0.0f, 3.0f);
    glVertex2f(0.0f, 2.7f);
    glVertex2f(-0.15f, 2.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(255, xmascolorchangeg, 0); //Rgb combination
    glVertex2f(0.2f, 2.8f);
    glVertex2f(0.0f, 2.7f);
    glVertex2f(-0.2f, 2.8f);
    glEnd();
}

void decoration_star_2() //f_xmas_6
{
    glBegin(GL_TRIANGLES);
    glColor3ub(xmascolorchanger, 0, 204); //Rgb combination
    glVertex2f(0.0f, 3.0f);
    glVertex2f(0.0f, 2.7f);
    glVertex2f(0.15f, 2.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(xmascolorchanger, 0, 204); //Rgb combination
    glVertex2f(0.0f, 3.0f);
    glVertex2f(0.0f, 2.7f);
    glVertex2f(-0.15f, 2.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(xmascolorchanger, 0, 204); //Rgb combination
    glVertex2f(0.2f, 2.8f);
    glVertex2f(0.0f, 2.7f);
    glVertex2f(-0.2f, 2.8f);
    glEnd();
}

void decoration_light_1() //f_xmas_7
{
    glLineWidth(2.5);
	glBegin(GL_POLYGON);// Draw 1x1 Square centered at origin
	glColor3ub(xmascolorchanger, xmascolorchangeg , xmascolorchangeb);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
}
void decoration_light_2() //f_xmas_8
{
    glLineWidth(1.5);
	glBegin(GL_POLYGON);// Draw a 1x1 Square centered at origin
	glColor3ub(xmascolorchangeb, xmascolorchangeg , xmascolorchanger);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
}
void decoration_light_3() //f_xmas_9
{
    glLineWidth(1.5);
	glBegin(GL_POLYGON);// Draw a 1x1 Square centered at origin
	glColor3ub(xmascolorchangeg, xmascolorchanger , xmascolorchangeb);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
}
void decoration_light_4() //f_xmas_10
{
    glLineWidth(1.5);
	glBegin(GL_POLYGON);// Draw a 1x1 Square centered at origin
	glColor3ub(155, xmascolorchanger , xmascolorchangeb);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
}
void decoration_light_5() //f_xmas_11
{
    glLineWidth(1.5);
	glBegin(GL_POLYGON);// Draw a 1x1 Square centered at origin
	glColor3ub(155 , xmascolorchangeb,  155);
	for(int i=0;i<100;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/100;
            float r=0.15;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
}


void xmastree() //f_xmas_12
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    xmastree_tob();
    glPopMatrix();
    glPushMatrix();
    xmastree_trunk();
    glPopMatrix();
    glPushMatrix();
    xmastree_leaf();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.5f,0.5f,0.0f);
    decoration_light_1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.3f,1.0f,0.0f);
    decoration_light_2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.05f,1.8f,0.0f);
    decoration_light_3();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.5f,-0.5f,0.0f);
    decoration_light_4();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.5f,-0.8f,0.0f);
    decoration_light_5();
    glPopMatrix();
    glPushMatrix();
    glLineWidth(3.5);
    glBegin(GL_LINES);
    glColor3d(0.0, 0.0, 0.0); //black
    glVertex2f(0.0f, 2.5f);
	glVertex2f(0.0f, 2.7f);
	glEnd();
    decoration_star_1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.1f,-2.0f,0.0f);
    decoration_star_2();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-0.9f,-3.7f,0.0f);
    decoration_star_1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0.8f,-3.6f,0.0f);
    decoration_star_2();
    glPopMatrix();
}

void display_x()
{

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    xmastree_background();
    glPopMatrix();
    glPushMatrix();
    xmastree();
    glPopMatrix();
    glutSwapBuffers();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                    // Initialize GLUT
	glutInitWindowSize(480, 300);           // Set the window's initial width & height
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Xmas-Tree");       // Create a window with the given title
	glutDisplayFunc(display_x);               // Register display callback handler for window re-paint
    init();                         // Enter the event-processing loop
	glutTimerFunc(20, xmascolorupdate, 0);
	glutMainLoop();
	return 0;
}




