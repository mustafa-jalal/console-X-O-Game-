#ifndef PLAYE_H_INCLUDED
#define PLAYE_H_INCLUDED
using namespace std;
           char matrix[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
           char player = 'x';
           char position;
     int counter = 0;
    bool found = false;
void matrix_pr(){
    system("cls");
    for(int i=0; i<3; i++){
        for (int j=0; j<3;j++){
        cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
        }
}

void play(){
        cout<<player<<" now will play :";
                cin>>position;
          for (int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                       if ( matrix[i][j] == position){
                          matrix[i][j] = player ;
                          counter++;
                          found = true;
                         }
                }
            }
                if (found == true){
                        if (player == 'x'){
                            player = 'o';
                            found = false;
                        }
                        else{
                            player = 'x';
                            found = false;
                        }
                }
}



#endif // PLAYE_H_INCLUDED
