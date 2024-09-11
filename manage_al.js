var reb_btn = document.getElementById("reboot");
reb_btn.addEventListener(
  "click",
  function () {
    btn_click("ボタンが押されました!");
  },
  false
);
var sht_btn = document.getElementById("shutdown");
sht_btn.addEventListener(
  "click",
  function () {
    btn_click("ボタンが押されました2!");
  },
  false
);

function btn_click(message) {
  console.log(message);
}
