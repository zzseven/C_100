#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum character { a=1, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z };

void fun(char *tt,int pp[]);

void main()
{
    printf("第4题\n\n  请编写一个函数void fun(char *tt,int pp[]),统计在tt字符中'a'到'z'26各字母各自出现的次数，并依次放在pp所指的数组中。\n\n");

    char ss[100];
    int pp[27], ii;

    for(ii=0; ii<27; ii++)
    {
        pp[ii]=0;
    }

    printf("Please input a String: ");
    gets(ss);        //遇到回车读取结束
    //scanf("%s", sss); //遇到空格读取结束

    fun(ss, pp);

    printf("\nrestlt:\n");
    for(ii=1; ii<27; ii++)
    {
        printf("%c : %d\n", 'a'+ii-1, pp[ii]);
    }

}

void fun(char *tt,int pp[])
{
    int kk;
    //printf("  %d  ", strlen(tt) );
    for(kk=0; kk<strlen(tt); kk++)
    {
        switch(tt[kk])
        {
            case 'a': pp[a]++; break;
            case 'b': pp[b]++; break;
            case 'c': pp[c]++; break;
            case 'd': pp[d]++; break;
            case 'e': pp[e]++; break;
            case 'f': pp[f]++; break;
            case 'g': pp[g]++; break;
            case 'h': pp[h]++; break;
            case 'i': pp[i]++; break;
            case 'j': pp[j]++; break;
            case 'k': pp[k]++; break;
            case 'l': pp[l]++; break;
            case 'm': pp[m]++; break;
            case 'n': pp[n]++; break;
            case 'o': pp[o]++; break;
            case 'p': pp[p]++; break;
            case 'q': pp[q]++; break;
            case 'r': pp[r]++; break;
            case 's': pp[s]++; break;
            case 't': pp[t]++; break;
            case 'u': pp[u]++; break;
            case 'v': pp[v]++; break;
            case 'w': pp[w]++; break;
            case 'x': pp[x]++; break;
            case 'y': pp[y]++; break;
            case 'z': pp[z]++; break;

            case 'A': pp[a]++; break;
            case 'B': pp[b]++; break;
            case 'C': pp[c]++; break;
            case 'D': pp[d]++; break;
            case 'E': pp[e]++; break;
            case 'F': pp[f]++; break;
            case 'G': pp[g]++; break;
            case 'H': pp[h]++; break;
            case 'I': pp[i]++; break;
            case 'J': pp[j]++; break;
            case 'K': pp[k]++; break;
            case 'L': pp[l]++; break;
            case 'M': pp[m]++; break;
            case 'N': pp[n]++; break;
            case 'O': pp[o]++; break;
            case 'P': pp[p]++; break;
            case 'Q': pp[q]++; break;
            case 'R': pp[r]++; break;
            case 'S': pp[s]++; break;
            case 'T': pp[t]++; break;
            case 'U': pp[u]++; break;
            case 'V': pp[v]++; break;
            case 'W': pp[w]++; break;
            case 'X': pp[x]++; break;
            case 'Y': pp[y]++; break;
            case 'Z': pp[z]++; break;

            default:;
        }
    }
}

