#include<json/json.h>
#include<stdio.h>

int main()
{
    char *jobj = json_object_new_object();
    char *jvalue1 = json_object_new_string("hello");
    char *jvalue2 = json_object_new_int(1010);
    char *jvalue3 = json_object_new_int(128);
    json_object_object_add(jobj,"hello",jvalue1);
    json_object_object_add(jobj,"birthdate",jvalue2);
    json_object_object_add(jobj,"junk",jvalue3);
    char *jstring = json_object_to_json_string(jobj);
    printf("%s\n",jstring);

}