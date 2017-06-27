#include<json/json.h>
#include<stdio.h>

int main()
{
    char *payload = "{\"name\":\"hello_json\"}";
    json_object *jobj = json_tokener_parse(payload);
    enum json_type jtype = json_object_get_type(jobj);
    switch(jtype)
    {
         case json_type_null: printf("json_type_nulln");
                              break;
         case json_type_boolean: printf("json_type_booleann");
                              break;
         case json_type_double: printf("json_type_doublen");
                              break;
         case json_type_int: printf("json_type_intn");
                              break;
         case json_type_object: printf("json_type_objectn");
                              break;
         case json_type_array: printf("json_type_arrayn");
                              break;
         case json_type_string: printf("json_type_stringn");
                              break;
    }
}