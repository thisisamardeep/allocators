bad_words = ['std::', "__gnu_cxx"]

with open('full.log') as oldfile, open('new.txt', 'w') as newfile:
    for line in oldfile:
        if not any(bad_word in line for bad_word in bad_words):
            newfile.write(line)
