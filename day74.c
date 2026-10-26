/*Q124: Take two filenames from the user – a source file and a destination file.
 Copy all the content from the source file to the destination file using fgetc() and fputc().*/

#include<stdio.h>
int main(){
    FILE *source,*destination;
    char sourcefile[50],destinationfile[50];
    char ch;
    printf("Enter source file: ");
    scanf("%s",sourcefile);
    printf("Enter destination file: ");
    scanf("%s",destinationfile);
    source=fopen(sourcefile,"r");
    destination=fopen(destinationfile,"w");
    while((ch=fgetc(source))!=EOF)
    {
        fputc(ch,destination);
    }
    fclose(source);
    fclose(destination);
    printf("File copied successfully to %s",destinationfile);
    return 0;
}