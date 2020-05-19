int main(int argc, char **argv) {
    // Fork 
        char *copy;
        copy = (char *)malloc(strlen(argv[0]));
        strcpy(copy, argv[0]);
        return copy;
}

