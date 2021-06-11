#include <iostream>
#include <OpenGL/OpenGL.h>
#include <GLUT/GLUT.h>

static int head = 90, body = 0, body2 = 0,shoulder = 0, elbow = 0,
hand = 0 , wing = 0 ,wing1_1 = 0 ,wing1_2 = 0 , wing2= 0 ,wing3 = 0, wing4 = 0,
wing5 = 0 ,wing6 = 0, foot = 10, foot2 = 20,Main_Nail = 0, Nail = 0;



void myInit(char *progname)
{
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow(progname);
    glClearColor(0.0, 0.0, 0.0, 0.0);
}



void myDisplay(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    /*頭*/
    glPushMatrix();
    
            glTranslated(0.0, -0.1, 0.0);
            glRotated((double)head, 1.0, 0.0, 0.0);
            glTranslated(0.0, 0.0, 0.0);
            glPushMatrix();
                glScaled(0.5, 1.0, 0.3);
                glutWireSphere(1, 10, 10);
            glPopMatrix();
    
            glTranslated(0.0, 0.0, 0.3);
            glRotated((double)head, 1.0, 0.0, 0.0);
            glTranslated(0.0, 0.0, 0.0);
            glPushMatrix();
                glScaled(1.0, 2.0, 0.3);
                glutWireSphere(0.2, 3, 3);
            glPopMatrix();
            
    
    glPopMatrix();
    
    
    
    
    
    
    glPushMatrix();
    
        /*第1関節*/
    
            glTranslated(0.5, -0.3, 0.0);
            glRotated((double)shoulder, 1.0, 0.0, 1.0);
            glTranslated(0.5, 0.0, 0.0);
            glPushMatrix();
                glScaled(1.0, 0.6, 0.5);
                glutWireCube(1.0);
            glPopMatrix();
    
            glPushMatrix();
    
                glTranslated(-0.33, -0.8 , 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.0, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.33, 1.0, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
    
                
                glTranslated(0.33, 0.5 , 0.0);
                glRotated((double)wing1_1, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.5 ,0.0);
                glPushMatrix();
                    glScaled(0.33, 1.0, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
    
                glTranslated(0.33, 0.5 , 0.0);
                glRotated((double)wing1_2, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.5 ,0.0);
                glPushMatrix();
                    glScaled(0.33, 1.0, 1.0);
                    glutWireCube(1.0);
                glPopMatrix();
    
                
    
            glPopMatrix();

            /*第2関節*/
    
            glTranslated(0.5, 0.0, 0.0);
            glRotated((double)elbow, 0.0, -1.0, 1.0);
            glTranslated(1.75, 0.0, 0.0);
            glPushMatrix();
                glScaled(3.5, 0.4, 1.0);
                glutWireCube(1.0);
            glPopMatrix();
    
            glPushMatrix();
    
                glTranslated(-1.5, -0.7, 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.0, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.0, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
    
    
                glPushMatrix();

                    glTranslated(0.0, -0.5 , 0.0);
                    glRotated((double)wing2, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.5 ,0.0);
                    glPushMatrix();
                    glScaled(0.5, 1.0, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();

                glPopMatrix();
    
                glTranslated(0.0, 0.0 , 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.5, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.0, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
                
                glPushMatrix();

                    glTranslated(0.0, -0.5 , 0.0);
                    glRotated((double)wing2, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.6 ,0.0);
                    glPushMatrix();
                        glScaled(0.5, 1.2, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();

                glPopMatrix();
    
                glTranslated(0.0, 0.0 , 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.5, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.0, 1.0);
                    glutWireCube(1.0);
                glPopMatrix();
    
                glPushMatrix();

                    glTranslated(0.0, -0.5 , 0.0);
                    glRotated((double)wing2, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.7 ,0.0);
                    glPushMatrix();
                        glScaled(0.5, 1.4, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();

                glPopMatrix();
    
                glTranslated(0.0, 0.0 , 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.5, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.0, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
    
                glPushMatrix();

                    glTranslated(0.0, -0.5 , 0.0);
                    glRotated((double)wing2, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.8 ,0.0);
                    glPushMatrix();
                        glScaled(0.5, 1.6, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();

                glPopMatrix();
    
                glTranslated(0.0, 0.0 , 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.5, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.0, 1.0);
                    glutWireCube(1.0);
                glPopMatrix();
    
                glPushMatrix();
    
                    glTranslated(0.0, -0.5, 0.0);
                    glRotated((double)wing2, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.9 ,0.0);
                    glPushMatrix();
                        glScaled(0.5, 1.8, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();

                glPopMatrix();
    
                glTranslated(0.0, 0.0 , 0.0);
                glRotated((double)wing, 0.0, -1.0, 1.0);
                glTranslated(0.5, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.0, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
    
                glPushMatrix();

                    glTranslated(0.0, -0.5, 0.0);
                    glRotated((double)wing2, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.9 ,0.0);
                    glPushMatrix();
                        glScaled(0.5, 1.8, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();

                glPopMatrix();
                

                glTranslated(0.0, 0.0 , 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.5, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.0, 1.0);
                    glutWireCube(1.0);
                glPopMatrix();
    
                glPushMatrix();

                    glTranslated(0.0, -0.5, 0.0);
                    glRotated((double)wing2, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.9 ,0.0);
                    glPushMatrix();
                    glScaled(0.5, 1.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();
    
    
            /*第3関節*/
    
    
    
            glPopMatrix();
    
            glTranslated(1.75, 0.0, 0.0);
            glRotated((double)hand, 0.0, -3.0, 1.0);
            glTranslated(0.5, 0.0, 0.0);
            glPushMatrix();
                glScaled(1.0, 0.2, 1.0);
                glutWireCube(1.0);
            glPopMatrix();
    
            glPushMatrix();
    
                glTranslated(-0.33, -0.6 , 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.0, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.33, 1.0, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
    
                glPushMatrix();

                    glTranslated(0.0, -0.5, 0.0);
                    glRotated((double)wing3, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.9 ,0.0);
                    glPushMatrix();
                        glScaled(0.33, 1.8, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();
    
                glPopMatrix();
    
                glTranslated(0.0, 0.0 , 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.33, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.33, 1.0, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
    
                glPushMatrix();

                    glTranslated(0.0, -0.5, 0.0);
                    glRotated((double)wing3, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.9 ,0.0);
                    glPushMatrix();
                        glScaled(0.33, 1.8, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();

                glPopMatrix();

                glTranslated(0.33, 0.0 , 0.0);
                glRotated((double)wing, 0.0, 0.0, 1.0);
                glTranslated(0.0, 0.0 ,0.0);
                glPushMatrix();
                    glScaled(0.33, 1.0, 1.0);
                    glutWireCube(1.0);
                glPopMatrix();
    
                glPushMatrix();

                    glTranslated(0.0, -0.5, 0.0);
                    glRotated((double)wing4, 0.0, 0.0, 1.0);
                    glTranslated(0.0, -0.9 ,0.0);
                    glPushMatrix();
                        glScaled(0.1, 1.8, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();
                
                glPopMatrix();
    
                glPushMatrix();
    
                    glTranslated(0.0, -0.5, 0.0);
                    glRotated((double)wing5, 0.0, 0.0, 1.0);
                    glTranslated(0.1, -0.9, 0.0);
                    glPushMatrix();
                        glScaled(0.1, 1.8, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();
    
                glPopMatrix();
    
    
                glPushMatrix();
    
                    glTranslated(0.0, -0.5, 0.0);
                    glRotated((double)wing6, 0.0, 0.0, 1.0);
                    glTranslated(0.2, -0.9 ,0.0);
                    glPushMatrix();
                        glScaled(0.1, 1.8, 0.5);
                        glutWireCube(1.0);
                    glPopMatrix();
                
                glPopMatrix();
    
            glPopMatrix();
    
            glPopMatrix();
        
        glPopMatrix();
    
        glPushMatrix();
        /*第1関節*/

        glTranslated(-0.5, -0.3, 0.0);
        glRotated((double)shoulder, 1.0, 0.0, -1.0);
        glTranslated(-0.5, 0.0, 0.0);
        glPushMatrix();
            glScaled(1.0, 0.6, 0.5);
            glutWireCube(1.0);
        glPopMatrix();

        glPushMatrix();

            glTranslated(0.33, -0.8 , 0.0);
            glRotated(-(double)wing, 0.0, 0.0, 1.0);
            glTranslated(0.0, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            
            glTranslated(-0.33, 0.5 , 0.0);
            glRotated(-(double)wing1_1, 0.0, 0.0, 1.0);
            glTranslated(-0.0, -0.5 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glTranslated(-0.33, 0.5 , 0.0);
            glRotated(-(double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -0.5 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.0, 1.0);
                glutWireCube(1.0);
            glPopMatrix();

            

        glPopMatrix();

        /*第2関節*/

        glTranslated(-0.5, 0.0, 0.0);
        glRotated(-(double)elbow, 0.0, -1.0, 1.0);
        glTranslated(-1.75, 0.0, 0.0);
        glPushMatrix();
            glScaled(3.5, 0.4, 1.0);
            glutWireCube(1.0);
        glPopMatrix();

        glPushMatrix();

            glTranslated(1.5, -0.7, 0.0);
            glRotated(-(double)wing, 0.0, 0.0, 1.0);
            glTranslated(0.0, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.5, 1.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();


            glPushMatrix();

                glTranslated(0.0, -0.5 , 0.0);
                glRotated(-(double)wing2, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.5 ,0.0);
                glPushMatrix();
                glScaled(0.5, 1.0, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();

            glTranslated(0.0, 0.0 , 0.0);
            glRotated(-(double)wing, 0.0, 0.0, 1.0);
            glTranslated(-0.5, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.5, 1.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();
            
            glPushMatrix();

                glTranslated(0.0, -0.5 , 0.0);
                glRotated(-(double)wing2, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.6 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.2, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();

            glTranslated(0.0, 0.0 , 0.0);
            glRotated((double)wing, 0.0, 0.0, 1.0);
            glTranslated(-0.5, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.5, 1.0, 1.0);
                glutWireCube(1.0);
            glPopMatrix();

            glPushMatrix();

                glTranslated(0.0, -0.5 , 0.0);
                glRotated(-(double)wing2, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.7 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.4, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();

            glTranslated(0.0, 0.0 , 0.0);
            glRotated((double)wing, 0.0, 0.0, 1.0);
            glTranslated(-0.5, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.5, 1.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glPushMatrix();

                glTranslated(0.0, -0.5 , 0.0);
                glRotated(-(double)wing2, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.8 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.6, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();

            glTranslated(0.0, 0.0 , 0.0);
            glRotated((double)wing, 0.0, 0.0, 1.0);
            glTranslated(-0.5, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.5, 1.0, 1.0);
                glutWireCube(1.0);
            glPopMatrix();

            glPushMatrix();

                glTranslated(0.0, -0.5, 0.0);
                glRotated(-(double)wing2, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.9 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();

            glTranslated(0.0, 0.0 , 0.0);
            glRotated((double)wing, 0.0, -1.0, 1.0);
            glTranslated(-0.5, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.5, 1.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glPushMatrix();

                glTranslated(0.0, -0.5, 0.0);
                glRotated(-(double)wing2, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.9 ,0.0);
                glPushMatrix();
                    glScaled(0.5, 1.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();
            

            glTranslated(0.0, 0.0 , 0.0);
            glRotated((double)wing, 0.0, 0.0, 1.0);
            glTranslated(-0.5, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.5, 1.0, 1.0);
                glutWireCube(1.0);
            glPopMatrix();

            glPushMatrix();

                glTranslated(0.0, -0.5, 0.0);
                glRotated(-(double)wing2, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.9 ,0.0);
                glPushMatrix();
                glScaled(0.5, 1.8, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

        glPopMatrix();


        /*第3関節*/



        glPopMatrix();

        glTranslated(-1.75, 0.0, 0.0);
        glRotated(-(double)hand, 0.0, -3.0, 1.0);
        glTranslated(-0.5, 0.0, 0.0);
        glPushMatrix();
            glScaled(1.0, 0.2, 1.0);
            glutWireCube(1.0);
        glPopMatrix();

        glPushMatrix();

            glTranslated(0.33, -0.6 , 0.0);
            glRotated((double)wing, 0.0, 0.0, 1.0);
            glTranslated(0.0, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glPushMatrix();

                glTranslated(0.0, -0.5, 0.0);
                glRotated(-(double)wing3, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.9 ,0.0);
                glPushMatrix();
                    glScaled(0.33, 1.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();

            glTranslated(0.0, 0.0 , 0.0);
            glRotated((double)wing, 0.0, 0.0, 1.0);
            glTranslated(-0.33, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glPushMatrix();

                glTranslated(0.0, -0.5, 0.0);
                glRotated(-(double)wing3, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.9 ,0.0);
                glPushMatrix();
                    glScaled(0.33, 1.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();

            glTranslated(-0.33, 0.0 , 0.0);
            glRotated((double)wing, 0.0, 0.0, 1.0);
            glTranslated(0.0, 0.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.0, 1.0);
                glutWireCube(1.0);
            glPopMatrix();

            glPushMatrix();

                glTranslated(0.0, -0.5, 0.0);
                glRotated(-(double)wing4, 0.0, 0.0, 1.0);
                glTranslated(0.0, -0.9 ,0.0);
                glPushMatrix();
                    glScaled(0.1, 1.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            
            glPopMatrix();

            glPushMatrix();

                glTranslated(0.0, -0.5, 0.0);
                glRotated(-(double)wing5, 0.0, 0.0, 1.0);
                glTranslated(-0.1, -0.9, 0.0);
                glPushMatrix();
                    glScaled(0.1, 1.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();

            glPopMatrix();


            glPushMatrix();

                glTranslated(0.0, -0.5, 0.0);
                glRotated(-(double)wing6, 0.0, 0.0, 1.0);
                glTranslated(-0.2, -0.9 ,0.0);
                glPushMatrix();
                    glScaled(0.1, 1.8, 0.5);
                    glutWireCube(1.0);
                glPopMatrix();
            
            glPopMatrix();

        glPopMatrix();

        glPopMatrix();
    
    glPopMatrix();
    
   /*上半身*/
    
    
   glPushMatrix();

        glRotated((double)body, 1.0, 0.0, 0.0);
        glTranslated(0.0, -0.6, 0.0);
        glPushMatrix();
            glScaled(0.9,0.7, 0.7);
            glutWireCube(1);
        glPopMatrix();
        
        glPushMatrix();
    
            glTranslated(0.0, -0.8, 0.0);
            glRotated((double)body2, 1.0, 0.0, 0.0);
            glTranslated(0.0, 0.0, 0.0);
            glPushMatrix();
                glScaled(0.5, 1.0, 1.0);
                glutWireCube(1);
            glPopMatrix();

        
    
            glPopMatrix();
    
    glPopMatrix();
    
    
    
    
    
    /*下半身*/
    
    
    glPushMatrix();

        glTranslated(0.6, -1.4 ,0.0);
        glRotated((double)foot, 0.0, 0.0, 1.0);
        glTranslated(0.0, 0.0, 0.0);
        glPushMatrix();
            glScaled(0.5, 1.0, 0.5);
            glutWireCube(1.0);
        glPopMatrix();
    
        glTranslated(-0.2, -1.2,0.0);
        glRotated(-(double)foot2, 0.0, 0.0, 1.0);
        glTranslated(0.0, 0.0, 0.0);
        glPushMatrix();
            glScaled(0.2, 1.5, 0.5);
            glutWireCube(1.0);
        glPopMatrix();
    
    glPopMatrix();
    
    glPushMatrix();

        glTranslated(-0.6, -1.4 ,0.0);
        glRotated(-(double)foot, 0.0, 0.0, 1.0);
        glTranslated(0.0, 0.0, 0.0);
        glPushMatrix();
            glScaled(0.5, 1.0, 0.5);
            glutWireCube(1.0);
        glPopMatrix();
    
        glTranslated(0.2, -1.2, 0.0);
        glRotated((double)foot2, 0.0, 0.0, 1.0);
        glTranslated(0.0, 0.0, 0.0);
        glPushMatrix();
            glScaled(0.2, 1.5, 0.5);
            glutWireCube(1.0);
        glPopMatrix();
    
        
    glPopMatrix();
    
    
    
    glPushMatrix();
    
        glTranslated(0.5, -3.6, 0.0);
        glRotated((double)Main_Nail, 0.0, 0.0, 1.0);
        glTranslated(0.0, 0.0, 0.0);
        glPushMatrix();
            glScaled(0.1, 0.4, 0.1);
            glutWireCube(1);
        glPopMatrix();
    
        glPushMatrix();
    
    
            glTranslated(0.0, 0.2 ,0.0);
            glRotated((double)Nail, 0.0, 0.0, 1.0);
            glTranslated(0.0, -0.2, 0.0);
            glPushMatrix();
                glScaled(0.1, 0.4, 0.1);
                glutWireCube(1);
            glPopMatrix();
    
        glPopMatrix();
    
        glPushMatrix();
    
            glTranslated(0.0, 0.2 ,0.0);
            glRotated(-(double)Nail, 0.0, 0.0, 1.0);
            glTranslated(0.0, -0.2, 0.0);
            glPushMatrix();
                glScaled(0.1, 0.4, 0.1);
                glutWireCube(1);
            glPopMatrix();
        
        glPopMatrix();
    
    
    glPopMatrix();
    
    
    glPushMatrix();
    
        glTranslated(-0.5, -3.6, 0.0);
        glRotated((double)Main_Nail, 0.0, 0.0, 1.0);
        glTranslated(0.0, 0.0, 0.0);
        glPushMatrix();
            glScaled(0.1, 0.4,0.1);
            glutWireCube(1);
        glPopMatrix();
    
        glPushMatrix();
    
    
            glTranslated(0.0, 0.2 ,0.0);
            glRotated((double)Nail, 0.0, 0.0, 1.0);
            glTranslated(0.0, -0.2, 0.0);
            glPushMatrix();
                glScaled(0.1, 0.4, 0.1);
                glutWireCube(1);
            glPopMatrix();
    
        glPopMatrix();
    
        glPushMatrix();
    
            glTranslated(0.0, 0.2 ,0.0);
            glRotated(-(double)Nail, 0.0, 0.0, 1.0);
            glTranslated(0.0, -0.2, 0.0);
            glPushMatrix();
                glScaled(0.1, 0.4, 0.1);
                glutWireCube(1);
            glPopMatrix();
        
        glPopMatrix();
    
    
    glPopMatrix();
    
    
    
    
  
    
    
    glPushMatrix();

        glRotated((double)wing, 0.0, 0.0, 1.0);
        glTranslated(0.0, -2.5 ,0.0);
        glPushMatrix();
            glScaled(0.33, 1.0, 0.5);
            glutWireCube(1.0);
        glPopMatrix();

        glPushMatrix();
    
            glTranslated(0.0, 1.0 ,0.0);
            glRotated((double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.2, 0.5);
                glutWireCube(1.0);
            glPopMatrix();
    
            glTranslated(0.0, 1.0 ,0.0);
            glRotated((double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.4, 0.5);
                glutWireCube(1.0);
            glPopMatrix();
    
            glTranslated(0.0, 1.0 ,0.0);
            glRotated((double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.6, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glTranslated(0.0, 1.0 ,0.0);
            glRotated((double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.8, 0.5);
                glutWireCube(1.0);
            glPopMatrix();
    
            glTranslated(0.0, 1.0 ,0.0);
            glRotated((double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 2.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glTranslated(0.0, 1.0 ,0.0);
            glRotated((double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 2.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();
    
        glPopMatrix();
        
    
        glPushMatrix();
    
            glTranslated(0.0, 1.0 ,0.0);
            glRotated(-(double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.2, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glTranslated(0.0, 1.0 ,0.0);
            glRotated(-(double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.4, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glTranslated(0.0, 1.0 ,0.0);
            glRotated(-(double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.6, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glTranslated(0.0, 1.0 ,0.0);
            glRotated(-(double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 1.8, 0.5);
                glutWireCube(1.0);
            glPopMatrix();
    
            glTranslated(0.0, 1.0 ,0.0);
            glRotated(-(double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 2.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();

            glTranslated(0.0, 1.0 ,0.0);
            glRotated(-(double)wing1_2, 0.0, 0.0, 1.0);
            glTranslated(0.0, -1.0 ,0.0);
            glPushMatrix();
                glScaled(0.33, 2.0, 0.5);
                glutWireCube(1.0);
            glPopMatrix();
    
        glPopMatrix();
    
    glPopMatrix();

    
    
    glutSwapBuffers();
}

void myReshape (int width, int height)
{
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (double)width/(double)height, 0.1, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 15.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);               // move to enable viewing
}

void myKeyboard (unsigned char key, int x, int y)
{
    switch (key) {
        case 'a':
            shoulder = (shoulder + 3) % 360;
            glutPostRedisplay();
            break;
        case 'A':
            shoulder = (shoulder - 3) % 360;
            glutPostRedisplay();
            break;
        case 's':
            elbow = (elbow + 3) % 360;
            glutPostRedisplay();
            break;
        case 'S':
            elbow = (elbow - 3) % 360;
            glutPostRedisplay();
            break;
        case 'd':
            hand = (hand + 1) % 360;
            glutPostRedisplay();
            break;
        case 'D':
            hand = (hand - 1) % 360;
            glutPostRedisplay();
        case 'z':
            Nail = (Nail + 1) % 360;
            glutPostRedisplay();
            break;
        case 'Z':
            Nail = (Nail - 1) % 360;
            glutPostRedisplay();
        
            break;
        case 'x':
            wing1_1 = (wing1_1 + 1) % 360;
            wing1_2 = (wing1_2 + 1) % 360;
            wing2 = (wing2 + 2) % 360;
            wing3 = (wing3 + 2) % 360;
            wing4 = (wing4 + 3) % 360;
            wing5 = (wing5 + 4) % 360;
            wing6 = (wing6 + 5) % 360;
            glutPostRedisplay();
            break;
            
        case 'X':
            wing1_1 = (wing1_1 - 1) % 360;
            wing1_2 = (wing1_2 - 1) % 360;
            wing2 = (wing2 - 2) % 360;
            wing3 = (wing3 - 2) % 360;
            wing4 = (wing4 - 3) % 360;
            wing5 = (wing5 - 4) % 360;
            wing6 = (wing6 - 5) % 360;
            glutPostRedisplay();
            break;
            
        case 27:
            exit(0);
            break;
        default:
            break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    myInit(argv[0]);
    glutKeyboardFunc(myKeyboard);
    glutReshapeFunc(myReshape);
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
