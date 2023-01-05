#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int arr[8][8] ;
    char arrwin[10] ;
    int tesa ,tesb ;
    ifstream fwin("winnern.txt") ;
    if(fwin.is_open()){
        for(int i = 0 ; i < 10 ; i++){
            fwin >> arrwin[i] ;
        }
    }
    else{
        for(int i = 0 ; i < 10 ; i++){
            arrwin[i] = 0 ;
        }
    }

    ifstream fmat("matrix.txt") ;
    if(fmat.is_open()){
        fmat >> tesa ;
        fmat >> tesb ;
        for(int i = 0 ; i < 8 ;i++){
            for(int j = 0 ; j < 8 ; j++){
                fmat >> arr[i][j] ;
            }
        }
    }
    fmat.close() ;
    while (1) {
        int nobe = 0 ;
        int a = 2 , b = 1 ;
        ifstream fmat("matrix.txt");
        if(!fmat.is_open()){
            for(int i = 0 ; i < 8 ; i++){
                for(int j = 0 ; j < 8 ; j++){
                    arr[i][j] = 0 ;
                }
            }
            arr[3][3] = 2 ;
            arr[3][4] = 1 ;
            arr[4][3] = 1 ;
            arr[4][4] = 2 ;
            a = 2 ;
            b = 1 ;
        }
        else{
            a = tesa ;
            b =tesb ;
        }
        fmat.close();

        for(int i = 0 ; i < 8 ; i++){
            for(int j = 0 ; j < 8 ; j++){
                cout << arr[i][j] << " " ;
            }
            cout << endl ;
        }
        cout << endl <<"_____________________________________" << endl ;

    //    start ******************************************************************************************************************************

        while (2) {
            if(a==2){
                cout << "nobat : 2 " << endl ;
            }
            else{
                cout << "nobat : 1 " << endl ;
            }
            // (1)   -1 -1
                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j++){
                        if(arr[i][j]==a){
                            if(arr[i-1][j-1] == b  && (i-1) >= 0 && (j-1) >= 0){
                                if(arr[i-2][j-2] == b && (i-2) >= 0 && (j-2) >= 0){
                                    if(arr[i-3][j-3] == b && (i-3) >= 0 && (j-3) >= 0){
                                        if(arr[i-4][j-4] == b && (i-4) >= 0 && (j-4) >= 0){
                                            if(arr[i-5][j-5] == b && (i-5) >= 0 && (j-5) >= 0){
                                                if(arr[i-6][j-6] == b && (i-6) >= 0 && (j-6) >= 0){
                                                    if(arr[i-7][j-7] == b && (i-7) >= 0 && (j-7) >= 0){

                                                    }
                                                    else{
                                                        if(arr[i-7][j-7] && (i-7) >= 0 && (j-7) >= 0 ){
                                                            arr[i-7][j-7] = 3 ;
                                                        }
                                                    }
                                                }
                                                else{
                                                    if(arr[i-6][j-6] == 0 && (i-6) >= 0 && (j-6) >= 0 ){
                                                        arr[i-6][j-6] = 3 ;
                                                    }
                                                }
                                            }
                                            else{
                                                if(arr[i-5][j-5] == 0 && (i-5) >= 0 && (j-5) >= 0 ){
                                                    arr[i-5][j-5] = 3 ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[i-4][j-4] == 0 && (i-4) >= 0 && (j-4) >= 0 ){
                                                arr[i-4][j-4] = 3 ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[i-3][j-3] == 0 && (i-3) >= 0 && (j-3) >= 0 ){
                                            arr[i-3][j-3] = 3 ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[i-2][j-2] == 0 && (i-2) >= 0 && (j-2) >= 0 ){
                                        arr[i-2][j-2] = 3 ;
                                    }
                                }
                            }
                        }
                    }
                }
            // (1)    -1 0
                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j++){
                        if(arr[i][j]==a){
                            if(arr[i-1][j] == b  && (i-1) >= 0){
                                if(arr[i-2][j] == b && (i-2) >= 0){
                                    if(arr[i-3][j] == b && (i-3) >= 0){
                                        if(arr[i-4][j] == b && (i-4) >= 0){
                                            if(arr[i-5][j] == b && (i-5) >= 0){
                                                if(arr[i-6][j] == b && (i-6) >= 0){
                                                    if(arr[i-7][j] == b && (i-7) >= 0){

                                                    }
                                                    else{
                                                        if(arr[i-7][j] == 0 && (i-7) >= 0 ){
                                                            arr[i-7][j] = 3 ;
                                                        }
                                                    }
                                                }
                                                else{
                                                    if(arr[i-6][j] == 0 && (i-6) >= 0 ){
                                                        arr[i-6][j] = 3 ;
                                                    }
                                                }
                                            }
                                            else{
                                                if(arr[i-5][j] == 0 && (i-5) >= 0 ){
                                                    arr[i-5][j] = 3 ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[i-4][j] == 0 && (i-4) >= 0){
                                                arr[i-4][j] = 3 ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[i-3][j] == 0 && (i-3) >= 0 ){
                                            arr[i-3][j] = 3 ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[i-2][j] == 0 && (i-2) >= 0 ){
                                        arr[i-2][j] = 3 ;
                                    }
                                }
                            }
                        }
                    }
                }
            // (3)   -1 +1
                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j++){
                        if(arr[i][j]==a){
                            if(arr[i-1][j+1] == b  && (i-1) >= 0 && (j+1) < 8){
                                if(arr[i-2][j+2] == b && (i-2) >= 0 && (j+2) < 8){
                                    if(arr[i-3][j+3] == b && (i-3) >= 0 && (j+3) < 8){
                                        if(arr[i-4][j+4] == b && (i-4) >= 0 && (j+4) < 8){
                                            if(arr[i-5][j+5] == b && (i-5) >= 0&& (j+5) < 8){
                                                if(arr[i-6][j+6] == b && (i-6) >= 0 && (j+6) < 8){
                                                    if(arr[i-7][j+7] == b && (i-7) >= 0 && (j+7) < 8){

                                                    }
                                                    else{
                                                       if(arr[i-7][j+7] == 0 && (i-7) >= 0 && (j+7) < 8 ) {
                                                           arr[i-7][j+7] = 3 ;
                                                       }
                                                    }
                                                }
                                                else{
                                                    if(arr[i-6][j+6] == 0 && (i-6) >= 0 && (j+6) < 8 ){
                                                        arr[i-6][j+6] = 3 ;
                                                    }
                                                }
                                            }
                                            else{
                                                if(arr[i-5][j+5] == 0 && (i-5) >= 0 && (j+5) < 8 ){
                                                    arr[i-5][j+5] = 3 ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[i-4][j+4] == 0 && (i-4) >= 0 && (j+4) < 8 ){
                                                arr[i-4][j+4] = 3 ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[i-3][j+3] == 0 && (i-3) >= 0 && (j+3) < 8 ){
                                            arr[i-3][j+3] = 3 ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[i-2][j+2] == 0 && (i-2) >= 0 && (j+2) < 8 ){
                                        arr[i-2][j+2] = 3 ;
                                    }
                                }
                            }
                        }
                    }
                }
            //  (4)  0 -1
                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j++){
                        if(arr[i][j]==a){
                            if(arr[i][j-1] == b && (j-1) >= 0){
                                if(arr[i][j-2] == b && (j-2) >= 0){
                                    if(arr[i][j-3] == b && (j-3) >= 0){
                                        if(arr[i][j-4] == b && (j-4) >= 0){
                                            if(arr[i][j-5] == b && (j-5) >= 0){
                                                if(arr[i][j-6] == b && (j-6) >= 0){
                                                    if(arr[i][j-7] == b && (j-7) >= 0){

                                                    }
                                                    else{
                                                        if(arr[i][j-7] == 0 && (j-7) >= 0 ){
                                                            arr[i][j-7] = 3 ;
                                                        }
                                                    }
                                                }
                                                else{
                                                    if(arr[i][j-6] == 0 && (j-6) >= 0 ){
                                                        arr[i][j-6] = 3 ;
                                                    }
                                                }
                                            }
                                            else{
                                                if(arr[i][j-5] == 0 && (j-5) >= 0 ){
                                                    arr[i][j-5] = 3 ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[i][j-4] == 0 && (j-4) >= 0){
                                                arr[i][j-4] = 3 ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[i][j-3] == 0 && (j-3) >= 0 ){
                                            arr[i][j-3] = 3 ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[i][j-2] == 0 && (j-2) >= 0 ){
                                        arr[i][j-2] = 3 ;
                                    }
                                }
                            }
                        }
                    }
                }
            // (5)   0 +1
                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j++){
                        if(arr[i][j]==a){
                            if(arr[i][j+1] == b && (j+1) < 8){
                                if(arr[i][j+2] == b && (j+2) < 8){
                                    if(arr[i][j+3] == b && (j+3) < 8){
                                        if(arr[i][j+4] == b && (j+4) < 8){
                                            if(arr[i][j+5] == b && (j+5) < 8){
                                                if(arr[i][j+6] == b && (j+6) < 8){
                                                    if(arr[i][j+7] == b && (j+7) < 8){

                                                    }
                                                    else{
                                                        if(arr[i][j+7] == 0 && (j+7) < 8 ){
                                                            arr[i][j+7] = 3 ;
                                                        }
                                                    }
                                                }
                                                else{
                                                    if(arr[i][j+6] == 0 && (j+6) < 8 ){
                                                        arr[i][j+6] = 3 ;
                                                    }
                                                }
                                            }
                                            else{
                                                if(arr[i][j+5] == 0 && (j+5) < 8 ){
                                                    arr[i][j+5] = 3 ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[i][j+4] == 0 && (j+4) < 8){
                                                arr[i][j+4] = 3 ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[i][j+3] == 0 && (j+3) < 8 ){
                                            arr[i][j+3] = 3 ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[i][j+2] == 0 && (j+2) >= 0 ){
                                        arr[i][j+2] = 3 ;
                                    }
                                }
                            }
                        }
                    }
                }
            // (6)   +1 -1
                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j++){
                        if(arr[i][j]==a){
                            if(arr[i+1][j-1] == b  && (i+1) < 8 && (j-1) >= 0){
                                if(arr[i+2][j-2] == b && (i+2) < 8 && (j-2) >= 0){
                                    if(arr[i+3][j-3] == b && (i+3) < 8 && (j-3) >= 0){
                                        if(arr[i+4][j-4] == b && (i+4) < 8 && (j-4) >= 0){
                                            if(arr[i+5][j-5] == b && (i+5) < 8 && (j-5) >= 0){
                                                if(arr[i+6][j-6] == b && (i+6) < 8 && (j-6) >= 0){
                                                    if(arr[i+7][j-7] == b && (i+7) < 8 && (j-7) >= 0){

                                                    }
                                                    else{
                                                       if(arr[i+7][j-7] == 0 && (i+7) < 8 && (j-7) >= 0 ){
                                                           arr[i+7][j-7] = 3 ;
                                                       }
                                                    }
                                                }
                                                else{
                                                    if(arr[i+6][j-6] == 0 && (i+6) < 8 && (j-6) >= 0 ){
                                                        arr[i+6][j-6] = 3 ;
                                                    }
                                                }
                                            }
                                            else{
                                                if(arr[i+5][j-5] == 0 && (i+5) < 8 && (j-5) >= 0 ){
                                                    arr[i+5][j-5] = 3 ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[i+4][j-4] == 0 && (i+4) < 8 && (j-4) >= 0 ){
                                                arr[i+4][j-4] = 3 ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[i+3][j-3] == 0 && (i+3) < 8 && (j-3) >= 0 ){
                                            arr[i+3][j-3] = 3 ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[i+2][j-2] == 0 && (i+2) < 8 && (j-2) >= 0 ){
                                        arr[i+2][j-2] = 3 ;
                                    }
                                }
                            }
                        }
                    }
                }
            // (7)   +1 0
                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j++){
                        if(arr[i][j]==a){
                            if(arr[i+1][j] == b  && (i+1) < 8){
                                if(arr[i+2][j] == b && (i+2) < 8){
                                    if(arr[i+3][j] == b && (i+3) < 8){
                                        if(arr[i+4][j] == b && (i+4) < 8){
                                            if(arr[i+5][j] == b && (i+5) < 8){
                                                if(arr[i+6][j] == b && (i+9) < 8){
                                                    if(arr[i+7][j] == b && (i+7) < 8){

                                                    }
                                                    else{
                                                        if(arr[i+7][j] == 0 && (i+7) < 8 ){
                                                            arr[i+7][j] = 3 ;
                                                        }
                                                    }
                                                }
                                                else{
                                                    if(arr[i+6][j] == 0 && (i+6) < 8 ){
                                                        arr[i+6][j] = 3 ;
                                                    }
                                                }
                                            }
                                            else{
                                                if(arr[i+5][j] == 0 && (i+5) < 8 ){
                                                    arr[i+5][j] = 3 ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[i+4][j] == 0 && (i+4) < 8 ){
                                                arr[i+4][j] = 3 ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[i+3][j] == 0 && (i+3) < 8 ){
                                            arr[i+3][j] = 3 ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[i+2][j] == 0 && (i+2) < 8 ){
                                        arr[i+2][j] = 3 ;
                                    }
                                }
                            }
                        }
                    }
                }
            // (8)   +1 +1
                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j++){
                        if(arr[i][j]==a){
                            if(arr[i+1][j+1] == b  && (i+1) < 8 && (j+1) < 8){
                                if(arr[i+2][j+2] == b && (i+2) < 8 && (j+2) < 8){
                                    if(arr[i+3][j+3] == b && (i+3) < 8 && (j+3) < 8){
                                        if(arr[i+4][j+4] == b && (i+4) < 8 && (j+4) < 8){
                                            if(arr[i+5][j+5] == b && (i+5) < 8 && (j+5) < 8){
                                                if(arr[i+6][j+6] == b && (i+6) < 8 && (j+6) < 8){
                                                    if(arr[i+7][j+7] == b && (i+7) < 8 && (j+7) < 8){

                                                    }
                                                    else{
                                                       if(arr[i+7][j+7] == 0 && (i+7) < 8 && (j+7) < 8 ) {
                                                           arr[i+7][j+7] = 3 ;
                                                       }
                                                    }
                                                }
                                                else{
                                                    if(arr[i+6][j+6] == 0 && (i+6) < 8 && (j+6) < 8 ){
                                                        arr[i+6][j+6] = 3 ;
                                                    }
                                                }
                                            }
                                            else{
                                                if(arr[i+5][j+5] == 0 && (i+5) < 8 && (j+5) < 8 ){
                                                    arr[i+5][j+5] = 3 ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[i+4][j+4] == 0 && (i+4) < 8 && (j+4) < 8 ){
                                                arr[i+4][j+4] = 3 ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[i+3][j+3] == 0 && (i+3) < 8 && (j+3) < 8 ){
                                            arr[i+3][j+3] = 3 ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[i+2][j+2] == 0 && (i+2) < 8 && (j+2) < 8 ){
                                        arr[i+2][j+2] = 3 ;
                                    }
                                }
                            }
                        }
                    }
                }

                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j++){
                        cout << arr[i][j] << " " ;
                    }
                    cout << endl ;
                }
    //            بررسی امکان‌پذیز بودن قرار دادن مهره جدید
                bool bod = false ;
                for(int i = 0 ; i < 8 ; i++){
                    for(int j = 0 ; j < 8 ; j ++){
                        if(arr[i][j] == 3){
                            bod = true ;
                        }
                    }
                }

                if(!bod){
                    nobe++ ;
                    if(nobe == 2){
                        break;
                    }
                }
                if(bod){
                    cout << "Possible choices : x y " << endl ;
                    for(int i = 0 ; i < 8 ; i++){
                        for(int j = 0 ; j < 8 ; j++){
                            if(arr[i][j] == 3){
                                cout << i+1 << " " << j+1 << endl ;
                            }
                        }
                    }
                //    choice
                    int x , y ;
                    cout << endl << "Please enter a possible choice : " ;
                    while (3) {
                        cin >> x >> y ;
                        x-- ;
                        y-- ;
                        if(arr[x][y] != 3){
                            cout << "Please enter a possible choice : " ;
                        }
                        else{
                            break ;
                        }
                    }

                    arr[x][y] = a ;
                // (1)   -1 -1
                    if(arr[x-1][y-1] == b  && (x-1) >= 0 && (y-1) >= 0){
                        if(arr[x-2][y-2] == b && (x-2) >= 0 && (y-2) >= 0){
                            if(arr[x-3][y-3]== b && (x-3) >= 0 && (y-3) >= 0){
                                if(arr[x-4][y-4] == b && (x-4) >= 0 && (y-4) >= 0){
                                    if(arr[x-5][y-5] == b && (x-5) >= 0 && (y-5) >= 0){
                                        if(arr[x-6][y-6] == b && (x-6) >= 0 && (y-6) >= 0){
                                            if(arr[x-7][y-7] == b && (x-7) >= 0 && (y-7) >= 0){

                                            }
                                            else{
                                                if(arr[x-7][y-7] == a && (x-7) >= 0 && (y-7) >= 0 ){
                                                    arr[x-6][y-6] = a ;
                                                    arr[x-5][y-5] = a ;
                                                    arr[x-4][y-4] = a ;
                                                    arr[x-3][y-3] = a ;
                                                    arr[x-2][y-2] = a ;
                                                    arr[x-1][y-1] = a ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[x-6][y-6] == a && (x-6) >= 0 && (y-6) >= 0 ){
                                                arr[x-5][y-5] = a ;
                                                arr[x-4][y-4] = a ;
                                                arr[x-3][y-3] = a ;
                                                arr[x-2][y-2] = a ;
                                                arr[x-1][y-1] = a ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[x-5][y-5] == a && (x-5) >= 0 && (y-5) >= 0 ){
                                            arr[x-4][y-4] = a ;
                                            arr[x-3][y-3] = a ;
                                            arr[x-2][y-2] = a ;
                                            arr[x-1][y-1] = a ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[x-4][y-4] == a && (x-4) >= 0 && (y-4) >= 0 ){
                                        arr[x-3][y-3] = a ;
                                        arr[x-2][y-2] = a ;
                                        arr[x-1][y-1] = a ;
                                    }
                                }
                            }
                            else{
                                if(arr[x-3][y-3] == a && (x-3) >= 0 && (y-3) >= 0 ){
                                    arr[x-2][y-2] = a ;
                                    arr[x-1][y-1] = a ;
                                }
                            }
                        }
                        else{
                            if(arr[x-2][y-2] == a && (x-2) >= 0 && (y-2) >= 0 ){
                                arr[x-1][y-1] = a ;
                            }
                        }
                    }
                // (2)   -1 0
                    if(arr[x-1][y] == b  && (x-1) >= 0){
                        if(arr[x-2][y] == b && (x-2) >= 0){
                            if(arr[x-3][y]== b && (x-3) >= 0){
                                if(arr[x-4][y] == b && (x-4) >= 0){
                                    if(arr[x-5][y] == b && (x-5) >= 0){
                                        if(arr[x-6][y] == b && (x-6) >= 0){
                                            if(arr[x-7][y] == b && (x-7) >= 0){

                                            }
                                            else{
                                                if(arr[x-7][y] == a && (x-7) >= 0 ){
                                                    arr[x-6][y] = a ;
                                                    arr[x-5][y] = a ;
                                                    arr[x-4][y] = a ;
                                                    arr[x-3][y] = a ;
                                                    arr[x-2][y] = a ;
                                                    arr[x-1][y] = a ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[x-6][y] == a && (x-6) >= 0 ){
                                                arr[x-5][y] = a ;
                                                arr[x-4][y] = a ;
                                                arr[x-3][y] = a ;
                                                arr[x-2][y] = a ;
                                                arr[x-1][y] = a ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[x-5][y] == a && (x-5) >= 0 ){
                                            arr[x-4][y] = a ;
                                            arr[x-3][y] = a ;
                                            arr[x-2][y] = a ;
                                            arr[x-1][y] = a ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[x-4][y] == a && (x-4) >= 0 ){
                                        arr[x-3][y] = a ;
                                        arr[x-2][y] = a ;
                                        arr[x-1][y] = a ;
                                    }
                                }
                            }
                            else{
                                if(arr[x-3][y] == a && (x-3) >= 0 ){
                                    arr[x-2][y] = a ;
                                    arr[x-1][y] = a ;
                                }
                            }
                        }
                        else{
                            if(arr[x-2][y] == a && (x-2) >= 0 ){
                                arr[x-1][y] = a ;
                            }
                        }
                    }
                // (3)   -1 +1
                    if(arr[x-1][y+1] == b  && (x-1) >= 0 && (y+1) < 8){
                        if(arr[x-2][y+2] == b && (x-2) >= 0 && (y+2) < 8){
                            if(arr[x-3][y+3]== b && (x-3) >= 0 && (y+3) < 8){
                                if(arr[x-4][y+4] == b && (x-4) >= 0 && (y+4) < 8){
                                    if(arr[x-5][y+5] == b && (x-5) >= 0 && (y+5) < 8){
                                        if(arr[x-6][y+6] == b && (x-6) >= 0 && (y+6) < 8){
                                            if(arr[x-7][y+7] == b && (x-7) >= 0 && (y+7) < 8){

                                            }
                                            else{
                                                if(arr[x-7][y+7] == a && (x-7) >= 0 && (y+7) < 8 ){
                                                    arr[x-6][y+6] = a ;
                                                    arr[x-5][y+5] = a ;
                                                    arr[x-4][y+4] = a ;
                                                    arr[x-3][y+3] = a ;
                                                    arr[x-2][y+2] = a ;
                                                    arr[x-1][y+1] = a ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[x-6][y+6] == a && (x-6) >= 0 && (y+6) < 8 ){
                                                arr[x-5][y+5] = a ;
                                                arr[x-4][y+4] = a ;
                                                arr[x-3][y+3] = a ;
                                                arr[x-2][y+2] = a ;
                                                arr[x-1][y+1] = a ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[x-5][y+5] == a && (x-5) >= 0 && (y+5) < 8 ){
                                            arr[x-4][y+4] = a ;
                                            arr[x-3][y+3] = a ;
                                            arr[x-2][y+2] = a ;
                                            arr[x-1][y+1] = a ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[x-4][y+4] == a && (x-4) >= 0 && (y+4) < 8 ){
                                        arr[x-3][y+3] = a ;
                                        arr[x-2][y+2] = a ;
                                        arr[x-1][y+1] = a ;
                                    }
                                }
                            }
                            else{
                                if(arr[x-3][y+3] == a && (x-3) >= 0 && (y+3) < 8 ){
                                    arr[x-2][y+2] = a ;
                                    arr[x-1][y+1] = a ;
                                }
                            }
                        }
                        else{
                            if(arr[x-2][y+2] == a && (x-2) >= 0 && (y+2) >= 0 ){
                                arr[x-1][y+1] = a ;
                            }
                        }
                    }
                // (4)   0 -1
                    if(arr[x][y-1] == b && (y-1) >= 0){
                        if(arr[x][y-2] == b && (y-2) >= 0){
                            if(arr[x][y-3]== b && (y-3) >= 0){
                                if(arr[x][y-4] == b && (y-4) >= 0){
                                    if(arr[x][y-5] == b && (y-5) >= 0){
                                        if(arr[x][y-6] == b && (y-6) >= 0){
                                            if(arr[x][y-7] == b && (y-7) >= 0){

                                            }
                                            else{
                                                if(arr[x][y-7] == a && (y-7) >= 0 ){
                                                    arr[x][y-6] = a ;
                                                    arr[x][y-5] = a ;
                                                    arr[x][y-4] = a ;
                                                    arr[x][y-3] = a ;
                                                    arr[x][y-2] = a ;
                                                    arr[x][y-1] = a ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[x][y-6] == a && (y-6) >= 0 ){
                                                arr[x][y-5] = a ;
                                                arr[x][y-4] = a ;
                                                arr[x][y-3] = a ;
                                                arr[x][y-2] = a ;
                                                arr[x][y-1] = a ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[x][y-5] == a && (y-5) >= 0 ){
                                            arr[x][y-4] = a ;
                                            arr[x][y-3] = a ;
                                            arr[x][y-2] = a ;
                                            arr[x][y-1] = a ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[x][y-4] == a && (y-4) >= 0 ){
                                        arr[x][y-3] = a ;
                                        arr[x][y-2] = a ;
                                        arr[x][y-1] = a ;
                                    }
                                }
                            }
                            else{
                                if(arr[x][y-3] == a && (y-3) >= 0 ){
                                    arr[x][y-2] = a ;
                                    arr[x][y-1] = a ;
                                }
                            }
                        }
                        else{
                            if(arr[x][y-2] == a && (y-2) >= 0 ){
                                arr[x][y-1] = a ;
                            }
                        }
                    }
                // (5)   0 +1
                    if(arr[x][y+1] == b  && (y+1) < 8){
                        if(arr[x][y+2] == b && (y+2) < 8){
                            if(arr[x][y+3]== b && (y+3) < 8){
                                if(arr[x][y+4] == b && (y+4) < 8){
                                    if(arr[x][y+5] == b && (y+5) < 8){
                                        if(arr[x][y+6] == b && (y+6) < 8){
                                            if(arr[x][y+7] == b && (y+7) < 8){

                                            }
                                            else{
                                                if(arr[x][y+7] == a && (y+7) < 8 ){
                                                    arr[x][y+6] = a ;
                                                    arr[x][y+5] = a ;
                                                    arr[x][y+4] = a ;
                                                    arr[x][y+3] = a ;
                                                    arr[x][y+2] = a ;
                                                    arr[x][y+1] = a ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[x][y+6] == a && (y+6) < 8 ){
                                                arr[x][y+5] = a ;
                                                arr[x][y+4] = a ;
                                                arr[x][y+3] = a ;
                                                arr[x][y+2] = a ;
                                                arr[x][y+1] = a ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[x][y+5] == a && (y+5) < 8 ){
                                            arr[x][y+4] = a ;
                                            arr[x][y+3] = a ;
                                            arr[x][y+2] = a ;
                                            arr[x][y+1] = a ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[x][y+4] == a && (y+4) < 8 ){
                                        arr[x][y+3] = a ;
                                        arr[x][y+2] = a ;
                                        arr[x][y+1] = a ;
                                    }
                                }
                            }
                            else{
                                if(arr[x][y+3] == a && (y+3) < 8 ){
                                    arr[x][y+2] = a ;
                                    arr[x][y+1] = a ;
                                }
                            }
                        }
                        else{
                            if(arr[x][y+2] == a && (y+2) >= 0 ){
                                arr[x][y+1] = a ;
                            }
                        }
                    }
                // (6)   +1 -1
                    if(arr[x+1][y-1] == b  && (x+1) < 8 && (y-1) >= 0){
                        if(arr[x+2][y-2] == b && (x+2) < 8 && (y-2) >= 0){
                            if(arr[x+3][y-3]== b && (x+3) < 8 && (y-3) >= 0){
                                if(arr[x+4][y-4] == b && (x+4) < 8 && (y-4) >= 0){
                                    if(arr[x+5][y-5] == b && (x+5) < 8 && (y-5) >= 0){
                                        if(arr[x+6][y-6] == b && (x+6) < 8 && (y-6) >= 0){
                                            if(arr[x+7][y-7] == b && (x+7) < 8 && (y-7) >= 0){

                                            }
                                            else{
                                                if(arr[x+7][y-7] == a && (x+7) < 8 && (y-7) >= 0 ){
                                                    arr[x+6][y-6] = a ;
                                                    arr[x+5][y-5] = a ;
                                                    arr[x+4][y-4] = a ;
                                                    arr[x+3][y-3] = a ;
                                                    arr[x+2][y-2] = a ;
                                                    arr[x+1][y-1] = a ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[x+6][y-6] == a && (x+6) < 8 && (y-6) >= 0 ){
                                                arr[x+5][y-5] = a ;
                                                arr[x+4][y-4] = a ;
                                                arr[x+3][y-3] = a ;
                                                arr[x+2][y-2] = a ;
                                                arr[x+1][y-1] = a ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[x+5][y-5] == a && (x+5) < 8 && (y-5) >= 0 ){
                                            arr[x+4][y-4] = a ;
                                            arr[x+3][y-3] = a ;
                                            arr[x+2][y-2] = a ;
                                            arr[x+1][y-1] = a ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[x+4][y-4] == a && (x+4) < 8 && (y-4) >= 0 ){
                                        arr[x+3][y-3] = a ;
                                        arr[x+2][y-2] = a ;
                                        arr[x+1][y-1] = a ;
                                    }
                                }
                            }
                            else{
                                if(arr[x+3][y-3] == a && (x+3) < 8 && (y-3) >= 0 ){
                                    arr[x+2][y-2] = a ;
                                    arr[x+1][y-1] = a ;
                                }
                            }
                        }
                        else{
                            if(arr[x+2][y-2] == a && (x+2) < 8 && (y-2) >= 0 ){
                                arr[x+1][y-1] = a ;
                            }
                        }
                    }
                // (7)   +1 0
                    if(arr[x+1][y] == b  && (x+1) < 8){
                        if(arr[x+2][y] == b && (x+2) < 8){
                            if(arr[x+3][y]== b && (x+3) < 8){
                                if(arr[x+4][y] == b && (x+4) < 8){
                                    if(arr[x+5][y] == b && (x+5) < 8){
                                        if(arr[x+6][y] == b && (x+6) < 8){
                                            if(arr[x+7][y] == b && (x+7) < 8){

                                            }
                                            else{
                                                if(arr[x+7][y] == a && (x+7) < 8 ){
                                                    arr[x+6][y] = a ;
                                                    arr[x+5][y] = a ;
                                                    arr[x+4][y] = a ;
                                                    arr[x+3][y] = a ;
                                                    arr[x+2][y] = a ;
                                                    arr[x+1][y] = a ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[x+6][y] == a && (x+6) < 8 ){
                                                arr[x+5][y] = a ;
                                                arr[x+4][y] = a ;
                                                arr[x+3][y] = a ;
                                                arr[x+2][y] = a ;
                                                arr[x+1][y] = a ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[x+5][y] == a && (x+5) < 8 ){
                                            arr[x+4][y] = a ;
                                            arr[x+3][y] = a ;
                                            arr[x+2][y] = a ;
                                            arr[x+1][y] = a ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[x+4][y] == a && (x+4) < 8 ){
                                        arr[x+3][y] = a ;
                                        arr[x+2][y] = a ;
                                        arr[x+1][y] = a ;
                                    }
                                }
                            }
                            else{
                                if(arr[x+3][y] == a && (x+3) < 8 ){
                                    arr[x+2][y] = a ;
                                    arr[x+1][y] = a ;
                                }
                            }
                        }
                        else{
                            if(arr[x+2][y] == a && (x+2) < 8 ){
                                arr[x+1][y] = a ;
                            }
                        }
                    }
                // (8)   +1 +1
                    if(arr[x+1][y+1] == b  && (x+1) < 8 && (y+1) < 8){
                        if(arr[x+2][y+2] == b && (x+2) < 8 && (y+2) < 8){
                            if(arr[x+3][y+3]== b && (x+3) < 8 && (y+3) < 8){
                                if(arr[x+4][y+4] == b && (x+4) < 8 && (y+4) < 8){
                                    if(arr[x+5][y+5] == b && (x+5) < 8 && (y+5) < 8){
                                        if(arr[x+6][y+6] == b && (x+6) < 8 && (y+6) < 8){
                                            if(arr[x+7][y+7] == b && (x+7) < 8 && (y+7) <8){

                                            }
                                            else{
                                                if(arr[x+7][y+7] == a && (x+7) < 8 && (y+7) < 8 ){
                                                    arr[x+6][y+6] = a ;
                                                    arr[x+5][y+5] = a ;
                                                    arr[x+4][y+4] = a ;
                                                    arr[x+3][y+3] = a ;
                                                    arr[x+2][y+2] = a ;
                                                    arr[x+1][y+1] = a ;
                                                }
                                            }
                                        }
                                        else{
                                            if(arr[x+6][y+6] == a && (x+6) < 8 && (y+6) < 8 ){
                                                arr[x+5][y+5] = a ;
                                                arr[x+4][y+4] = a ;
                                                arr[x+3][y+3] = a ;
                                                arr[x+2][y+2] = a ;
                                                arr[x+1][y+1] = a ;
                                            }
                                        }
                                    }
                                    else{
                                        if(arr[x+5][y+5] == a && (x+5) < 8 && (y+5) < 8 ){
                                            arr[x+4][y+4] = a ;
                                            arr[x+3][y+3] = a ;
                                            arr[x+2][y+2] = a ;
                                            arr[x+1][y+1] = a ;
                                        }
                                    }
                                }
                                else{
                                    if(arr[x+4][y+4] == a && (x+4) < 8 && (y+4) < 8 ){
                                        arr[x+3][y+3] = a ;
                                        arr[x+2][y+2] = a ;
                                        arr[x+1][y+1] = a ;
                                    }
                                }
                            }
                            else{
                                if(arr[x+3][y+3] == a && (x+3) < 8 && (y+3) < 8 ){
                                    arr[x+2][y+2] = a ;
                                    arr[x+1][y+1] = a ;
                                }
                            }
                        }
                        else{
                            if(arr[x+2][y+2] == a && (x+2) < 8 && (y+2) < 8 ){
                                arr[x+1][y+1] = a ;
                            }
                        }
                    }
                    for(int i = 0 ; i < 8 ; i++){
                        for(int j = 0 ; j < 8 ; j++){
                            if(arr[i][j] == 3){
                                arr[i][j] = 0 ;
                            }
                        }
                    }
                    cout << "_________________________________" << endl ;
                    for(int i = 0 ; i < 8 ; i++){
                        for(int j = 0 ; j < 8 ; j++){
                            cout << arr[i][j] << " " ;
                        }
                        cout << endl ;
                    }
                    cout << "_________________________________" << endl ;

                    nobe = 0 ;
//                end if bod
                }

            int c = b ;
            b = a ;
            a = c ;

            ofstream fmat("matrix.txt") ;
            fmat << a << endl ;
            fmat << b << endl ;
            for(int i = 0 ; i < 8 ; i++){
                for(int j = 0 ; j < 8 ; j++){
                    fmat << arr[i][j] << " " ;
                }
                fmat << endl ;
            }
        }

    //    end ****************************************************************************************************************
        fmat.close() ;
        remove("matrix.txt") ;
        int one = 0 ,two = 0 ;
        for(int i = 0 ; i < 8 ; i++){
            for(int j = 0 ; j < 8 ; j++){
                if(arr[i][j] == 1){
                    one++ ;
                }
                if(arr[i][j] == 2){
                    two++ ;
                }
            }
        }
        cout << endl << "________________________________________________" << endl ;
        cout << "number 1 : " << one << endl << "number 2 : " << two << endl ;
        char win[10] = {0} ;
        if(one > two){
            cout << "win : 1" << endl ;
            win[0] = '1' ;
            cout << endl << "________________________________________________" << endl ;
        }
        else{
            if(two > one){
                cout << "win : 2" << endl ;
                win[0] = '2' ;
                cout << endl << "________________________________________________" << endl ;
            }
            else{
                win[0] = 'e' ;
                cout << "equal" << endl ;
                cout << endl << "________________________________________________" << endl ;
            }
        }


    //    shift for save
        for(int i = 9 ; i > 0 ; i--){
            arrwin[i] = arrwin[i-1] ;
        }
        arrwin[0] = win[0] ;

        ofstream ffwin("winner.txt") ;
        for(int i = 0 ; i < 10 ; i++){
    //        grammar
            if(i==0){
                ffwin << i+1 << "st previous game : win : " << arrwin[i] << endl ;
            }
            else{
                if(i==1){
                    ffwin << i+1 << "nd previous game : win : " << arrwin[i] << endl ;
                }
                else{
                    if(i==2){
                        ffwin << i+1 << "rd previous game : win : " << arrwin[i] << endl ;
                    }
                    else{
                        ffwin << i+1 << "th previous game : win : " << arrwin[i] << endl ;
                    }
                }
            }

        }
        ffwin.close() ;

        ofstream fwin("winnern.txt") ;
        for(int i = 0; i < 10 ; i++){
            fwin << arrwin[i] << endl ;
        }
        fwin.close() ;
//        statistics
        int sta ;
        cout << endl << "You want to see the statistics of past games ? ( 0 : No , 1 : Yes )" << endl;
        cin >> sta ;
        cout << endl ;
        ifstream ffin("winner.txt") ;
        if(sta){
            cout << ffin.rdbuf() << endl ;
            cout << endl << "________________________________________________" << endl ;
        }

//        end??????????????
        int endif ;
        cout << "play agin ? ( 0 : No , 1 : Yes )" << endl ;
        cin >> endif ;
        if(!endif){
            break ;
        }
        cout << endl << "---------------------------------------------------------" << endl ;
    }
    cout << endl << "---------------------------------------------------------" << endl ;
    cout << "     Have a great day :)" << endl << endl <<  "***( Created by Ardent )*** " << endl <<endl ;
    cout << "---------------------------------------------------------" << endl ;

    return 0;
}
