function startDrawing(){
	console.log("Start drawing!");

	function setup() {
		createCanvas(windowWidth,windowHeight);
	}

	function draw() {
		if (mouseIsPressed) {
  		noStroke();
    	fill = fill(0);
    	ellipse(mouseX, mouseY, 10, 10);
 		}
	}
}

document.addEventListener('DOMContentLoaded', function(){
	$(document).ready(function(){
		$("#button").click(function(){
			$("#button").hide();
			startDrawing();
    	});
	});
});