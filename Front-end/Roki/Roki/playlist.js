document.addEventListener('DOMContentLoaded', function () {
    const audioPlayer = document.getElementById('audioPlayer');
    const playlist = document.getElementById('playlist');

    playlist.addEventListener('click', function (event) {
        const target = event.target;
        if (target.tagName === 'LI') {
            const audioSource = target.getAttribute('data-src');
            audioPlayer.src = audioSource;
            audioPlayer.play();
        }
    });

    audioPlayer.addEventListener('ended', function () {
        // You can add additional logic here, such as playing the next song in the playlist.
        console.log('Song ended');
    });
});