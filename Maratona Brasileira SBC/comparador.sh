for f in $(ls input/); do
    ./a.out < input/$f > output/prog/$f
    diff output/$f output/prog/$f
done
