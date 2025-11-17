 # SQLite 3 Command Reference

## Dot Commands

- `.shell <PARAMETER>`  
This command executes `<PARAMETER>` within the shell, so running `.shell clear`
will execute the `clear` command in the terminal environment, clearing the
terminal.

- `.tables`  
Lists all the tables in the currently open `.db` file.

- `.schema`  
Displays the schema for the opened database; think of the schema as the
blueprint for the db. It defines:
    - The tables that exist in the db.
    - The columns in the table
    - What type of data each column can hold
    - The rules and relationships between tables (primary keys)  
    - `.schema users` would show the schema for the table users in the currently
    open `db`.

## General Commands (the actual SQL language)
These commands aren't dot commands. They're typed in uppercase. All names of
created tables and `db`s are in lowercase, always. All statements in SQL end
with `;`.

- `CREATE`
    - `CREATE TABLE table_name (column_title DATATYPE EXTRA_INFO ... );`
        - We can create a new table with this command. `EXTRA_INFO` are things
        such as `PRIMARY KEY`, `UNIQUE`, `NOT NULL`. They can be stacked
        together: `NOT NULL UNIQUE` would be equal to `UNIQUE` and `NOT NULL` if
        they were mashed together. You can use `DATETIME` as a type, and specify
        its default value with `DEFAULT` in the extra info section as
        `CURRENT_TIMESTAMP`.
- `ALTER`
    - `ALTER TABLE table_name ADD COLUMN column_name TYPE;`
        - SQL is quite intuitive, this would add a column to the table
        `table_name` called `column_name` of type `TYPE`. Similarly, you can add
        a new row by swapping out `COLUMN` for `ROW` instead.
- `DROP`
    - The `DROP` keyword is used for deleting entire objects, such as tables.
        - Pretty self explanatory. `DROP table_name` deletes the table with
        `table_name`.

## Data Manipulation Language (DML)
- `INSERT`
    - Insert an entry into a table.
        - `INSERT INTO table_name (name, username)`  
        `VALUES ('value1', 'value2');`
        - Inserts the values `'value1'` and `'value2'` into the table named
        `table_name` into the columns `name` and `username`. Notice how these
        look like tuples, and the indexes of the tuples align. 
- `SELECT`
    - Select stuff.
        - `SELECT * FROM table_name;`
        - Selects everything from the table `table_name`.
        - We can specify other things to filter our search down.
        - `SELECT * FROM table_name WHERE <OPERATION>` would filter our
        selection to only where our `<OPERATION>` returns true. For example,
        `SELECT * FROM table_name WHERE age = 5` would return a new table made
        out of `table_name`, where every entry into the table satisifies `age =
        5`. 
        - You can also add limits, by adding `LIMIT <int>` at the end. So, `SELECT * FROM table_name WHERE age = 5 LIMIT 2` would give us the first two results that satisfy such condition.
- `UPDATE`
    - Update stuff.
    - `UPDATE users SET something = 'something' WHERE id = 1;`
    - Self explanatory really. Not specifying the where would edit every row of
    the table. Careful.
- `DELETE`
    - Used to delete **rows** from a table. Not to be confused with `DROP`. 
    - `DELETE FROM table_name WHERE <condition>`
### Foreign Keys
Foreign Keys are used to create relationships between two tables. Consider the
following example:  
1. A user who exists in the table `users` wants to create a post on an online
   forum, and their post will be added to the db `posts`. 
2. The user must first exist on the `users` db before being able to make a post
3. So each post can be
linked to a user inside of the `posts` db.  

Foreign keys are specified upon table creation: 

```sql
CREATE TABLE posts (
    id INTEGER PRIMARY KEY,
    user_id INTEGER REFERENCES users(id), --foreign key
    title TEXT NOT NULL, 
    body TEXT NOT NULL
);
```
A foreign key is a column in one table that points to the primary key in another table. It creates a link between two tables to enforce consistency.
So, this enforces the fact that `user_id` must exist in the `users` table.

## Data Types

### 1. NULL
- **Description**: Represents a missing or unknown value
- **Storage**: No storage required
- **Example**: `NULL`

### 2. INTEGER
- **Description**: Signed integers stored in 1, 2, 3, 4, 6, or 8 bytes depending on magnitude
- **Size**: Up to 64-bit signed integers (-9223372036854775808 to 9223372036854775807)
- **Example**: `42, -123, 0, 9999999999`

