# Tonalyze-model
# Tonalyze — Class Model (CMSC 5613 OOSE)

C++ class implementation exported from the Visual Paradigm class diagram for **Tonalyze**, a music dictation app that converts an uploaded audio recording into editable sheet music, lyrics, and tonal analysis.

## Background

Tonalyze lets a musician, composer, or teacher upload an MP3/WAV file and get back a breakdown of every instrument, note, lyric line, and tonal detail in the track, which can then be corrected and exported as PDF or MIDI.

## Classes

Exported directly from the Visual Paradigm class diagram, one `.h`/`.cpp` pair per class:

| Class | Responsibility |
|---|---|
| `User` | Account, login, theme preference |
| `UploadQuota` | Enforces the rolling upload-time limit per user |
| `AudioFile` | Uploaded audio metadata and validation |
| `DetectionJob` | Tracks an audio file through the detection pipeline |
| `DetectionResult` | Aggregates instruments, notes, lyrics, tone, and corrections for one job |
| `Instrument` | A detected instrument/voice and its confidence |
| `Note` | A single detected note |
| `LyricLine` | A detected line of sung lyrics |
| `ToneProfile` | Timbre/brightness/warmth summary for a result |
| `Correction` | A user-made fix to a detected element |
| `ExportFile` | A generated PDF/MIDI export |
| `Feedback` | User-submitted accuracy feedback |
| `PermissionRequest` | Tracks a requested device permission (e.g. microphone) |

## Linter

This repo runs [`clang-tidy`](https://clang.llvm.org/extra/clang-tidy/) on every push and pull request via GitHub Actions (`.github/workflows/lint.yml`), configured by `.clang-tidy` at the repo root.

Run it locally:
```bash
clang-tidy *.cpp -- -std=c++17 -I.
```

## Known issues

This is a direct UML export and hasn't been hand-cleaned yet:
- Several classes use non-C++ types (`String`, `boolean`, `Date`/`DateTime`) left over from the modeling tool, which don't compile until replaced with `std::string`, `bool`, etc.
- Some association back-reference fields are declared twice in their headers.
- See open pull requests for in-progress fixes — each PR is scoped to one issue at a time.
