// Function to check if a video is coding-related based on keywords in the title
function isCodingRelated(title) {
  const keywords = ["tutorial", "programming", "coding", "javascript", "python", "java", "html", "css"];
  return keywords.some(keyword => title.toLowerCase().includes(keyword));
}

// Function to suggest coding-related videos
function suggestCodingVideos() {
  const videoTitles = document.querySelectorAll('h3.title');
  videoTitles.forEach(titleElement => {
    const title = titleElement.textContent;
    if (isCodingRelated(title)) {
      titleElement.style.border = "2px solid red";
    }
  });
}

// Run the function when the content script is loaded
suggestCodingVideos();
