#include <stdio.h>
#include <mysql/mysql.h>
int main()
{
    MYSQL mysql; //句柄

    mysql_init(&mysql);

    if (mysql_real_connect(&mysql, NULL, "root", NULL, "TESTDB", 0, NULL, 0) == NULL){
        printf("error1: %s\n", mysql_error(&mysql));
        return 0;
    }

    if(mysql_query(&mysql, "SELECT * FROM records")){
        printf("error2: %s\n", mysql_error(&mysql));
        return 0;
    }

    MYSQL_RES *res = mysql_store_result(&mysql);
    if(res != NULL)
    {
        MYSQL_ROW row;
        while(row = mysql_fetch_row(res))
        {
            fprintf(stdout, "%s|%s|%s|%s|%s|%s", row[0], row[1], row[2], row[3], row[4], row[5]);
        }
        mysql_free_result(res);
    }
    else
    {
        printf("error3: %s\n", mysql_error(&mysql));
        return 0;
    }
    
    mysql_close(&mysql);

    return 0;
}
