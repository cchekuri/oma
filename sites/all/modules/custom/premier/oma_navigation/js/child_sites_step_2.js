Drupal.behaviors.childSites = {
  attach: function (context, settings) {

    // Hide warning
    jQuery('#alert_additional_sites_warning', context).css('display', 'none');

    // Question 2
    jQuery('input[name=has_authority]', context).click(function() {
      jQuery('#alert_additional_sites_warning', context).css('display', 'none');  
      if(jQuery('input[name=has_authority]:checked', context).val() == 0 || jQuery('input[name=has_control]:checked', context).val() == 0) {
        jQuery('#alert_additional_sites_warning', context).css('display', 'block');  
      }
    });

    // Question 3
    jQuery('input[name=has_control]', context).click(function() {
      jQuery('#alert_additional_sites_warning', context).css('display', 'none');  
      if(jQuery('input[name=has_authority]:checked', context).val() == 0 || jQuery('input[name=has_control]:checked', context).val() == 0) {
        jQuery('#alert_additional_sites_warning', context).css('display', 'block');  
      }
    });
  }
};