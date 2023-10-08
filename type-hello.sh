#Copyright 2019-2023 Kai D. Gonzalez

gcc main.c -o type-hello -Wno-implicit-int
echo "Hello, world!" | ./type-hello
rm ./type-hello
