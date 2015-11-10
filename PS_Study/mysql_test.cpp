
#pragma comment(lib, "libmysql.lib") 
#pragma comment(lib, "ws2_32.lib")

#define SOCKET int
#include<mysql.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define DB_HOST "10.10.2.6"  
#define DB_USER "cs"  //����� ���̵� ����ֽ��ϴ�.
#define DB_PASS "cs1004!@#" // ����� �н����带 ����ֽ��ϴ�.
#define DB_NAME "test1" //DB�̸��� �����ϴ�.

// DB����
#define SQL_CREATE_DATABASE "CREATE DATABASE user;"


// ���̺� ����

#define SQL_CREATE_TABLE "CREATE TABLE images \
	(id int(11) not null auto_increment, data mediumblob, primary key(id)) engine = MYISAM default charset=utf8;" 

// ���̺� �Ӽ� 
#define SQL_INSERT_RECORD "INSERT INTO kbs ( id , num , string ) \
    VALUES (NULL , %d, '%s');" 

// ���̺�ȿ� ������ ���
#define SQL_SELECT_RECORD "SELECT data FROM images where id=1"

// ���̺� ����
#define SQL_DROP_TABLE "DROP TABLE kbs"

int main()
{
    MYSQL *connection=NULL, conn;
    MYSQL_RES *sql_result;
    MYSQL_ROW sql_row;

	unsigned long len, file_size, *lengths;

	FILE *fp;
	char *buf, *buf_to, *query, *stat="insert into images(data) value('%s')";

    int query_stat;

    mysql_init(&conn);
	
	
    // DB ����
    connection = mysql_real_connect(&conn, DB_HOST,
        DB_USER, DB_PASS,DB_NAME, 3306,(char *)NULL, 0);
    if(connection==NULL)
    {
        fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
        return 1;
    }



    // ���̺� ����
    query_stat=mysql_query(connection,SQL_CREATE_TABLE);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }

	// ���� ����
	fp=fopen("Desert.bmp","r");
	rewind(fp);
	fseek(fp,0,SEEK_END);
	file_size=ftell(fp); 

	buf=(char *)malloc(file_size);
	fread(buf,sizeof(char),file_size, fp);
	fclose(fp);

//	buf_to=(char *)malloc(file_size*2+1);
//	mysql_real_escape_string(connection,buf_to,buf,file_size);

	query=(char *)malloc(strlen(stat)+file_size*2+1);
//	len =_snprintf(query,strlen(stat)+file_size*2+1,stat,buf_to);
	len =sprintf(query,stat,buf);

	query_stat=mysql_real_query(connection,query,len);

	free(buf);
