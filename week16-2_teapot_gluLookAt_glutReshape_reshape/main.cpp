#include <GL/glut.h>
void display() {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot( 0.3 );
    glutSwapBuffers();
}
void reshape(int w, int h){
    float ar = w / (float) h;///aspect ratio 長寬比
    glViewport(0,0,w,h);///設定可看到的範圍
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, ar, 0.1, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0,0,-3,0,0,0,0,1,0);
}

int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutInitWindowSize(200,600);
    glutCreateWindow("week16-2");

    glutReshapeFunc(reshape);///新加這行
    glutDisplayFunc(display);

    glutMainLoop();
}
