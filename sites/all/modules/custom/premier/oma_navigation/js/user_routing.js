Drupal.behaviors.userRouting = {
  attach: function (context, settings) {
    var submit = jQuery('a.btn-primary')[0];

    var startButton = jQuery("<a>", { class: 'btn btn-primary disabled', style: 'float:right;', text: 'Let\'s Get Started!' });
        startButton.appendTo('.field-name-body');

    // Handle course selection styling
    jQuery('div.application-route', context).click(function () {
      jQuery('div.application-route').each(function() {
        jQuery(this).removeClass('selected');
      })
      jQuery(this).addClass('selected');

      // Update href on click
      if(jQuery('h3', this)[0].innerHTML == "Continuum of Care") {
        startButton[0].href = '/application/continuum-of-care/create';
        startButton.removeClass('disabled');
      } else {
        startButton[0].href = '/coming-soon';
        startButton.addClass('disabled');
      }

    });

  }
};