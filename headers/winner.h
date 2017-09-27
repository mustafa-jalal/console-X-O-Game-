#ifndef WINNER_H_INCLUDED
#define WINNER_H_INCLUDED

char winner(){
    int xctr=0 ,octr =0;
        // check rows
for (int i=0;i<3;i++){
                for(int j=0;j<3;j++){

                    if ( matrix[i][j] == 'x') xctr++;
                    else if(matrix[i][j] == 'o')  octr++;
                }
                if (xctr==3 || octr == 3){
                    return xctr > octr ? 'x' : 'o';
                }
                 xctr =0;
                 octr =0;
            }

            //check columns
            for (int i=0;i<3;i++){
                for(int j=0;j<3;j++){

                    if ( matrix[j][i] == 'x') xctr++;
                    else if(matrix[i][j] == 'o')  octr++;
                }
                if (xctr==3 || octr == 3){
                    return xctr > octr ? 'x' : 'o';
                }
                 xctr =0;
                 octr =0;
            }

            //check cross

            for (int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                 if(i == j){
                    if ( matrix[j][i] == 'x') xctr++;
                    else if(matrix[i][j] == 'o') octr++;
                 }
                }
                if (xctr==3 || octr == 3){
                    return xctr > octr ? 'x' : 'o';
                            }
                 xctr =0;
                 octr =0;
            }
            // check cross 2

            for (int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if (i==2 && j==0 || i==0 && j==2 || i==1 && j==1){
                    if ( matrix[j][i] == 'x') xctr++;
                    else if(matrix[i][j] == 'o')  octr++;
                    }
                }
                if (xctr==3 || octr == 3){
                    return xctr > octr ? 'x' : 'o';
                }
                 xctr =0;
                 octr =0;
            }
            return 's';
}

#endif // WINNER_H_INCLUDED
