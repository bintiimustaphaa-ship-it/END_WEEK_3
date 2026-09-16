# SpendWise - Budget Tracker (Week 3: Visual Identity & Styling)

SpendWise is a personal finance web application built for the Web Development Fundamentals course. In Week 3, the project was updated to enhance its visual identity through a modern color scheme, custom Google Fonts, card-based layout structure using the CSS Box Model, and responsive table and form styling.

## Design Improvements & Technical Features

### 1. Intentional Color Palette
* **Primary Theme:** Royal Blue (`#2563eb`) for action buttons, key highlights, and active focus states.
* **Background & Cards:** Soft Slate Blue-Gray (`#f1f5f9`) body background paired with crisp white (`#ffffff`) card containers to reduce cognitive fatigue.
* **Text & Data:** Deep Slate (`#0f172a`) for high-contrast headings and Dark Slate Gray (`#1e293b`) for structured table headers.

### 2. Custom Typography
* **Headings Font:** `Poppins` (Google Font) – Applied across main titles (`<h1>`, `<h2>`), buttons, and table headers to establish a clear visual hierarchy.
* **Body Font:** `Inter` (Google Font) – Applied across general paragraph copy, form labels, inputs, and tabular text for clear readability.

### 3. CSS Box Model Implementation
* **Card UI Architecture:** The main header, expense input form, and expense table sections are wrapped in distinct visual "cards" using `margin`, `padding`, `border-radius: 10px`, and custom box shadows.
* **Cell & Form Spacing:** Input fields and table cells feature explicit `padding` to prevent crowded content and improve readability.

### 4. Table & Form Styling
* Structured `<table>` formatting with uppercase table headers, clean subtle row dividers (`#e2e8f0`), alternating background row colors (`tr:nth-child(even)`), and interactive row highlight states (`tr:hover`).
* Inputs feature styled focus outlines (`input:focus`) to highlight active interactive elements for accessible user input.

## How to View
1. Clone or download this repository.
2. Open `index.html` directly in any standard web browser.