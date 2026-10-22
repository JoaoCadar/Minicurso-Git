test -d build || mkdir build 
for dir in duplas/*; do
    TARGET=build/$(echo $file | sed 's/^[^\/]*\///; s/\.c$//')
    gcc $file/modelo.c -o $TARGET
done

for exec in build/*; do
    ./$exec $1
done