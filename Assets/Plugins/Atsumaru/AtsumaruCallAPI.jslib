var AtsumaruCallAPI = {

  AtsumaruChangeScene: function(key) {
	window.RPGAtsumaru.comment.changeScene(Pointer_stringify(key));
  },

  AtsumaruResetAndChangeScene: function(key) {
    window.RPGAtsumaru.comment.resetAndChangeScene(Pointer_stringify(key));
  },

  AtsumaruPushContextFactor: function(key) {
    window.RPGAtsumaru.comment.pushContextFactor(Pointer_stringify(key));
  },

  AtsumaruPushMinorContext: function() {
    window.RPGAtsumaru.comment.pushMinorContext();
  },

  AtsumaruVolumeGetCurrentValue: function() {
    return window.RPGAtsumaru.volume.getCurrentValue();
  },

  AtsumaruOpenLink: function(key) {
    window.RPGAtsumaru.experimental.popups.openLink(Pointer_stringify(key));
  },

  AtsumaruScoreSetRecord: function(board_id, score) {
    window.RPGAtsumaru.experimental.scoreboards.setRecord(Pointer_stringify(board_id),Pointer_stringify(score));
  },

  AtsumaruScoreDisplay: function(board_id) {
    window.RPGAtsumaru.experimental.scoreboards.display(Pointer_stringify(board_id));
  }

}
mergeInto(LibraryManager.library, AtsumaruCallAPI);