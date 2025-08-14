🎙 Indian Train Station Announcement System
📌 Overview

This C program simulates Indian Railway station announcements by taking train details such as number, status, arrival time, and delay information, then playing corresponding pre-recorded audio clips to form complete announcements.<br>
It supports on-time, delayed, arrival, standing, and cancelled train scenarios, making it suitable for simulation, training, or prototype automation systems.

✨ Features

1. Accepts train number, arrival status, time, and delay details.<br>
2. Extracts and stores individual digits of the train number for audio playback.<br>
3. Plays pre-recorded WAV audio clips for numbers and announcement phrases.<br>
4. Modular design for easy integration with real or simulated railway systems.<br>
5. Supports multiple statuses:<br>
   • 🚆 On-time arrival<br>
   • ⏳ Delayed arrival<br>
   • 🅿 Already standing at the platform<br>
   • ❌ Cancelled trains<br>

⚙ Requirements

• 🖥 Windows OS<br>
• 🛠 C Compiler (MinGW, GCC, or MSVC)<br>
• 📦 Windows Multimedia API (winmm.lib)<br>
• 🎵 Pre-recorded .wav audio files for:<br>
  • Digits (0–9, and full train numbers if available)<br>
  • Phrases ("May I have your attention please", "Thank you", etc.)<br>
  • Time announcements<br>

📂 Project Structure

```
IndianRailwayAnnouncement/
│-- main.c              # Main program file
│-- Audio_Files/        # Folder containing all pre-recorded .wav files
│-- README.md           # Project documentation
```

🚀 How to Run

1. Clone or download this repository
   `git clone https://github.com/yourusername/IndianRailwayAnnouncement.git`
   
2. Place all .wav files in the Audio_Files directory with the expected filenames.<br>
3. Compile the program `gcc main.c -lwinmm -o announcement.exe`<br>
4. Run the program `announcement.exe`<br>


🎵 Audio File Naming Convention

• Numbers: 0.wav, 1.wav, 2.wav, ..., 9.wav<br>
• Phrases:<br>
  • mayihave.wav → "May I have your attention please"<br>
  • thankyou.wav → "Thank you"<br>
• Custom train numbers: 05061.wav, 12345.wav (if available)<br>
• Time files: HH.wav for hours, MM.wav for minutes<br>

🛠 Example Flow

User Input:
```
Is the train running on time? (Y/N): N
Enter delayed hour: 1
Enter delayed minute: 20
Is the train arriving or standing? (A/S): A
Enter arriving hour: 14
Enter arriving minute: 45
Enter train number: 05061
```


Program Output (Audio Sequence):

1. "May I have your attention please"<br>
2. Train number announcement (e.g., "zero five zero six one")<br>
3. Arrival status and delay announcement<br>
4. Arrival time announcement<br>
5. "Thank you"<br>


🔮 Future Improvements<br>
• 🌐 Multi-language support (Hindi, English, regional languages)<br>
• 📡 Integration with live train status APIs<br>
• 🖥 Cross-platform support for Linux and macOS<br>
