# Usa un'immagine leggera con GCC
FROM gcc:latest

# Crea la cartella di lavoro nel container
WORKDIR /app

# Copia il file sorgente nella cartella di lavoro
COPY alloc5gb.c .

# Compila il programma
RUN gcc -o alloc5gb alloc5gb.c

# Esegui il programma all'avvio del container
CMD ["./alloc5gb"]