### 3. REAL
- **Description**: Floating-point numbers stored as 8-byte IEEE floating point numbers
- **Precision**: 64-bit floating point (approximately 15 decimal digits of precision)
- **Example**: `3.14159, -2.5, 1.0e10, 2.0`

### 4. TEXT
- **Description**: Character strings stored using database encoding (UTF-8, UTF-16BE, or UTF-16LE)
- **Encoding**: Database-defined (typically UTF-8)
- **Limits**: Subject to SQLITE_MAX_LENGTH (default 1 billion bytes)
- **Example**: `'Hello World', 'SQLite', N'Unicode text'`

### 5. BLOB
- **Description**: Binary large object stored exactly as input without any character set conversion
- **Usage**: Raw binary data, images, files, serialized objects
- **Limits**: Subject to SQLITE_MAX_LENGTH
- **Example**: `x'53616d706c65'` (hexadecimal for "Sample")

## Type Affinities

SQLite supports type affinity to maintain compatibility with other SQL databases:

### 6. NUMERIC Affinity
- **Description**: Can contain INTEGER, REAL, or NULL values
- **Declaration**: `NUMERIC`, `DECIMAL(10,5)`, `BOOLEAN`, `DATE`, `DATETIME`
- **Behavior**: Prefers INTEGER storage, then REAL if has fractional component

### 7. INTEGER Affinity
- **Description**: Prefers INTEGER storage but can store other types
- **Declaration**: `INT`, `INTEGER`, `TINYINT`, `SMALLINT`, `MEDIUMINT`, `BIGINT`, `UNSIGNED BIG INT`, `INT2`, `INT8`
- **Behavior**: Converts to INTEGER when possible

### 8. REAL Affinity
- **Description**: Prefers REAL storage but can store other types
- **Declaration**: `REAL`, `FLOAT`, `DOUBLE`, `DOUBLE PRECISION`
- **Behavior**: Converts to REAL when possible

### 9. TEXT Affinity
- **Description**: Prefers TEXT storage but can store other types
- **Declaration**: `CHARACTER(20)`, `VARCHAR(255)`, `VARYING CHARACTER(255)`, `NCHAR(55)`, `NATIVE CHARACTER(70)`, `NVARCHAR(100)`, `TEXT`, `CLOB`
- **Behavior**: Converts to TEXT using database encoding

### 10. BLOB Affinity
- **Description**: No preference for any storage class, stores data exactly as provided
- **Declaration**: `BLOB` or no type specified
- **Behavior**: No type conversion occurs

## Special Data Type Declarations

### 11. BOOLEAN
- **Description**: Typically declared but stored as INTEGER (0 or 1)
- **Storage**: INTEGER affinity
- **Example**: `BOOLEAN` column stores 0 (false) or 1 (true)

### 12. DATE/TIME Types
- **Description**: Stored as TEXT, INTEGER, or REAL depending on format
- **Formats**:
  - TEXT: ISO8601 strings ("YYYY-MM-DD HH:MM:SS.SSS")
  - INTEGER: Unix Time (seconds since 1970-01-01)
  - REAL: Julian day numbers
- **Functions**: `date()`, `time()`, `datetime()`, `julianday()`, `strftime()`

### 13. NUMERIC with Precision/Scale
- **Description**: Declared with precision but stored as REAL or INTEGER
- **Example**: `DECIMAL(10,2)` - stored as REAL with 2 decimal places
- **Note**: SQLite doesn't enforce precision/scale constraints

## SQLite-Specific Type Behaviors

### 14. No Explicit Boolean Type
- **Description**: Uses INTEGER to represent boolean values
- **Convention**: 0 = FALSE, 1 = TRUE
- **Example**: `CREATE TABLE t (active INTEGER);` then `INSERT INTO t VALUES (1);`

### 15. No Explicit Enum Type
- **Description**: Uses TEXT or INTEGER to represent enumerated values
- **Practice**: Application-level constraint enforcement
- **Example**: `CHECK (status IN ('active', 'inactive', 'pending'))`

### 16. Flexible Numeric Types
- **Description**: No distinction between different integer sizes (TINYINT, BIGINT, etc.)
- **Storage**: All stored as variable-length integers
- **Benefit**: Automatic optimal storage size

### 17. No Fixed-Length Character Types
- **Description**: CHAR(n) behaves identically to VARCHAR(n)
- **Storage**: Variable-length text storage
- **Note**: Length specifications are ignored for storage optimization
