
user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ ls
0-positive_or_negative.c  1-last_digit.c  9-print_comb.c  README.md

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ rm -r 9-print_comb.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ ls
0-positive_or_negative.c  1-last_digit.c  README.md

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ cat > 9-print_comb.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int d;

        for (d = '0'; d <= '9'; d++)
        {
                putchar(d);
                if (d != '9')
                {
                        putchar(',');
                        putchar(' ');
                }
        }
        putchar('\n');

        return (0);
}

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ chmod u+x 9-print_comb.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add --chmod=+x 9-print_comb.c
warning: LF will be replaced by CRLF in 0x01-variables_if_else_while/9-print_com
b.c.
The file will have its original line endings in your working directory

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add .

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git commit -m "print comb"
[main 265e880] print comb
 1 file changed, 25 insertions(+)
 create mode 100755 0x01-variables_if_else_while/9-print_comb.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 8 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 597 bytes | 597.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Tekle101/alx-low_level_programming.git
   71a2c7f..265e880  main -> main

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ cat > 8-print_base16.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int d;
        char low;

        for (d = '0'; d <= '9'; d++)
                putchar(d);
        for (low = 'a'; low <= 'f'; low++)
                putchar(low);
                putchar('\n');

        return (0);
}

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ chmod u+x 8-print_base16.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add --chmod=+x 8-print_base16.c
warning: LF will be replaced by CRLF in 0x01-variables_if_else_while/8-print_bas
e16.c.
The file will have its original line endings in your working directory

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add .

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git commit -m "print base"
[main e765485] print base
 1 file changed, 21 insertions(+)
 create mode 100755 0x01-variables_if_else_while/8-print_base16.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 8 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 596 bytes | 596.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Tekle101/alx-low_level_programming.git
   265e880..e765485  main -> main

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ cat > 6-print_numberz.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int d;

        for (d = '0'; d <= '9'; d++)
                putchar(d);
                putchar('\n');

        return (0);
}

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ chmod u+x 6-print_numberz.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add --chmod=+x 6-print_numberz.c
warning: LF will be replaced by CRLF in 0x01-variables_if_else_while/6-print_num
berz.c.
The file will have its original line endings in your working directory

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add .

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git commit -m "print numberz"
[main 7c98ee4] print numberz
 1 file changed, 18 insertions(+)
 create mode 100755 0x01-variables_if_else_while/6-print_numberz.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 8 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 574 bytes | 574.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Tekle101/alx-low_level_programming.git
   e765485..7c98ee4  main -> main

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ ls
0-positive_or_negative.c  6-print_numberz.c  9-print_comb.c
1-last_digit.c            8-print_base16.c   README.md

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ cat > 7-print_tebahpla.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char low;

        for (low = 'z'; low >= 'a'; low--)
                putchar(low);
                putchar('\n');

        return (0);
}

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ chmod u+x 7-print_tebahpla.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add --chmod=+x 7-print_tebahpla.c
warning: LF will be replaced by CRLF in 0x01-variables_if_else_while/7-print_teb
ahpla.c.
The file will have its original line endings in your working directory

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add .

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git commit -m "print tebahpla"
[main 7c0315e] print tebahpla
 1 file changed, 18 insertions(+)
 create mode 100755 0x01-variables_if_else_while/7-print_tebahpla.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 8 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 578 bytes | 578.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Tekle101/alx-low_level_programming.git
   7c98ee4..7c0315e  main -> main

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ cat > 5-print_numbers.c
#include <stdio.h>
/**
 * main - Prints the numbers from 0-9.
(*
 * Return: 0 on success
 */
int main(void)
{
        printf("0123456789\n");
        return (0);
}

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ chmod u+x 5-print_numbers.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add --chmod=+x 5-print_numbers.c
warning: LF will be replaced by CRLF in 0x01-variables_if_else_while/5-print_num
bers.c.
The file will have its original line endings in your working directory

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git add .

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git commit -m "print numbers"
[main 2d126fd] print numbers
 1 file changed, 11 insertions(+)
 create mode 100755 0x01-variables_if_else_while/5-print_numbers.c

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git push
To https://github.com/Tekle101/alx-low_level_programming.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'https://github.com/Tekle101/alx-low_level_pr
ogramming.git'
hint: Updates were rejected because the remote contains work that you do
hint: not have locally. This is usually caused by another repository pushing
hint: to the same ref. You may want to first integrate the remote changes
hint: (e.g., 'git pull ...') before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git pull
remote: Enumerating objects: 17, done.
remote: Counting objects: 100% (17/17), done.
remote: Compressing objects: 100% (12/12), done.
remote: Total 12 (delta 4), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (12/12), 2.75 KiB | 67.00 KiB/s, done.
From https://github.com/Tekle101/alx-low_level_programming
   7c0315e..4fdbac0  main       -> origin/main
Merge made by the 'ort' strategy.
 0x01-variables_if_else_while/6-print_numberz.c  | 21 ++++++++---------
 0x01-variables_if_else_while/7-print_tebahpla.c | 20 ++++++++---------
 0x01-variables_if_else_while/8-print_base16.c   | 30 ++++++++++++++-----------
 3 files changed, 38 insertions(+), 33 deletions(-)

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ git push
Enumerating objects: 11, done.
Counting objects: 100% (11/11), done.
Delta compression using up to 8 threads
Compressing objects: 100% (7/7), done.
Writing objects: 100% (7/7), 1000 bytes | 1000.00 KiB/s, done.
Total 7 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/Tekle101/alx-low_level_programming.git
   4fdbac0..0738403  main -> main

user@DESKTOP-3V34T0I MINGW64 ~/desktop/Tekle101/alx-low_level_programming/0x01-variables_if_else_while (main)
$ cat > 4-print_alphabt.c
#include <stdio.h>
/**
 * main - Prints the alphabet except the letters q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
