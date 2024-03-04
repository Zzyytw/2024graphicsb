#include <GL/glut.h> //GLUT 18
#include <stdio.h>
float teapotX = 0,teapotY = 0;
float angle = 0;
void display() //自己
{
    glColor3f(192/255.00,235/255.00,215/255.00);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        // glTranslatef(teapotX,teapotY,0);
        glRotatef(angle,0,1,0);
        glutSolidTeapot(0.3); //自己
    glPopMatrix();
    glutSwapBuffers(); //自己
}

void mouse (int button, int state, int x, int y)
{
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}

void motion (int x, int y)
{
    angle = x;
    display();
}

int main(int argc, char *argv[]) //138
{
    glutInit(&argc, argv); //140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); //143
    glutCreateWindow("week03_mouse_glTranslatef"); //145
    glutDisplayFunc(display); //148
    glutMouseFunc(mouse);//設定mouse函式
    glutMotionFunc(motion);
    glutMainLoop(); //174
}
