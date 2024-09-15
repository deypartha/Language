function showBio(member) {
  document.getElementById(`${member}-bio`).style.display = 'block';
  document.querySelector(`.${member} img`).style.transform = 'scale(1.1)';
}

function hideBio(member) {
  document.getElementById(`${member}-bio`).style.display = 'none';
  document.querySelector(`.${member} img`).style.transform = 'scale(1)';
}

  