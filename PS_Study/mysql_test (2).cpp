
#pragma comment(lib, "libmysql.lib") 
#pragma comment(lib, "ws2_32.lib")

#define SOCKET int
#include<mysql.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define DB_HOST "10.10.2.6"  
#define DB_USER "cs"  //여기다 아이디를 집어넣습니다.
#define DB_PASS "cs1004!@#" // 여기다 패스워드를 집어넣습니다.
#define DB_NAME "test1" //DB이름을 적습니다.

// DB생성
#define SQL_CREATE_DATABASE "CREATE DATABASE user;"


// 테이블 생성

#define SQL_CREATE_TABLE "CREATE TABLE images \
	(id int(11) not null auto_increment, data mediumblob, primary key(id)) engine = MYISAM default charset=utf8;" 

// 테이블 속성 
#define SQL_INSERT_RECORD "INSERT INTO kbs ( id , num , string ) \
    VALUES (NULL , %d, '%s');" 

// 테이블안에 데이터 출력
#define SQL_SELECT_RECORD "SELECT data FROM images where id=1"

// 테이블 삭제
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
	
	
    // DB 연결
    connection = mysql_real_connect(&conn, DB_HOST,
        DB_USER, DB_PASS,DB_NAME, 3306,(char *)NULL, 0);
    if(connection==NULL)
    {
        fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
        return 1;
    }



    // 테이블 생성
    query_stat=mysql_query(connection,SQL_CREATE_TABLE);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }

	// 파일 오픈
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
    // 레코드 삽입
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

    // 셀렉트
    query_stat=mysql_query(connection,SQL_SELECT_RECORD);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }

    // 결과 출력
    sql_result=mysql_store_result(connection);
    while((sql_row=mysql_fetch_row(sql_result))!=NULL)
    {
        printf("%2s\n",sql_row[0]);
    }
    mysql_free_result(sql_result);

	/*
    // 테이블 삭제
    query_stat=mysql_query(connection,SQL_DROP_TABLE);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }


    // DB 연결 닫기
    mysql_close(connection);
    return 0;
}
*/
/*
아래는 DB를 C와 연동시키는 소스구문입니다. 주석도 잘 달아 놨어요~
 
#include "mysql.h"  //<>로 해도 되고 "mysql.h"로 해도 되더군요.   
  
main() {   
  
   MYSQL *conn; //mysql과의 커넥션을 잡는데 지속적으로 사용되는 변수에요.   
   MYSQL_RES *res;  //쿼리문에 대한 result값을 받는 위치변수에요.   
   MYSQL_ROW row;   //쿼리문에 대한 실제 데이터값이 들어있는 변수에요.   
  
   char *server = "localhost";  //서버의 경로인데요 localhost로 하면 자기 컴퓨터란 의미랍니다.   
   char *user = "root"; //mysql로그인 아이디인데요. 기본적으로 별다른 설정이 없으면 root에요   
   char *password = "패스워드를 넣어주세요"; /* set me first    //password를 넣는부분이에요   
   char *database = "데이터베이스 이름을넣어주세요";  //Database 이름을 넣어주는 부분이에요.   
  
   conn = mysql_init(NULL); //connection 변수를 초기화 시켜요.   
  
   /* Connect to database ///DB없이 MYSQL만 접속시킬꺼에요   
   if (!mysql_real_connect(conn, server,    //mysql_real_connect()함수가 연결을 시켜주는 함수에요   
         user, password, NULL, 0, NULL, 0)) {   
      fprintf(stderr, "%s\n", mysql_error(conn));   
      exit(1);   
   }   
  
   res = mysql_use_result(conn);    //접속한 결과값은 res에 넣는건데요. 딱히 지금은 안해도 상관없어요.   
  
    mysql_query(conn, "create database 데이터베이스이름 DEFAULT CHARACTER SET euckr DEFAULT COLLATE euckr_korean_ci;");   
    //mysql_query()는 제 두번째 글 step by step으로 따라했던 부분에 보시면 mysql에서 직접 입력했던 부분을 그대로   
    //옮겨온 것을 볼 수 있는데요. 즉 이 값을 C에서 직접 mysql로 쳐준다고 생각하시면 되요.   
  
   /* Connect to database ///MYSQL에 생성된 DB에 접속   
   if (!mysql_real_connect(conn, server,   
         user, password, database, 0, NULL, 0)) {   
      fprintf(stderr, "%s\n", mysql_error(conn));   
      exit(1);   
   }   
}    

*/

/*

  // 테이블 생성쿠러

#define Create_Table "Create table kbs (id int not null auto_Increment, num int null, string varchar(20) NULL, primary key(id)) type=MyISAM;"

// 테이블 삭제
#define drop_table "drop table kbs;"

// data input
#define insert_value "insert into kbs(num,string) values(NULL,'%d','%s');"

//검색 쿼리
#define DB_SELECT "select * from users"
int main()
{
    MYSQL *connection=NULL, conn;
    MYSQL_RES *sql_result;
    MYSQL_ROW sql_row;
    int query_stat;
    mysql_init(&conn);

	char query[255];

    // DB 연결
    connection = mysql_real_connect(&conn, DB_HOST,DB_USER, DB_PASS,DB_NAME, 3306,(char *)NULL, 0);
    if(connection==NULL)
    {
        fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
        return 1;
    }
	
	// 테이블 생성	  
    query_stat=mysql_query(connection,Create_Table);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }
	/*
      // 셀렉트
    query_stat=mysql_query(connection,DB_SELECT);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }


    // 결과 출력
    sql_result=mysql_store_result(connection);
    while((sql_row=mysql_fetch_row(sql_result))!=NULL)
    {
        printf("%2s %2s %s \n %s %s %s \n %s\n",sql_row[0],sql_row[1],sql_row[2],sql_row[3],sql_row[4],sql_row[5],sql_row[6]);
    }
	

	   // 레코드 삽입
    for(int i=0;i<5;i++)
    {
        sprintf(query,insert_value,100+i,"안녕하세요 지돌스타예요~");
        query_stat = mysql_query(connection, query);
        if (query_stat != 0)
        {
            fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
            return 1;
        }
    }

	/*

	// 테이블 삭제
    query_stat=mysql_query(connection,drop_table);
    if (query_stat != 0)
    {
        fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
        return 1;
    }



    mysql_free_result(sql_result);
    // DB 연결 닫기
    mysql_close(connection);
    return 0;
}
*/