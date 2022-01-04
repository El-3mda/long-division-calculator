#include <stdio.h>
#include <stdlib.h>
void main()
{int i,j,n,k,m,v,e,t;
  float x[100],y[100],a[100],s[100],r[100],z,q=0;
  int p=0,h=0,w=0;

  printf("please enter highest degree of your numeraitor\r\n");
  scanf("%d",&n);
  for (i=n;i>=0;i--){
        printf("The coaff of x^%d: ",i);
        scanf("%f",&x[i]);

    }

  printf("please enter highest degree of your Denominator\r\n");
  scanf("%d",&k);
  for(j=k;j>=0;j--){
     printf("The coaff of x^%d: ",j);
    scanf("%f",&y[j]);

  }

  for(m=k-1;m>=0;m--){

    a[m]=-1*(y[m]/y[k]);}

    if((n-k)>=k){
      s[0]=x[n];
         t=k;
       for(i=1;i<=t;i++){
            if(i<=k){t=k;
            v=i;}
            for(j=1;j<=v;j++){
            q+=a[k-j]*s[w];
              w--;
            }
            h++;
        s[h]=q+x[n-i];
          q=0;
          w=h;
          if(i==k){
            t=n-k;
            v=i;

         }}
    for(i=1;i<=k;i++){
        for(j=0;j<=k-i;j++){
           q+= a[k-i-j]*s[h-j];

        }
        r[p]=x[k-i]+q;
        q=0;
        p++;
    }
      printf("The quotient is:");
     for(i=0;i<=h;i++){
        printf("%fX^%d\t",s[i],h-i);
      }
      printf("\r\n");
      printf("The reminder is:");
      for(i=0;i<=p-1;i++){
        printf("%fX^%d\t",r[i],(p-1)-i);
      }}
    if((n-k)<k){


            s[0]=x[n];
             for(i=1;i<=n-k;i++){
            for(j=1;j<=i;j++){
            q+=a[k-j]*s[w];
              w--;
            }
            h++;
        s[h]=q+x[n-i];
          q=0;
          w=h;}

          t=2*k-n;
          v=n-k;
          e=1;
          for(i=e;i<=t;i++){
        for(j=0;j<=v;j++){
           q+= a[k-i-j]*s[h-j];

        }
        r[p]=x[k-i]+q;
        q=0;
        p++;
        if(i>=2*k-n){

           e=2*k-n;
           t=k;
           v=k-i;

        }
    }


 printf("The quotient is:");
     for(i=0;i<=h;i++){
        printf("%fX^%d\t",s[i],h-i);
      }
      printf("\r\n");
      printf("The reminder is:");
      for(i=0;i<=p-1;i++){
        printf("%fX^%d\t",r[i],(p-1)-i);
      }














 }




















