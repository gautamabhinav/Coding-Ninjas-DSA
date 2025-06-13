//largest Row or Column

#include <bits/stdc++.h>
using namespace std;

#include <climits>
void findlargest(int **input,int row,int col){

    int max=INT_MIN;
    int row_index=0,col_index=0;
    bool flag = true;

    for(int i=0;i<row;i++){
        int row_sum=0;
        for(int j=0;j<col;j++){
            row_sum+=input[i][j];
        }
        if(row_sum>max){
            max=row_sum;
            row_index=i;
        }
    }


    for(int i=0;i<col;i++){
        int col_sum=0;
        for(int j=0;j<row;j++){
            col_sum+=input[i][j];
        }
        if(col_sum>max){
            flag=false;
            max=col_sum;
            col_index=i;
        }
    }
    

    if(flag){
        cout<<"row" <<row_index<<" "<<max;
    }
    else{
        cout<<"column" <<col_index<<" "<<max;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int R,C;
        cin>>R>>C;

        int **input = new input *[R];
        for(int i=0;i<R;i++){
            input[i]=new int [C];
            for(int j=0;j<C;j++){
                cin>>input[i][j];
            }
        }
        findlargest(input,row,col);
        cout<<endl;
    }
}


#include<climits>
void findLargest(int **input, int nRows, int mCols)
{
	int max = INT_MIN;
	int row_index = 0, col_index = 0;
	bool flag = true;

	for (int i = 0; i < nRows; i++)
	{
		int row_sum = 0;
		for (int j = 0; j < mCols; j++)
		{
			row_sum += input[i][j];
		}
		if (row_sum > max)
		{
			max = row_sum;
			row_index = i;
		}
	}

	for (int i = 0; i < mCols; i++)
	{
		int col_sum = 0;
		for (int j = 0; j < nRows; j++)
		{
			col_sum += input[j][i];
		}
		if (col_sum > max)
		{
			flag = false;
			max = col_sum;
			col_index = i;
		}
	}

	if (flag)
		cout << "row " << row_index << " " << max;
	else
		cout << "column " << col_index << " " << max;
}



void findLargest(int **input,int row,int col){

    int max=INT_MIN;
    bool flag=true;
    int row_index=0, col_index=0;
    

    for(int i=0;i<row;i++){
        int row_sum=0;
        for(int j=0;j<col;j++){
            row_sum+=input[i][j];
        }

        if(row_sum>max){
            max=row_sum;
            row_index=i;
        }
    }

    for(int i=0;i<col;i++){
        int col_sum=0;
        for(int j=0;j<row;j++){
            col_sum+=input[j][i];
        }

        if(col_sum>max){
            flag=false;
            max=col_sum;
            col_sum=i;
        }
    }

    if(flag){
        cout<<"row"<<" "<<row_index<<" "<<max;
    }
    else{
        cout<<"column"<<" "<<col_index<<" "<<max;
    }
}






#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int row,col;
        cin>>row>>col;

        int **input = new int *[row];

        for(int i=0;i<row;i++){
            input[i]=new int[col];

            for(int i=0;i<col;i++){
                cin>>input[i][j];
            }
        }
        findLargest(input,row,col);
        cout<<endl;
    }
}