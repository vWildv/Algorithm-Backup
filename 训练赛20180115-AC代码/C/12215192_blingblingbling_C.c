 #include <stdio.h>

      #include <string.h>

    int   main()
      {
        char s[105];

        char *l="bkpstor";
        char *p;

        while(gets(s))
        {



        p=strstr(s,l);
        if(p)
          printf("Warning\n");
        else
          printf("Safe\n");



      }
      }
