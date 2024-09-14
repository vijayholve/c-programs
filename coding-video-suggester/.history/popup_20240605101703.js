document.getElementById("suggestButton").addEventListener("click", () => {
  chrome.tabs.query({ active: true, currentWindow: true }, (tabs) => {
    chrome.scripting.executeScript({
      target: { tabId: tabs[0].id },
      function: suggestCodingVideos
    });
  });
});

function suggestCodingVideos() {
  const keywords = ["tutorial", "programming", "coding", "javascript", "python", "java", "html", "css", "development", "react", "node"];
  
  function isCodingRelated(title) {
    return keywords.some(keyword => title.toLowerCase().includes(keyword));
  }

  function highlightCodingVideos() {
    const videoTitles = document.querySelectorAll('h3.title, a#video-title');
    videoTitles.forEach(titleElement => {
      const title = titleElement.textContent || titleElement.innerText;
      if (isCodingRelated(title)) {
        titleElement.style.border = "2px solid red";
      }
    });
  }

  highlightCodingVideos();

  const observer = new MutationObserver((mutations) => {
    mutations.forEach((mutation) => {
      if (mutation.addedNodes) {
        highlightCodingVideos();
      }
    });
  });

  const config = { childList: true, subtree: true };
  const targetNode = document.getElementById('content');
  if (targetNode) {
    observer.observe(targetNode, config);
  }
}
