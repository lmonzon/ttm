<?php

/**
 * Template using twitter bootstrap for panels everywhere.
 * It assumes a modified version of bootstrap with 24 columns.
 *
 * Use only menus in the Navigation region.
 */

?>

<div id="topbar" class="clearfix">
    	<div class="container">
            <div class="col-lg-4 col-md-4 col-sm-4 col-xs-12">
                <div class="social-icons">
                    <span><a data-toggle="tooltip" data-placement="bottom" title="Facebook" href="#"><i class="fa fa-facebook"></i></a></span>
                    <span><a data-toggle="tooltip" data-placement="bottom" title="Google Plus" href="#"><i class="fa fa-google-plus"></i></a></span>
                    <span><a data-toggle="tooltip" data-placement="bottom" title="Twitter" href="#"><i class="fa fa-twitter"></i></a></span>
                </div><!-- end social icons -->
            </div><!-- end columns -->
            <div class="col-lg-8 col-md-8 col-sm-8 col-xs-12">
                <div class="topmenu">
				
				<div class="registro-ingreso clearfix">

                </div><!-- end top menu -->
            	<div class="callus">
								<span class="topbar-login"><i class="fa fa-user"></i>
<?php if(user_is_logged_in()): ?>
Bienvenido, <a href="<?php print url('user', array('absolute' => TRUE)); ?>"><?php
  global $user;
  print "" . l($user->name, 'user');
?></a> / <a href="<?php print url('user/logout', array('absolute' => TRUE)); ?>">Cerrar Sesion</a>
<?php else: ?>
  <a href="<?php print url('registro', array('absolute' => TRUE)); ?>">Registrarse</a> o <a href="<?php print url('user/login', array('absolute' => TRUE)); ?>">Ingresar</a>
<?php endif; ?></span>
                	<span class="topbar-email"><i class="fa fa-envelope"></i> <a href="mailto:name@yoursite.com">name@yoursite.com</a></span>
                    <span class="topbar-phone"><i class="fa fa-phone"></i> 1-900-324-5467</span>
                </div><!-- end callus -->
            </div><!-- end columns -->
        </div><!-- end container -->
    </div><!-- end topbar -->
    
    <header id="header-style-1">
		<div class="container">
			<nav class="navbar yamm navbar-default">
				<div class="navbar-header">
                    <button type="button" data-toggle="collapse" data-target="#navbar-collapse-1" class="navbar-toggle">
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                    </button>
                    <a href="/" rel="home" title="Inicio"><img src="/profiles/tutoriame/themes/tutoriame/logo.png" alt="Inicio"></a>
        		</div><!-- end navbar-header -->
                
				<div id="navbar-collapse-1" class="navbar-collapse collapse navbar-right">
					<ul class="nav navbar-nav">
						<li class="dropdown yamm-fw"><?php if (!empty($content['header'])): ?>
      <?php print render($content['header']); ?>
  <?php endif; ?></li>
					</ul><!-- end navbar-nav -->
				</div><!-- #navbar-collapse-1 -->			</nav><!-- end navbar yamm navbar-default -->
		</div><!-- end container -->
	</header><!-- end header-style-1 -->

<!-- SLIDER REVOLUTION 4.x SCRIPTS  -->
  <script type="text/javascript" src="/profiles/tutoriame/themes/tutoriame/rs-plugin/js/jquery.themepunch.plugins.min.js"></script>
  <script type="text/javascript" src="/profiles/tutoriame/themes/tutoriame/rs-plugin/js/jquery.themepunch.revolution.min.js"></script>
  <script type="text/javascript">
	var revapi;
	jQuery(document).ready(function() {
		revapi = jQuery('.tp-banner').revolution(
		{
			delay:9000,
			startwidth:1170,
			startheight:500,
			hideThumbs:10,
			fullWidth:"on",
			forceFullWidth:"on"
		});
	});	//ready
  </script>
      
  <!-- Royal Slider script files -->
  <script src="/profiles/tutoriame/themes/tutoriame/royalslider/jquery.easing-1.3.js"></script>
  <script src="/profiles/tutoriame/themes/tutoriame/royalslider/jquery.royalslider.min.js"></script>
  <script>
	jQuery(document).ready(function($) {
	  var rsi = $('#slider-in-laptop').royalSlider({
		autoHeight: false,
		arrowsNav: false,
		fadeinLoadedSlide: false,
		controlNavigationSpacing: 0,
		controlNavigation: 'bullets',
		imageScaleMode: 'fill',
		imageAlignCenter: true,
		loop: false,
		loopRewind: false,
		numImagesToPreload: 6,
		keyboardNavEnabled: true,
		autoScaleSlider: true,  
		autoScaleSliderWidth: 486,     
		autoScaleSliderHeight: 315,
	
		/* size of all images http://help.dimsemenov.com/kb/royalslider-jquery-plugin-faq/adding-width-and-height-properties-to-images */
		imgWidth: 792,
		imgHeight: 479
	
	  }).data('royalSlider');
	  $('#slider-next').click(function() {
		rsi.next();
	  });
	  $('#slider-prev').click(function() {
		rsi.prev();
	  });
	});
  </script>
  <link href='http://fonts.googleapis.com/css?family=PT+Sans:400,400italic,700,700italic' rel='stylesheet' type='text/css'>
  <link href='http://fonts.googleapis.com/css?family=Lato:400,300,400italic,300italic,700,700italic,900' rel='stylesheet' type='text/css'>
  <link href='http://fonts.googleapis.com/css?family=Exo:400,300,600,500,400italic,700italic,800,900' rel='stylesheet' type='text/css'>
  <!-- Affix menu -->
<script>
	(function($) {
	  "use strict";
			$("#header-style-1").affix({
			offset: {
			  top: 100
			, bottom: function () {
				return (this.bottom = $('#copyrights').outerHeight(true))
			  }
			}
		})
	})(jQuery);
</script>

<div<?php print $css_id ? " id=\"$css_id\"" : ''; ?> class="container">

  

  <div class="row">
    <?php if (!empty($content['main'])): ?>
      <div id="main-content" class="span48">
        <?php print render($content['main']); ?>
      </div> <!-- /center -->
    <?php endif; ?>
  </div> <!-- /main-row -->
</div> <!-- /container -->
  <?php if (!empty($content['footer'])): ?>
  <div class="footer span48 clearfix">
    <?php print render($content['footer']); ?>
  </div>
  <?php endif; ?>


