/* ==========================================================================
   1. GLOBAL VARIABLES & RESET
   ========================================================================== */
:root {
  --primary-color: #2563eb;      /* Professional Royal Blue */
  --primary-hover: #1d4ed8;      /* Darker Blue */
  --bg-color: #f1f5f9;           /* Soft Blue-Gray Background */
  --card-bg: #ffffff;            /* White Card Background */
  --text-dark: #0f172a;          /* Dark Slate for Headings */
  --text-muted: #64748b;         /* Muted Slate for Body/Labels */
  --border-color: #e2e8f0;       /* Light Border */
  --table-header-bg: #1e293b;   /* Dark Header Background */
  --table-alt-row: #f8fafc;     /* Alternating Table Row */
  --radius: 10px;                /* Border Radius for Cards & Inputs */
  --shadow: 0 4px 6px -1px rgba(0, 0, 0, 0.1), 0 2px 4px -2px rgba(0, 0, 0, 0.05);
}

* {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

body {
  font-family: 'Inter', sans-serif;
  background-color: var(--bg-color);
  color: var(--text-dark);
  line-height: 1.6;
  padding: 30px 20px;
  max-width: 900px;
  margin: 0 auto;
}

/* Typography Hierarchy */
h1, h2, h3 {
  font-family: 'Poppins', sans-serif;
  color: var(--text-dark);
}

h1 {
  font-size: 1.8rem;
}

h2 {
  font-size: 1.3rem;
  margin-bottom: 16px;
  border-bottom: 2px solid var(--border-color);
  padding-bottom: 8px;
}

.subtitle {
  color: var(--text-muted);
  font-size: 0.9rem;
}

/* ==========================================================================
   2. BOX MODEL: CARD LAYOUTS
   ========================================================================== */
.card {
  background-color: var(--card-bg);
  border-radius: var(--radius);
  box-shadow: var(--shadow);
  padding: 24px;
  margin-bottom: 24px;
  border: 1px solid var(--border-color);
}

.main-header {
  display: flex;
  align-items: center;
  gap: 16px;
}

.logo {
  border-radius: 8px;
}

/* ==========================================================================
   3. DETAILS / INSTRUCTIONS SECTION
   ========================================================================== */
.instructions-section details {
  background-color: #e0f2fe;
  border: 1px solid #bae6fd;
  border-radius: var(--radius);
  padding: 12px 16px;
  margin-bottom: 24px;
  cursor: pointer;
  color: #0369a1;
}

.instructions-section summary {
  font-weight: 600;
  font-family: 'Poppins', sans-serif;
}

.instructions-section p {
  margin-top: 8px;
  font-size: 0.9rem;
  color: #0c4a6e;
}

/* ==========================================================================
   4. FORM STYLING
   ========================================================================== */
.add-expense-section form {
  display: flex;
  flex-direction: column;
  gap: 16px;
}

.form-group {
  display: flex;
  flex-direction: column;
  gap: 6px;
}

label {
  font-size: 0.875rem;
  font-weight: 500;
  color: var(--text-muted);
}

input, select {
  font-family: 'Inter', sans-serif;
  padding: 10px 14px;
  border: 1px solid var(--border-color);
  border-radius: 6px;
  font-size: 0.95rem;
  outline: none;
  transition: border-color 0.2s ease, box-shadow 0.2s ease;
}

input:focus, select:focus {
  border-color: var(--primary-color);
  box-shadow: 0 0 0 3px rgba(37, 99, 235, 0.15);
}

button {
  font-family: 'Poppins', sans-serif;
  font-weight: 600;
  background-color: var(--primary-color);
  color: #ffffff;
  padding: 12px 20px;
  border: none;
  border-radius: 6px;
  cursor: pointer;
  font-size: 1rem;
  transition: background-color 0.2s ease;
  margin-top: 8px;
}

button:hover {
  background-color: var(--primary-hover);
}

/* ==========================================================================
   5. TABLE STYLING
   ========================================================================== */
.table-container {
  overflow-x: auto;
}

table {
  width: 100%;
  border-collapse: collapse;
  margin-top: 8px;
  border: 1px solid var(--border-color);
}

th, td {
  padding: 12px 16px;
  text-align: left;
  border-bottom: 1px solid var(--border-color);
}

th {
  background-color: var(--table-header-bg);
  color: #ffffff;
  font-family: 'Poppins', sans-serif;
  font-weight: 600;
  font-size: 0.9rem;
  text-transform: uppercase;
  letter-spacing: 0.05em;
}

td {
  font-size: 0.95rem;
  color: var(--text-dark);
}

tr:nth-child(even) {
  background-color: var(--table-alt-row);
}

tr:hover {
  background-color: #f1f5f9;
}