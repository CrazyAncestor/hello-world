#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <stdlib.h>2
#define character_num 2
#define property_num 5
#define cha_image 1

int main()
{
  int property[character_num][property_num];
  std::string name_of_image[character_num][cha_image];
  //readfile
  std::fstream file;
  file.open("property.csv");



  std::string line;
  int a=0;
  while (getline( file, line,'\n'))  //讀檔讀到跳行字元
	{
	  std::istringstream templine(line); // string 轉換成 stream
	  std::string data;

	  /*while (getline( templine, data,',')) //讀檔讀到逗號
	  {
	    matrix.push_back(atof(data.c_str()));  //string 轉換成數字
	  }*/

        int buffer=2;
        for(int b=0;b<buffer;b++){
            getline( templine, data,',');
        }
        for(int b=0;b<property_num;b++){
            getline( templine, data,',');
            property[a][b]=atoi(data.c_str());
        }
        for(int c=0;c<cha_image;c++){
            getline( templine, data,',');
            name_of_image[a][c]=data;std::cout<<name_of_image[a][c];
        }
	  a++;
	}

    file.close();
  for(int i=0;i<character_num;i++){
    for(int j=0;j<property_num;j++){
        std::cout<<property[i][j];
    }
    std::cout<<std::endl;
  }


}
