#include <stdio.h>



int findad(int d,int pd,int pm,int py){
    int ad;
    if((pm-1)==1||3||5||7||8||10||12){
        ad=(31-d)+pd;
    }
    else if((pm-1)==2){
        if(py%4==0){
            ad=(29-d)+pd;
        }
        else{
            ad=(28-d)+pd;
        }
    }
    else{
        ad=(30-d)+pd;
    }
    return ad;
}



int main(){
    int d,m,y,pd,pm,py,ad,am,ay;
    printf("enter your dob : ");
    scanf("%d%d%d",&d,&m,&y);
    printf("enter current date : ");
    scanf("%d%d%d",&pd,&pm,&py);




    while(1){
        if((m&&pm)>12){
            
            printf("\nYou entered both months wrong.");
            printf("\nenter your dob : ");
            scanf("%d%d%d",&d,&m,&y);
            printf("\nenter current date : ");
            scanf("%d%d%d",&pd,&pm,&py);
            }
        

        if(m>12){
            printf("\nInvalid month!!");
            printf("\nenter your dob : ");
            scanf("%d%d%d",&d,&m,&y);
        
        }
        

        if(pm>12){
            printf("\nInvalid month!!");
            printf("\nenter current date : ");
            scanf("%d%d%d",&pd,&pm,&py);
            
        }
        
        
        if((pm&&m)==1||3||5||7||8||10||12){
        if((d&&pd)>31){
            printf("\nInvalid date!!");
            printf("\nenter your dob : ");
            scanf("%d%d%d",&d,&m,&y);
            printf("\nenter current date : ");
            scanf("%d%d%d",&pd,&pm,&py);
        }}
        if(m==1||3||5||7||8||10||12){
        if(d>31){
            printf("\nInvalid date!!");
            printf("\nenter your dob : ");
            scanf("%d%d%d",&d,&m,&y);
            
        }}
        if(pm==1||3||5||7||8||10||12){
        if(pd>31){
            printf("\nInvalid date!!");
            printf("\nenter current date : ");
            scanf("%d%d%d",&pd,&pm,&py);
            
        }}
        if((m&&pm)==4||6||9||11){
            if((d&&pd)>30){
            printf("\nInvalid date!!");
            printf("\nenter your dob : ");
            scanf("%d%d%d",&d,&m,&y);
            printf("\nenter current date : ");
            scanf("%d%d%d",&pd,&pm,&py);
            }}
        
        if(m==4||6||9||11){  
        if(d>30){
            printf("\nInvalid date!!");
            printf("\nenter your dob : ");
            scanf("%d%d%d",&d,&m,&y);
            
        }}
        if(pm==4||6||9||11){
        if(pd>30){
            printf("\nInvalid date!!");
            printf("\nenter current date : ");
            scanf("%d%d%d",&pd,&pm,&py);
            
        }}
        if((m&&pm)==2){
            if((y%4==0)&&(py%4==0)){
                if((pd&&d)>29){
                    printf("\nInvalid date!!");
                    printf("\nenter your dob : ");
                    scanf("%d%d%d",&d,&m,&y);
                    printf("\nenter current date : ");
                    scanf("%d%d%d",&pd,&pm,&py);
                }
                if(d>29){
                    printf("\nInvalid date!!");
                    printf("\nenter your dob : ");
                    scanf("%d%d%d",&d,&m,&y);
                }
                if(pd>29){
                    printf("\nInvalid date!!");
                    printf("\nenter current date : ");
                    scanf("%d%d%d",&pd,&pm,&py);
                }
            }
            else{
                if((pd&&d)>28){
                    printf("\nInvalid date!!");
                    printf("\nenter your dob : ");
                    scanf("%d%d%d",&d,&m,&y);
                    printf("\nenter current date : ");
                    scanf("%d%d%d",&pd,&pm,&py);
                }
                if(d>28){
                    printf("\nInvalid date!!");
                    printf("\nenter your dob : ");
                    scanf("%d%d%d",&d,&m,&y);
                }
                if(pd>28){
                    printf("\nInvalid date!!");
                    printf("\nenter current date : ");
                    scanf("%d%d%d",&pd,&pm,&py);
                }
            }
        }
            
        
        if(m==2){
            if(y%4==0){
                if(d>29){
                printf("\nInvalid date!!");
                printf("\nenter your dob : ");
                scanf("%d%d%d",&d,&m,&y);
                
                }}
            else{
                if(d>28){
                printf("\nInvalid date!!");
                printf("\nenter your dob : ");
                scanf("%d%d%d",&d,&m,&y);
                }
            }
        }
        if(pm==2){
            if(py%4==0){
                if(pd>29){
                printf("\nInvalid date!!");
                printf("\nenter current date : ");
                scanf("%d%d%d",&pd,&pm,&py);
                
                }
            }
            else{
                if(pd>28){
                printf("\nInvalid date!!");
                printf("\nenter your dob : ");
                scanf("%d%d%d",&d,&m,&y);
                }
            }
        }
        else{
            break;
        }
            
            
        
    }
    if(pm>m){
        ay=py-y;
        if(pd>=d){
            am=pm-m;
            ad=pd-d;

        }
        else if(pd<d){
            am=(pm-m)-1;
            ad=findad(d,pd,pm,py);
        }
    }
    else if(pm<m){
        ay=py-y-1;
        if(pd>=d){
            am=(12-m)+pm;
            ad=pd-d;
        }
        else{
            am=((12-m)+pm)-1;
            ad=findad(d,pd,pm,py);
            
        }

    }
    else if(pm==m){
        if(pd>=d){
            ay=py-y;
            am=pm-m;
            ad=pd-d;
        }
        else{
            ay=(py-y)-1;
            am=11;
            ad=findad(d,pd,pm,py);
        }
    }
    printf("You are %d year %d month and %d days.",ay,am,ad);
    return 0;
}