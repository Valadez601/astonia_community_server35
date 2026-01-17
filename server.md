# server35

Example command line:
```
./server35 -a 3 -m 13 -s dbhost=database.astonia.com -s dbpass="top secret" -s dbname=merc35_a -s chathost=chat.astonia.com
```

Example config file. Invocation:
```
./server35 -a 3 -m 13 -f server.cnf
```
server.cnf:
```
./server35 -a 3 -m 13 -s 
dbhost=database.astonia.com
dbpass="top secret"
dbname=merc35_a
chathost=chat.astonia.com
```

Example environment variables:
```
export AS35_DBHOST=database.astonia.com
export AS35_DBPASS="top secret"
export AS35_DBNAME=merc35_a
export AS_CHATHOST=chat.astonia.com

./server35 -a 3 -m 13 -f server.cnf
```

All options have sensible defaults (localhost, the password from MYSQLPASS, merc35 and localhost, respectively.)