//	free(buf_to);
	free(query);

	query_stat=mysql_query(connection,SQL_SELECT_RECORD);

	sql_result=mysql_store_result(connection);

	sql_row=mysql_fetch_row(sql_result);
	lengths=mysql_fetch_lengths(sql_result);
	printf("file lengths : %d\n",lengths[0]);

	fp=fopen("saveimage.bmp","w");

	fwrite(sql_row[0],lengths[0],1,fp);
	mysql_free_result(sql_result);
	fclose(fp);



	mysql_close(connection);
	return 0;
}
	

	/*
    // ���ڵ� ����
    for(i=0;i<5;i++)
    {
        sprintf(query,SQL_INSERT_RECORD,100+i,name[i]);
        query_stat = mysql_query(connection, query);
        if (query_stat != 0)
        {
            fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
            return 1;
        }
    }

    // ����Ʈ
    query_stat=mysql_query(connection,SQL_SELECT_RECORD);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }

    // ��� ���
    sql_result=mysql_store_result(connection);
    while((sql_row=mysql_fetch_row(sql_result))!=NULL)
    {
        printf("%2s\n",sql_row[0]);
    }
    mysql_free_result(sql_result);

	/*
    // ���̺� ����
    query_stat=mysql_query(connection,SQL_DROP_TABLE);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }


    // DB ���� �ݱ�
    mysql_close(connection);
    return 0;
}
*/
/*
�Ʒ��� DB�� C�� ������Ű�� �ҽ������Դϴ�. �ּ��� �� �޾� �����~
 
#include "mysql.h"  //<>�� �ص� �ǰ� "mysql.h"�� �ص� �Ǵ�����.   
  
main() {   
  
   MYSQL *conn; //mysql���� Ŀ�ؼ��� ��µ� ���������� ���Ǵ� ��������.   
   MYSQL_RES *res;  //�������� ���� result���� �޴� ��ġ��������.   
   MYSQL_ROW row;   //�������� ���� ���� �����Ͱ��� ����ִ� ��������.   
  
   char *server = "localhost";  //������ ����ε��� localhost�� �ϸ� �ڱ� ��ǻ�Ͷ� �ǹ̶��ϴ�.   
   char *user = "root"; //mysql�α��� ���̵��ε���. �⺻������ ���ٸ� ������ ������ root����   
   char *password = "�н����带 �־��ּ���"; /* set me first    //password�� �ִºκ��̿���   
   char *database = "�����ͺ��̽� �̸����־��ּ���";  //Database �̸��� �־��ִ� �κ��̿���.   
  
   conn = mysql_init(NULL); //connection ������ �ʱ�ȭ ���ѿ�.   
  
   /* Connect to database ///DB���� MYSQL�� ���ӽ�ų������   
   if (!mysql_real_connect(conn, server,    //mysql_real_connect()�Լ��� ������ �����ִ� �Լ�����   
         user, password, NULL, 0, NULL, 0)) {   
      fprintf(stderr, "%s\n", mysql_error(conn));   
      exit(1);   
   }   
  
   res = mysql_use_result(conn);    //������ ������� res�� �ִ°ǵ���. ���� ������ ���ص� ��������.   
  
    mysql_query(conn, "create database �����ͺ��̽��̸� DEFAULT CHARACTER SET euckr DEFAULT COLLATE euckr_korean_ci;");   
    //mysql_query()�� �� �ι�° �� step by step���� �����ߴ� �κп� ���ø� mysql���� ���� �Է��ߴ� �κ��� �״��   
    //�Űܿ� ���� �� �� �ִµ���. �� �� ���� C���� ���� mysql�� ���شٰ� �����Ͻø� �ǿ�.   
  
   /* Connect to database ///MYSQL�� ������ DB�� ����   
   if (!mysql_real_connect(conn, server,   
         user, password, database, 0, NULL, 0)) {   
      fprintf(stderr, "%s\n", mysql_error(conn));   
      exit(1);   
   }   
}    

*/

/*

  // ���̺� ������

#define Create_Table "Create table kbs (id int not null auto_Increment, num int null, string varchar(20) NULL, primary key(id)) type=MyISAM;"

// ���̺� ����
#define drop_table "drop table kbs;"

// data input
#define insert_value "insert into kbs(num,string) values(NULL,'%d','%s');"

//�˻� ����
#define DB_SELECT "select * from users"
int main()
{
    MYSQL *connection=NULL, conn;
    MYSQL_RES *sql_result;
    MYSQL_ROW sql_row;
    int query_stat;
    mysql_init(&conn);

	char query[255];

    // DB ����
    connection = mysql_real_connect(&conn, DB_HOST,DB_USER, DB_PASS,DB_NAME, 3306,(char *)NULL, 0);
    if(connection==NULL)
    {
        fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
        return 1;
    }
	
	// ���̺� ����	  
    query_stat=mysql_query(connection,Create_Table);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }
	/*
      // ����Ʈ
    query_stat=mysql_query(connection,DB_SELECT);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }


    // ��� ���
    sql_result=mysql_store_result(connection);
    while((sql_row=mysql_fetch_row(sql_result))!=NULL)
    {
        printf("%2s %2s %s \n %s %s %s \n %s\n",sql_row[0],sql_row[1],sql_row[2],sql_row[3],sql_row[4],sql_row[5],sql_row[6]);
    }
	

	   // ���ڵ� ����
    for(int i=0;i<5;i++)
    {
        sprintf(query,insert_value,100+i,"�ȳ��ϼ��� ������Ÿ����~");
        query_stat = mysql_query(connection, query);
        if (query_stat != 0)
        {
            fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
            return 1;
        }
    }

	/*

	// ���̺� ����
    query_stat=mysql_query(connection,drop_table);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }



    mysql_free_result(sql_result);
    // DB ���� �ݱ�
    mysql_close(connection);
    return 0;
}
*/