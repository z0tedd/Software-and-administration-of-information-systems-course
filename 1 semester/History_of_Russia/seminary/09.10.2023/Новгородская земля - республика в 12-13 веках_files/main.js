$(document).ready(function() {


	//  header top menu
	$('.burger_button').click(function() {
		$('.menu_toggle').slideToggle("fast");
		$('.burger_button').toggleClass('open');
		$('body').toggleClass('stop-scrolling');
		return false;
	});
	$('body').on('click', '.menu_toggle a', function(event) {
		$('.menu_toggle').slideUp();
		$('.burger_button').removeClass('open');
		$('body').toggleClass('stop-scrolling');
	});


});


