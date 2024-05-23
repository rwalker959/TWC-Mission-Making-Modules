#define ADD_MUSIC(CLASSNAME,FOLDER) \
	class TWC_##CLASSNAME { \
		name = "TWC_##CLASSNAME"; \
		sound[] = { \
			twc_sounds\sounds\##FOLDER##\##CLASSNAME##.ogg \
			, 0.8, 1}; \
	}

class CfgMusic {
	tracks[] = {};
	
	/** classname must be same as filename **/
	ADD_MUSIC(modern_day_intro,operation);
	ADD_MUSIC(modern_night_intro,operation);
	ADD_MUSIC(millennial_day_intro,operation);
	ADD_MUSIC(millennial_night_intro,operation);
	ADD_MUSIC(coldwar_day_intro,operation);
	ADD_MUSIC(coldwar_night_intro,operation);
	ADD_MUSIC(ww2_day_intro,operation);
	ADD_MUSIC(ww2_night_intro,operation);
	
	/** special **/
	ADD_MUSIC(special_1,operation);
};