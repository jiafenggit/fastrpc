#include"json.h"
#include<iostream>
#include<fstream>
#include<strstream>
#include<sstream>
using namespace Json;
using namespace std;

int main()
{
    {
        for (int i = 0; i < 1; ++i) {
            Json::Value val;
            for (int j = 0; j < 10000000; ++j) {
                val[j] = "hhh";
            }
        }
        usleep(1*1000*1000);
        printf("end\n");
    }
    usleep(300*1000*1000);
    return 0;



    //std::ifstream in("libopenapi.so");
    //std::ostringstream tmp;
    //tmp << in.rdbuf();
    //std::string str = tmp.str();
    //cout<<str.length()<<endl;

    //Json::Value json_temp;
    //json_temp["name"] = str;
    //cout<<json_temp["name"].asString().length()<<endl;

    //string text;
    //StyledWriter writer;
    //text=writer.write(json_temp);
    //cout<<text.length()<<endl;

    //Json::Reader reader;
    //Json::Value value;
    //if (reader.parse(text, value))
    //{
    //    cout<<value["name"].asString().length()<<endl;
    //}


    //cout << "by feimat@baidu.com" << endl;

    //Json::Value testV;
    //testV["xpr"]="hello";
    //testV["search"]="baidu";
    //testV["A"]="10";

    //string strFrom = testV.toStyledString();

    //cout << strFrom << endl;
    //cout << "---------------" << endl;

    //Json::Reader get;
    //Json::Value gv;

    //get.parse(strFrom,gv);

    ////int i = getV["A"].asInt;
    //string s1 = gv["xpr"].asString();
    //string s2 = gv["search"].asString();
    //string s3 = gv["xxx"].asString();

    ////cout << i << endl;
    //cout << s1 << endl;
    //cout << s2 << endl;
    //cout << s3 << endl;


















	return 0;
}