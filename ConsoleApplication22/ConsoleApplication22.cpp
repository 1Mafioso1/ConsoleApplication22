#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// Завдання 1
//void saveWords() {
//    FILE* f = nullptr;
//    FILE* out = nullptr;
//
//    fopen_s(&f, "input.txt", "r");
//    fopen_s(&out, "output1.txt", "w");
//
//    if (!f || !out) {
//        cout << "Failed to open file.\n";
//        if (f) fclose(f);
//        if (out) fclose(out);
//        return;
//    }
//
//    char word[256];
//
//    while (fscanf_s(f, "%255s", word, (unsigned)sizeof(word)) == 1) {
//        if (strlen(word) >= 7) {
//            fputs(word, out);
//            fputs(" ", out);
//            cout << word << " ";
//        }
//    }
//
//    cout << "\n\n";
//    fclose(f);
//    fclose(out);
//}

// Завдання 2
//void copyLines() {
//    FILE* f = nullptr;
//    FILE* out = nullptr;
//
//    fopen_s(&f, "input.txt", "r");
//    fopen_s(&out, "output2.txt", "w");
//
//    if (!f || !out) {
//        cout << "Failed to open file.\n";
//        if (f) fclose(f);
//        if (out) fclose(out);
//        return;
//    }
//
//    char buffer[256];
//
//    while (fgets(buffer, 256, f)) {
//        fputs(buffer, out);
//        cout << buffer;
//    }
//
//    cout << "\n\n";
//    fclose(f);
//    fclose(out);
//}

// Завдання 3
//void reverseLines() {
//    FILE* f = nullptr;
//    FILE* out = nullptr;
//
//    fopen_s(&f, "input.txt", "r");
//    fopen_s(&out, "output3.txt", "w");
//
//    if (!f || !out) {
//        cout << "Failed to open file.\n";
//        if (f) fclose(f);
//        if (out) fclose(out);
//        return;
//    }
//
//    char lines[100][256];
//    int count = 0;
//
//    while (count < 100 && fgets(lines[count], 256, f)) {
//        count++;
//    }
//
//    for (int i = count - 1; i >= 0; i--) {
//        int len = strlen(lines[i]);
//
//        while (len > 0 &&
//            (lines[i][len - 1] == '\n' ||
//                lines[i][len - 1] == '\r')) {
//            lines[i][--len] = '\0';
//        }
//
//        fputs(lines[i], out);
//        fputs("\n", out);
//        cout << lines[i] << '\n';
//    }
//
//    cout << '\n';
//    fclose(f);
//    fclose(out);
//}

// Завдання 4
//void addDashes() {
//    FILE* f = nullptr;
//    FILE* out = nullptr;
//
//    fopen_s(&f, "input.txt", "r");
//    fopen_s(&out, "output4.txt", "w");
//
//    if (!f || !out) {
//        cout << "Failed to open file.\n";
//        if (f) fclose(f);
//        if (out) fclose(out);
//        return;
//    }
//
//    char lines[100][256];
//    int count = 0;
//    int pos = -1;
//
//    while (count < 100 && fgets(lines[count], 256, f)) {
//        int len = strlen(lines[count]);
//
//        while (len > 0 &&
//            (lines[count][len - 1] == '\n' ||
//                lines[count][len - 1] == '\r')) {
//            lines[count][--len] = '\0';
//        }
//
//        if (strchr(lines[count], ' ') == nullptr) {
//            pos = count;
//        }
//
//        count++;
//    }
//
//    for (int i = 0; i < count; i++) {
//        fputs(lines[i], out);
//        fputs("\n", out);
//        cout << lines[i] << '\n';
//
//        if (i == pos) {
//            fputs("------------\n", out);
//            cout << "------------\n";
//        }
//    }
//
//    if (pos == -1) {
//        fputs("------------\n", out);
//        cout << "------------\n";
//    }
//
//    fclose(f);
//    fclose(out);
//}

int main() {
	//FILE* f = nullptr;

	//fopen_s(&f, "input.txt", "r");

	//if (!f) {
	//    fopen_s(&f, "input.txt", "w");

	//    if (!f) {
	//        cout << "Failed to open file.\n";
	//        return 1;
	//    }

	//    fputs("Hello world\n", f);
	//    fputs("Programming language\n", f);
	//    fputs("Cplusplus\n", f);
	//    fputs("Test example\n", f);
	//    fputs("Computer science\n", f);

	//    fclose(f);
	//}
	//else {
	//    fclose(f);
	//}

	//saveWords();
	//copyLines();
	//reverseLines();
	//addDashes();

	//return 0;
}