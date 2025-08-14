🎙 Indian Railway Station Announcement System
📌 Overview

This C program simulates Indian Railway station announcements by taking train details such as number, status, arrival time, and delay information, then playing corresponding pre-recorded audio clips to form complete announcements.
It supports on-time, delayed, arrival, standing, and cancelled train scenarios, making it suitable for simulation, training, or prototype automation systems.

✨ Features

1. Accepts train number, arrival status, time, and delay details.
2. Extracts and stores individual digits of the train number for audio playback.
3. Plays pre-recorded WAV audio clips for numbers and announcement phrases.
4. Modular design for easy integration with real or simulated railway systems.
5. Supports multiple statuses:
   • 🚆 On-time arrival
   • ⏳ Delayed arrival
   • 🅿 Already standing at the platform
   • ❌ Cancelled trains

⚙ Requirements

• 🖥 Windows OS
• 🛠 C Compiler (MinGW, GCC, or MSVC)
• 📦 Windows Multimedia API (winmm.lib)
• 🎵 Pre-recorded .wav audio files for:
  • Digits (0–9, and full train numbers if available)
  • Phrases ("May I have your attention please", "Thank you", etc.)
  • Time announcements

📂 Project Structure

'''
IndianRailwayAnnouncement/
│-- main.c              # Main program file
│-- Audio_Files/        # Folder containing all pre-recorded .wav files
│-- README.md           # Project documentation
'''

🚀 How to Run

1. Clone or download this repository
   git clone https://github.com/yourusername/IndianRailwayAnnouncement.git
   
2. Place all .wav files in the Audio_Files directory with the expected filenames.
3. Compile the program 'gcc main.c -lwinmm -o announcement.exe'

4. Run the program 'announcement.exe'


🎵 Audio File Naming Convention

• Numbers: 0.wav, 1.wav, 2.wav, ..., 9.wav
• Phrases:
  • mayihave.wav → "May I have your attention please"
  • thankyou.wav → "Thank you"
• Custom train numbers: 05061.wav, 12345.wav (if available)
• Time files: HH.wav for hours, MM.wav for minutes

🛠 Example Flow

User Input:
'''
Is the train running on time? (Y/N): N
Enter delayed hour: 1
Enter delayed minute: 20
Is the train arriving or standing? (A/S): A
Enter arriving hour: 14
Enter arriving minute: 45
Enter train number: 05061
'''


Program Output (Audio Sequence):

1. "May I have your attention please"
2. Train number announcement (e.g., "zero five zero six one")
3. Arrival status and delay announcement
4. Arrival time announcement
5. "Thank you"


🔮 Future Improvements
• 🌐 Multi-language support (Hindi, English, regional languages)
• 📡 Integration with live train status APIs
• 🖥 Cross-platform support for Linux and macOS
📡 Integration with live train status APIs

🖥 Cross-platform support for Linux and macOS
