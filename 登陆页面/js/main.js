define(function(require){
    var main=require("./login");
    $().ready(function(){
        alert(main.foo);
        main.doSomeThing();
    })
})