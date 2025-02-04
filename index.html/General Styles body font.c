/* General Styles */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
}

h1, h2 {
    color: #333;
}

/* Background Image */
body {
    background-image: url('/home/admin1/Music/background.jpg');
    background-size: cover;
    background-position: center;
}

/* Login/Registration Container */
.login-container {
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    background-color: rgba(255, 255, 255, 0.8); /* Transparent overlay */
}

.login-form {
    text-align: center;
    width: 300px;
    padding: 30px;
    background-color: white;
    border-radius: 8px;
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.1);
}

/* Sidebar Styles */
.container {
    display: flex;
}

.sidebar {
    width: 250px;
    background-color: #2C3E50;
    color: white;
    padding: 20px;
}

.sidebar h2 {
    margin-bottom: 20px;
}

.sidebar ul {
    list-style-type: none;
    padding: 0;
}

.sidebar ul li {
    margin: 10px 0;
    font-size: 18px;
    cursor: pointer;
}

.sidebar ul li a {
    color: white;
    text-decoration: none;
}

.sidebar ul li:hover {
    background-color: #34495E;
    padding-left: 10px;
}

/* Main Content Styles */
.main-content {
    flex: 1;
    padding: 30px;
    background-color: white;
}

.items {
    display: flex;
    gap: 20px;
}

.item {
    background-color: #f9f9f9;
    padding: 15px;
    border-radius: 8px;
    box-shadow: 0px 4px 10px rgba(0, 0, 0, 0.1);
    text-align: center;
    width: 200px;
}

.item img {
    width: 100%;
    height: 150px;
    object-fit: cover;
    border-radius: 8px;
}

button {
    background-color: #3498db;
    color: white;
    border: none;
    padding: 10px;
    border-radius: 5px;
    cursor: pointer;
}

button:hover {
    background-color: #2980b9;
}

