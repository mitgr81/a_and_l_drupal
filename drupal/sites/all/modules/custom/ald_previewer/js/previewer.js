(function ($) {
    $(document).ready(function(){
        var settings = JSON.parse($('#ald-settings').val()),
        theme = settings.theme,
        name = settings.name,
        path = settings.path + theme + '/';


        $('input.ald-previewer').bind('keyup', function(event){
            var text = $(event.target).val(),
                $echo = $('#ald-echo');

            $echo.html(text);
            if(text === ''){
                $echo.fadeOut();
            }else{
                $echo.empty();
                for (var textchar in text) {
                    if (text.charAt(textchar).match(/[a-zA-Z]/)){
                        var my_character = text.charAt(textchar),
                            $img = $('<img>').addClass('ald-image');
                        $img.attr('src', path + my_character.toLowerCase() + '.png');
                        $img.attr('alt', my_character);
                        $img.attr('title', my_character);
                        $echo.append($img);
                    }
                }
                $echo.fadeIn();
            }
        });
        if(name !== '') {
            $('input.ald-previewer').val(name).trigger('keyup');

        }
    });

}(jQuery));