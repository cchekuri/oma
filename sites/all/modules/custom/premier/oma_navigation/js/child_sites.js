Drupal.behaviors.childSites = {
  attach: function (context, settings) {

    // Break the url into an array
    var vars = [], hash;
    var hashes = window.location.href.slice(window.location.href.indexOf('?') + 1).split('/');
    for(var i = 0; i < hashes.length; i++)
    {
        hash = hashes[i].split('=');
        vars.push(hash[0]);
    }

    // http://mydomain.example.com/application/route/additional-sites/container-nid
    // 0     12                    3           4     5                6
    var route = vars[4];
    var container_nid = vars[6];


    // Hide skip note
    jQuery('.additional-sites-skip', context).css('display', 'none');
    var contactprofile = jQuery('input[name=next_link]', context).val();
    var exhibitd = '/application/' + route + '/exhibit-d/' + container_nid;

    // Question 1

    // Handle Q1 click event
    jQuery('input[name=additional_locations]', context).click(function() {
      switch(jQuery('input[name=additional_locations]:checked', context).val()) {
        case '0':
          // Show skip note
          jQuery('.additional-sites-skip', context).css('display', 'block');
          jQuery('input[name=next_link]', context).val(contactprofile);
          break;
        default: 
          // Hide skip note
          jQuery('.additional-sites-skip', context).css('display', 'none');
          jQuery('input[name=next_link]', context).val(exhibitd);
          break;
      }
    });

    // Handle Q1 in case where php sets a default value - i.e. the member has already been in this section and is revisiting
    switch(jQuery('input[name=additional_locations]:checked', context).val()) {
      case '0':
        // Show skip note
        jQuery('.additional-sites-skip', context).css('display', 'block');
        jQuery('input[name=next_link]', context).val(contactprofile);
        break;
      default: 
        // Hide skip note
        jQuery('.additional-sites-skip', context).css('display', 'none');
        jQuery('input[name=next_link]', context).val(exhibitd);
        break;
    }
  }
}; 