# 🚉 Indian Railway Station Announcement System

A **C program** that simulates Indian Railway station announcements by taking train details, extracting digits, and playing pre-recorded audio clips to form complete announcements — just like you hear at real stations.

---

## 📌 Features
- 🎯 **Realistic Simulation** – Recreates authentic Indian railway announcements.
- 🔢 **Digit Extraction** – Splits train numbers into individual digits for playback.
- ⏱ **Multiple Scenarios** – Supports on-time, delayed, cancelled, arrival, and standing status.
- 🛠 **Modular Design** – Functions are cleanly separated for easy updates.
- 🎵 **Audio Playback** – Plays `.wav` audio clips sequentially to form the announcement.

---

## 🖥 Requirements
- **Windows OS** (uses `PlaySound` from `winmm.lib`)
- **C Compiler** – GCC (MinGW) or MSVC
- **Audio Files** – Pre-recorded `.wav` clips for digits and phrases

---

## 📂 Audio File Naming Convention
| File Name         | Purpose                               |
|-------------------|---------------------------------------|
| `0.wav` - `9.wav` | Digits 0–9                            |
| `arriving.wav`    | Train is arriving                     |
| `standing.wav`    | Train is standing                     |
| `ontime.wav`      | Train is on time                      |
| `delayed.wav`     | Train is delayed                      |
| `cancelled.wav`   | Train is cancelled                    |
| *(Any custom .wav)* | Optional phrases                    |

---

## ⚙️ Installation & Usage

### 1️⃣ Clone the repository
```bash
git clone https://github.com/yourusername/Train-Announcement-System.git
cd Train-Announcement-System
2️⃣ Place Audio Files
Put all .wav files in an Audio_Files folder inside the project directory.

3️⃣ Compile the program
bash
Copy
Edit
gcc main.c -o announcement -lwinmm
4️⃣ Run the program
bash
Copy
Edit
./announcement
🔄 Program Flow Diagram
mermaid
Copy
Edit
flowchart TD
    A[Start] --> B[Input Train Number]
    B --> C[Extract Each Digit]
    C --> D[Input Train Status (On-time, Delayed, Cancelled)]
    D --> E[Input Arrival Type (Arriving / Standing)]
    E --> F[Play Audio Clips in Sequence]
    F --> G[End]
🧩 Example Run
mathematica
Copy
Edit
Enter train number: 05061
Is the train on time? (Y/N): N
Enter status (A = Arriving, S = Standing): A
Enter delay in minutes: 15

[Plays audio: "Train number" → "0" → "5" → "0" → "6" → "1" → "arriving" → "delayed by 15 minutes"]
🚀 Future Improvements
Multi-language audio support (Hindi, English, regional languages)

Configurable audio file paths

Linux/macOS compatibility with alternative audio libraries

GUI version for easier use

