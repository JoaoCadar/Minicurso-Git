ROOT_DIR=$PWD
test -d build || mkdir build 
NUM=${1:-15}
echo Numero é $NUM
for dir in duplas/*; do
    cd $ROOT_DIR/$dir
    TARGET=$ROOT_DIR/build/$(echo $dir | sed 's/^[^\/]*\///; s/\.c$//')
    gcc modelo.c -o $TARGET
done

for exec in build/*; do
    $ROOT_DIR/$exec $NUM
done
