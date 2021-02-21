#pragma once
#include <string>
using std::string;
enum class Event{
	onConsoleInput,
	onConsoleOutput,
	onSelectForm,
	onUseItem,
	onPlaceBlock,
	onDestroyBlock,
	onOpenChest,
	onOpenBarrel,
	onCloseChest,
	onCloseBarrel,
	onContainerChange,
	onChangeDimension,
	onMobDie,
	onMobHurt,
	onRespawn,
	onChat,
	onInputText,
	onCommandBlockUpdate,
	onInputCommand,
	onCommandBlockPerform,
	onPlyaerJoin,
	onPlyaerLeft,
	onPlayerAttack,
	onLevelExplode,
	onSetArmor,
	onFallBlockTransform,
	onUseRespawnAnchorBlock,
	onScoreChanged,
	onMove
};
static char toEvent(const string& s) {
	if (s == u8"��̨����")return 0;
	else if (s == u8"��̨���")return 1;
	else if (s == u8"ѡ���")return 2;
	else if (s == u8"ʹ����Ʒ")return 3;
	else if (s == u8"���÷���")return 4;
	else if (s == u8"�ƻ�����")return 5;
	else if (s == u8"������")return 6;
	else if (s == u8"��ľͰ")return 7;
	else if (s == u8"�ر�����")return 8;
	else if (s == u8"�ر�ľͰ")return 9;
	else if (s == u8"����ȡ��")return 10;
	else if (s == u8"�л�ά��")return 11;
	else if (s == u8"��������")return 12;
	else if (s == u8"��������")return 13;
	else if (s == u8"�������")return 14;
	else if (s == u8"������Ϣ")return 15;
	else if (s == u8"�����ı�")return 16;
	else if (s == u8"���������")return 17;
	else if (s == u8"����ָ��")return 18;
	else if (s == u8"�����ִ��")return 19;
	else if (s == u8"������Ϸ")return 20;
	else if (s == u8"�뿪��Ϸ")return 21;
	else if (s == u8"��ҹ���")return 22;
	else if (s == u8"���籬ը")return 23;
	else if (s == u8"��Ҵ���")return 24;
	else if (s == u8"�����ƻ�")return 25;
	else if (s == u8"ʹ������ê")return 26;
	else if (s == u8"�Ʒְ�ı�")return 27;
	else if (s == u8"����ƶ�")return 28;
	else return -1;
}