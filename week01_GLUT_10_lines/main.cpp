#include <GL/glut.h> //GLUT 18

void display() //�ۤv
{
    glutSolidTeapot(0.3); //�ۤv
    glutSwapBuffers(); //�ۤv
}

int main(int argc, char *argv[]) //138
{
    glutInit(&argc, argv); //140
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); //143
    glutCreateWindow("�ڷӵۦѮv�۪���"); //145
    glutDisplayFunc(display); //148
    glutMainLoop(); //174
}
