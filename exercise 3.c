#include <analysis.h>
#include <cvirte.h>		
#include <userint.h>
#include "exercise 3.h"

static int panelHandle;
double mat1[3][3],mat2[3][3],result[3][3];
int n=3,k=3,m=3,i,j;


int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "exercise 3.uir", PANEL)) < 0)
		return -1;
	DisplayPanel (panelHandle);
	SavePanelState (panelHandle, "defult", 0);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	return 0;
}


int CVICALLBACK ExitFunc (int panel, int event, void *callbackData,
						  int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_GOT_FOCUS:

			break;
		case EVENT_LOST_FOCUS:

			break;
		case EVENT_CLOSE:
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK Multiply (int panel, int control, int event,
						  void *callbackData, int eventData1, int eventData2)
{
	double mat1[3][3],mat2[3][3],result[3][3];
	int n=3,k=3,m=3;
	
	switch (event)
	{
		case EVENT_COMMIT:
			
			
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++)
				GetTableCellVal (panelHandle,PANEL_MATRIX_1 ,MakePoint(i+1,j+1) ,&mat1[i][j] );
			}
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++)
				GetTableCellVal (panelHandle,PANEL_MATRIX_2 ,MakePoint(i+1,j+1) ,&mat2[i][j] );
			}
			
			
			
			MatrixMul (mat1,mat2 ,n ,k ,m ,result); 
			
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++)
				SetTableCellVal (panelHandle, PANEL_RESULT, MakePoint(i+1,j+1), result[i][j]);
			}
		
			
			break;
	}
	return 0;
}

int CVICALLBACK Clear (int panel, int control, int event,
					   void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			RecallPanelState (panelHandle, "defult", 0);
			
			break;
	}
	return 0;
}
