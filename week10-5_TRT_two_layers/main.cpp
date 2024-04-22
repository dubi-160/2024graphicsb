#include <GL/glut.h>
void myBody(){
    glColor3f(1,0,0);///紅色身體
    glutWireCube(0.6);///方塊
}
void myArm(){
    glPushMatrix();
        glColor3f(0,1,0);///綠色手臂
        glScalef(1.5,0.5,0.5);///寬高
        glutWireCube(0.3);///方塊
    glPopMatrix();
}
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        ///glTranslatef(-0.6, +0.3, 0);
         myBody();
     glPopMatrix();
     glPushMatrix();
        glTranslatef(+0.3, +0.3, 0);
        glRotatef(angle++,0,0,1);
        glTranslatef(0.225,0,0);///控制旋轉中心
        myArm();///右手臂
        glPushMatrix();
            glTranslatef(0.225, 0, 0);
            glRotatef(angle++,0,0,1);
            glTranslatef(0.225, 0, 0);///控制旋轉中心
            myArm();///右手肘
        glPopMatrix();
     glPopMatrix();
     glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week10-2_TRT_glutIdleFunc_rotate");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}

