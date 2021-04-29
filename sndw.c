#include <stdio.h>

void sender(int framesize,int sent, int ack)
{
	 while(1)
	 {
		 for(int i=0;i<framesize;i++)
		 {
			 printf("Frame %d has been transmitted successfully\n",sent);
			 sent++;
			 if(sent==framesize)
				break;
		 }
		 printf("Please enter the last acknowledgement received: \n");
		 scanf("%d",&ack);
		 if(ack>=framesize)
			break;
		 else
			sent=ack;
	 }
}

void receiver(int framesize,int sent,int ack)
{
	 while(1)
	 {
		 for(int i=0;i<framesize;i++)
		 {
			 printf("Frame %d has been transmitted successfully\n",sent);
			 sent++;
			 if(sent==framesize)
				break;
		 }
		 printf("Please enter the last acknowledgement received: ");
		 scanf("%d",&ack);
		 if(ack>=framesize)
			break;
		 else
			sent=ack;
	 }
}
int main()
{
	 int framesize,sent=0,ack;
	 printf("\n Enter the size of the frame: ");
	 scanf("%d",&framesize);
	 printf("Sender site...");
	 sender(framesize,sent,ack);
	 printf("Receiver site...");
	 receiver(framesize,sent,ack);
	 return 0;
}