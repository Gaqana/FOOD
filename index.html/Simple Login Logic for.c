// Simple Login Logic (for demo purposes)
document.getElementById('loginForm').addEventListener('submit', function(e) {
    e.preventDefault();
    // Here we can add logic to check user credentials (for now, just redirecting)
    window.location.href = 'order.html';
});

// Handle Registration
document.getElementById('registerForm').addEventListener('submit', function(e) {
    e.preventDefault();
    // Registration logic (e.g., saving user details)
    alert('Registration successful');
    window.location.href = 'login.html';
});

// Order System
let orderList = [];

function addOrder(item, price) {
    orderList.push({ item, price });
    displayOrder();
}

function displayOrder() {
    let orderHtml = '';
    orderList.forEach(order => {
        orderHtml += `<p>${order.item} - $${order.price}</p>`;
    });
    document.getElementById('orderList').innerHTML = orderHtml;
}

function checkout() {
    let total = orderList.reduce((sum, order) => sum + order.price, 0);
    alert('Your total is: $' + total);
}

