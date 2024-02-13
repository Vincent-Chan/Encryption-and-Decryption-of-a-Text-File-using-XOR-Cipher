# Encryption and Decryption of a Text File using XOR Cipher

This is a C++ mini project to demonstrate the encrytpion and decryption of a text file using XOR cipher.

This project utilizes one-key private cipher.

---

## How to run

**Compile the source code**

1. Download `encdec.cpp`, `encdec.h`, `main.cpp`.
2. Upload all the above cpp files and header file to a blank GitHub Codespaces environmrnt.
3. After uploading all the files to GitHub Codespaces, create a text file called `file.txt`.
4. Type anything you would like to encrypt inside `file.txt`.
5. Open the terminal of GitHub Codespaces environment, type `g++ -o main *.cpp` and press enter key.

**Encryption**

6. Type `./main` in the terminal.
7. Enter 1 to encrypt `file.txt` and also enter your encryption key (a character).
8. Check `encrypt.txt` to see the encrypted content.

**Decryption**

9. Type `./main` in the terminal.
10. Enter 2 to decrypt `encrypt.txt` and also enter your decryption key (a character).
11. Check `decrypt.txt` to see the decrypted content.

---

***Sample output***

<br>

**Encryption key: K**

**Decryption key: K**

<br>

Original content (file.txt):

```
《六韜·龍韜·陰書》

武王問太公曰：「引兵深入諸侯之地，主將欲合兵，行無窮之變，圖不測之利。其事煩多，符不能明；相去遼遠，言語不通。為之奈何？」

太公曰：「諸有陰事大慮，當用書，不用符。主以書遺將，將以書問主。書皆一合而再離，三發而一知。再離者，分書為三部。三發而一知者，言三人，人操一分，相參而不相知情也。此謂陰書。敵雖聖智，莫之能識。」

武王曰：「善哉。」

Cryptography, or cryptology (from Ancient Greek: κρυπτός, romanized: kryptós "hidden, secret"; 
and γράφειν graphein, "to write", or -λογία -logia, "study", respectively), 
is the practice and study of techniques for secure communication in the presence of adversarial behavior.
More generally, cryptography is about constructing and analyzing protocols that 
prevent third parties or the public from reading private messages.
Modern cryptography exists at the intersection of the disciplines of mathematics, computer science, 
information security, electrical engineering, digital signal processing, physics, and others. 
Core concepts related to information security (data confidentiality, data integrity, authentication, 
and non-repudiation) are also central to cryptography. 
Practical applications of cryptography include electronic commerce, chip-based payment cards, 
digital currencies, computer passwords, and military communications.
```


Encrypted content (encrypt.txt):
```
�������׉���Ƣ�׉���������AA��������Į��������Ѩ�Ǯ�ޮ�������������������ǯ���̭����î����ǣ�Ǭ�����������Ǯ�ݯ�ƭ��������ɮ���������Ѥ�Ǭ����ƣ����Ť�Ь����������ǣ�ˣ�կ�Ƣ�Ѩ�ɬ������ï�ޤ�Ԩ��AA���������Ѩ�ǣ���¢�����������Ǭ��������ǯ�Ƭ������ɯ���������̤�Ǯ�̯�����į���ɭ���ͯ�ˮ�ã�Ǯ�Ƣ���ǯ�¬����ǯ�ˬ���ɮ�Ƣ���Τ�Ǯ�ͭ�����¢���ɯ�¬����ǯ�ˬ���Τ�ǣ�˯�¯���ǯ���Ư�ˮ�ͤ�Ǭ���ȣ�ǯ�Ƭ�����ί�Ԩ�ɭ���ɢ������ɭ����ݣ�ݭ���ǣ���������Ө�ɨ��AA�����������Ѩ�Ǯ�Ϯ�¨�ɨ��AA92;?$,9*;#2gk$9k(92;?$'$,2kc-9$&k
%(".%?k9.. qk��ʄ΄˄τǄ�gk9$&*%"1./qk 92;?��8ki#"//.%gk8.(9.?ipkA*%/k���ʅ�ͅ����k,9*;#."%gki?$k<9"?.igk$9kf��������kf'$,"*gki8?>/2igk9.8;.(?"=.'2bgkA"8k?#.k;9*(?"(.k*%/k8?>/2k$-k?.(#%":>.8k-$9k8.(>9.k($&&>%"(*?"$%k"%k?#.k;9.8.%(.k$-k*/=.98*9"*'k).#*="$9eA$9.k,.%.9*''2gk(92;?$,9*;#2k"8k*)$>?k($%8?9>(?"%,k*%/k*%*'21"%,k;9$?$($'8k?#*?kA;9.=.%?k?#"9/k;*9?".8k$9k?#.k;>)'"(k-9$&k9.*/"%,k;9"=*?.k&.88*,.8eA$/.9%k(92;?$,9*;#2k.3"8?8k*?k?#.k"%?.98.(?"$%k$-k?#.k/"8(";'"%.8k$-k&*?#.&*?"(8gk($&;>?.9k8(".%(.gkA"%-$9&*?"$%k8.(>9"?2gk.'.(?9"(*'k.%,"%..9"%,gk/","?*'k8",%*'k;9$(.88"%,gk;#28"(8gk*%/k$?#.98ekA$9.k($%(.;?8k9.'*?./k?$k"%-$9&*?"$%k8.(>9"?2kc/*?*k($%-"/.%?"*'"?2gk/*?*k"%?.,9"?2gk*>?#.%?"(*?"$%gkA*%/k%$%f9.;>/"*?"$%bk*9.k*'8$k(.%?9*'k?$k(92;?$,9*;#2ekA9*(?"(*'k*;;'"(*?"$%8k$-k(92;?$,9*;#2k"%('>/.k.'.(?9$%"(k($&&.9(.gk(#";f)*8./k;*2&.%?k(*9/8gkA/","?*'k(>99.%(".8gk($&;>?.9k;*88<$9/8gk*%/k&"'"?*92k($&&>%"(*?"$%8e
```

Decrypted content (decrypt.txt):
```
《六韜·龍韜·陰書》

武王問太公曰：「引兵深入諸侯之地，主將欲合兵，行無窮之變，圖不測之利。其事煩多，符不能明；相去遼遠，言語不通。為之奈何？」

太公曰：「諸有陰事大慮，當用書，不用符。主以書遺將，將以書問主。書皆一合而再離，三發而一知。再離者，分書為三部。三發而一知者，言三人，人操一分，相參而不相知情也。此謂陰書。敵雖聖智，莫之能識。」

武王曰：「善哉。」

Cryptography, or cryptology (from Ancient Greek: κρυπτός, romanized: kryptós "hidden, secret"; 
and γράφειν graphein, "to write", or -λογία -logia, "study", respectively), 
is the practice and study of techniques for secure communication in the presence of adversarial behavior.
More generally, cryptography is about constructing and analyzing protocols that 
prevent third parties or the public from reading private messages.
Modern cryptography exists at the intersection of the disciplines of mathematics, computer science, 
information security, electrical engineering, digital signal processing, physics, and others. 
Core concepts related to information security (data confidentiality, data integrity, authentication, 
and non-repudiation) are also central to cryptography. 
Practical applications of cryptography include electronic commerce, chip-based payment cards, 
digital currencies, computer passwords, and military communications.
```