document.getElementById('suggest').addEventListener('click', () => {
  chrome.tabs.query({active: true, currentWindow: true}, (tabs) => {
    chrome.scripting.executeScript({
      target: {tabId: tabs[0].id},
      function: suggestCodingVideos
    });
  });
});

// Function to suggest coding-related videos (same as in content.js)
function suggestCodingVideos() {
  const videoTitles = document.querySelectorAll('h3.title');
  videoTitles.forEach(titleElement => {
    const title = titleElement.textContent;
    if (isCodingRelated(title)) {
      titleElement.style.border = "2px solid red";
    }
  });
}

function isCodingRelated(title) {
  const keywords = ["tutorial", "programming", "coding", "javascript", "python", "java", "html", "css"];
  return keywords.some(keyword => title.toLowerCase().includes(keyword));
}
