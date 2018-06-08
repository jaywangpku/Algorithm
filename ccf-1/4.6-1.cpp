#include<iostream>    
using namespace std;    
    
int main()
{    
	int P;    
    int a,b,c,d,e,f,g,h,i;    
    int n=0;    
    cin>>P;  
    for(a=1; a<=P&&a<=9; a++) 
	{    
        for(b=1; b<=P-a&&b<=9; b++) 
		{    
            if(b==a) continue;    
            for(d=1; d<=P-a-b&&d<=9; d++) 
			{    
                if(d==a||d==b) continue;    
                f=P-a-b-d;    
                if(f==a||f==b||f==d) continue;    
                if(f>=1&&f<=9) 
				{    
                    for(g=1; g<=P-f&&g<=9; g++) 
					{    
                        if(g==a||g==b||g==d||g==f) continue;    
                        for(h=1; h<=P-f-g&&h<=9; h++) 
						{    
                            if(h==a||h==b||h==d||h==f||h==g) continue;    
                            i=P-f-g-h;    
                            if(i==a||i==b||i==d||i==f||i==g||i==h) continue;    
                            if(i>=1&&i<=9) 
							{    
                                for(e=1; e<=P-i-a&&e<=9; e++) 
								{    
                                    if(e==a||e==b||e==d||e==f||e==g||e==h||e==i) continue;    
                                    c=P-a-i-e;    
                                    if(c==a||c==b||c==d||c==f||c==g||c==h||c==i||c==e) continue;    
                                    if(c>=1&&c<=9) 
									{    
                                        if(a<f&&f<i&&b<d&&g<h&&c<e) 
										{    
                                            n+=1;
                                        }    
                                    }    
                                }    
                            }    
                        }    
                    }    
                }    
            }    
        }    
    }    
   	cout<<n;  
    return 0;    
}  
