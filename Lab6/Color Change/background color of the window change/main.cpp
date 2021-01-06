#include <GL/gl.h>
#include <GL/glut.h>
GLfloat colorchange = 0.0f;
GLfloat increment = 0.01f;


void update(int value) {
    if(colorchange >1.0)
        colorchange = 0.0f;
    colorchange += increment;
    glutTimerFunc(20, update, 0);
    glutPostRedisplay();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    //glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClearColor(colorchange, 0.0f , colorchange, 1.0f);
    glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(480, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Background Color Change");
   glutDisplayFunc(display);
   glutTimerFunc(20, update, 0);
   glutMainLoop();
   return 0;
}
