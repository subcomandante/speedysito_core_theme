(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    $('.name_template .link-1').click(function() {

      var dd = $('.view_options  dt').siblings('dd');
      var pop = $('#popover2');
      var dropdown = $('#dropdown');
      if (pop.is(':visible')) {
        pop.fadeOut(100);
        return false;
      } else {
        pop.fadeIn(100);
        $('#dt').removeClass("active");
        if (dd.is(':visible')) {
          dd.fadeOut(100);
        }
        if (dropdown.is(':visible')) {
          dropdown.fadeOut(100);
          return false;
        }
        return false;
      }
    });

    $(window).scroll(function() {
      if ($(this).scrollTop() > 0) {
        $("#speedysito_messages").css({position: 'fixed'});
      } else {
        $("#speedysito_messages").css({position: 'fixed'});
      }
    });

    $("#speedysito_messages").css({marginTop: '0px'}).removeClass('closed');
    $("#speedysito_messages .trigger").toggle(function() {
      //$(this).find('em').parent().parent('#speedysito_messages').addClass('closed').animate({marginTop: '-53px'}, "fast", function() {
      $(this).find('em').parent().parent('#speedysito_messages').addClass('closed').animate({marginTop: -$("#speedysito_messages").height()}, "fast", function() {
        //calcHeight();
      });
      //strCookies2 = $.cookie("panel2", null);
      //strCookies = $.cookie("panel", 'boo');
    },
        function() {
          $(this).find('em').parent().parent('#speedysito_messages').removeClass('closed').animate({marginTop: '0px'}, "fast", function() {
            //calcHeight();
          })
          //strCookies2 = $.cookie("panel2", 'opened');
          //strCookies = $.cookie("panel", null);
        });
    if ($(window).scrollTop() > 0) {
      $("#speedysito_messages").css({position: 'fixed'});
    } else {
      $("#speedysito_messages").css({position: 'fixed'});
    }

    $('.trigger').click(function() {
      $('.view_options dd').fadeOut(100);
    })
    $('.trigger').click(function() {
      $('.buy_now').removeClass("open");
    })

    $('.view_options  dt')
        .click(function() {
      var dd = $(this).siblings('dd');
      var pop = $('#popover2');
      var dropdown = $('#dropdown');
      if (dd.is(':visible')) {
        dd.fadeOut(100);
        $(this).removeClass("active");
        return false;
      }
      else {
        $(this).addClass("active");
        dd.fadeIn(100);
        if (pop.is(':visible')) {
          pop.fadeOut(100);
          return false;
        }
        if (dropdown.is(':visible')) {
          dropdown.fadeOut(100);
          return false;
        }

        return false;
      }
    });

    $('#buy-button').click(function() {

      var dt = $('#dt');
      var dd = $('.view_options  dt').siblings('dd');
      var pop = $('#popover2');
      var dropdown = $('#dropdown');

      if (dropdown.is(':visible')) {
        dropdown.fadeOut(100);
        return false;
      } else {
        dt.removeClass('active');
        dropdown.fadeIn(100);
        if (pop.is(':visible')) {
          pop.fadeOut(100);
          return false;
        }
        if (dd.is(':visible')) {
          dd.fadeOut(100);
          return false;
        }
        return false;

      }

    });


    var ua = navigator.userAgent;


    $(document).click(function(e) {
      $('#dd').fadeOut(100);
      $('#dt').removeClass("active");
    });

    $('.link-1').hover(function() {
      $(this).find('span').css('background-position', '-188px -39px');
    }, function() {
      $(this).find('span').css('background-position', '-188px -6px');
    });
    $('#dt').hover(function() {
      $(this).find('span').css('background-position', '-193px -41px');
    }, function() {
      $(this).find('span').css('background-position', '-193px -8px');
    });

    $(document).click(function(e) {
      if ($('#popover2').is(':visible')) {
        $('#popover2').fadeOut(100);
      }
      if ($('#dropdown').is(':visible')) {
        $('#dropdown').fadeOut(100);
      }
    });
    if ($.browser.msie) {
      $('body').addClass('ie');
    }
    if (($.browser.msie) && ($.browser.version == '9.0')) {
      $('body').addClass('ie9');
    }

    $('#dropdown.box-drop ul.list-drop li a').hover(
        function() {
          $(this).siblings('.popover').css('opacity', '1').css('z-index', '999');
        }, function() {
      $('#dropdown.box-drop ul.list-drop li .popover').css('opacity', '0').css('z-index', '-999');
    });

    $('.trigger').click(function() {
      $('#popover2, #dd, #dropdown').hide();
    });

    var cssFix = function() {
      var u = navigator.userAgent.toLowerCase(),
          addClass = function(el, val) {
        if (!el.className) {
          el.className = val;
        } else {
          var newCl = el.className;
          newCl += (" " + val);
          el.className = newCl;
        }
      },
          is = function(t) {
        return (u.indexOf(t) != -1)
      };
      addClass(document.getElementsByTagName('html')[0], [
        (!(/opera|webtv/i.test(u)) && /msie (\d)/.test(u)) ? ('ie ie' + RegExp.$1)
            : is('firefox/2') ? 'gecko ff2'
            : is('firefox/3') ? 'gecko ff3'
            : is('gecko/') ? 'gecko'
            : is('opera/9') ? 'opera opera9' : /opera (\d)/.test(u) ? 'opera opera' + RegExp.$1
            : is('konqueror') ? 'konqueror'
            : is('safari/') ? 'webkit safari'
            : is('mozilla/') ? 'gecko' : '',
        (is('x11') || is('linux')) ? ' linux'
            : is('mac') ? ' mac'
            : is('win') ? ' win' : ''
      ].join(" "));
    }();


  }
};

})(jQuery, Drupal, this, this.document);
