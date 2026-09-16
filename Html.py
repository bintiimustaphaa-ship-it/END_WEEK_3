<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>SpendWise - Budget Tracker</title>
  <link rel="stylesheet" href="style.css">
</head>
<body>

  <!-- Header with Multimedia Logo -->
  <header class="main-header">
    <img src="https://via.placeholder.com/50" alt="SpendWise Logo" width="50" class="logo">
    <h1>SpendWise Budget Tracker</h1>
  </header>

  <!-- Interactive Element: Details / Summary -->
  <section class="instructions-section">
    <details>
      <summary>How to use this tracker</summary>
      <p>Use the form below to add new expenses to your tracker. Fill in the name, amount, category, and date, then click "Add Expense" to save it.</p>
    </details>
  </section>

  <!-- Upgraded Form Section -->
  <section class="add-expense-section">
    <h2>Add New Expense</h2>
    <form id="expense-form">
      <div class="form-group">
        <label for="expense-name">Expense Name:</label>
        <input type="text" id="expense-name" name="expense-name" placeholder="e.g., Groceries" required>
      </div>

      <div class="form-group">
        <label for="expense-amount">Amount ($):</label>
        <input type="number" id="expense-amount" name="expense-amount" placeholder="0.00" step="0.01" required>
      </div>

      <div class="form-group">
        <label for="expense-category">Category:</label>
        <select id="expense-category" name="expense-category" required>
          <option value="" disabled selected>Select Category</option>
          <option value="Food">Food</option>
          <option value="Transport">Transport</option>
          <option value="Rent">Rent</option>
          <option value="Entertainment">Entertainment</option>
          <option value="Other">Other</option>
        </select>
      </div>

      <div class="form-group">
        <label for="expense-date">Date:</label>
        <input type="date" id="expense-date" name="expense-date" required>
      </div>

      <button type="button" id="add-btn">Add Expense</button>
    </form>
  </section>

  <!-- Expense Table Section -->
  <section class="expenses-section">
    <h2>Expense Log</h2>
    <table>
      <thead>
        <tr>
          <th>Name</th>
          <th>Amount</th>
          <th>Category</th>
          <th>Date</th>
        </tr>
      </thead>
      <tbody>
        <tr>
          <td>Groceries</td>
          <td>$150.00</td>
          <td>Food</td>
          <td>2026-09-10</td>
        </tr>
        <tr>
          <td>Bus Pass</td>
          <td>$45.00</td>
          <td>Transport</td>
          <td>2026-09-11</td>
        </tr>
        <tr>
          <td>Monthly Rent</td>
          <td>$1,200.00</td>
          <td>Rent</td>
          <td>2026-09-01</td>
        </tr>
        <tr>
          <td>Movie Ticket</td>
          <td>$15.00</td>
          <td>Entertainment</td>
          <td>2026-09-12</td>
        </tr>
        <tr>
          <td>Internet Bill</td>
          <td>$60.00</td>
          <td>Other</td>
          <td>2026-09-14</td>
        </tr>
      </tbody>
    </table>
  </section>

  <!-- Multimedia Content: Embedded YouTube Video -->
  <section class="media-section">
    <h2>Budgeting Tips</h2>
    <iframe 
      width="560" 
      height="315" 
      src="https://www.youtube.com/embed/sVKQn2IftKc" 
      title="Budgeting Tips Video" 
      frameborder="0" 
      allowfullscreen>
    </iframe>
  </section>

</body>
</html>