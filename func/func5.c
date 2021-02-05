void char_cesar(char * ch, int shift){//Написать функцию void char_cesar(char * ch, int shift), которая изменяет переданный ей символ ch по алгоритму Цезаря с ключом shift.

        *ch+= shift;
        if (*ch>122) *ch-=26;
}

