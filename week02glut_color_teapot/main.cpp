#include <GL/glut.h>
void display(){

    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02glut_color_teapot");
    glutDisplayFunc(display);
    glutMainLoop();
}
