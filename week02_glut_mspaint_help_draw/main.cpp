#include <GL/glut.h> //GLUT 18

void display() //自己
{
    glBegin(GL_POLYGON);
        glColor3f(1,1,1);
        glVertex2f((30-200)/200.0,-(45-200)/200.0);
        glVertex2f((46-200)/200.0,-(102-200)/200.0);
        glVertex2f((84-200)/200.0,-(23-200)/200.0);
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char *argv[]) //138
{
    glutInit(&argc, argv); //140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); //143
    glutCreateWindow("我照著老師抄的喔"); //145
    glutDisplayFunc(display); //148
    glutMainLoop(); //174
}
