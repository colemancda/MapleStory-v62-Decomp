/* FUN_0044832b - 0x0044832b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0044832b(void)

{
  short sVar1;
  IBinding *pIVar2;
  int *piVar3;
  wchar_t *pwVar4;
  short *psVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  wchar_t *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var9;
  int unaff_EBP;
  bool bVar10;
  undefined4 *puStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  wchar_t *pwStack_5c;
  wchar_t *pwStack_58;
  
  FUN_00879bb8();
  pwStack_58 = (wchar_t *)(unaff_EBP + -0x10);
  pwStack_5c = 
  L"譑觌\xe465Ｓ䱨陁褀ﱽ㷨ﮰ胿ﱥ贀쁅赐\xf04d짨ﮢ诿\xe8c8씩\xfffb荦࠸䗆˼յ䂋\xeb08렅脬\x97ｪ讍Ȭ"
  ;
  FUN_004497f5();
  *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffac;
  pwStack_58 = u_path_0096414c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pwStack_5c = 
  L"斀ü䖍僀䶍\xe8f0ꋉ\xfffb좋⧨﯅替㢃예ﱅ甂謅ࡀ׫Ⲹ鞁樀跿ⲋ\x02倀ⷨﴁ胿ﱥ贀쁅\xe850ꠙ\xfffb윻絙倆䛨䌊圀譑觌\xe465㱨陁\xe800꿛\xfffb斀ü䖍僀䶍\xe8f0ꉧ\xfffb좋쟨﯄僿䗆Ӽ槨ﲡ胿ﱥ褀⢃\x02贀쁅\xe850Ꟊ\xfffb쒃㬌緇倆\xf4e8䌉贀\xe845偗觨㣆夀ｙ贰䢋\x02\xe800፪"
  ;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pwStack_58 = (wchar_t *)(unaff_EBP + -0x40);
  pwStack_5c = 
  L"좋⧨﯅替㢃예ﱅ甂謅ࡀ׫Ⲹ鞁樀跿ⲋ\x02倀ⷨﴁ胿ﱥ贀쁅\xe850ꠙ\xfffb윻絙倆䛨䌊圀譑觌\xe465㱨陁\xe800꿛\xfffb斀ü䖍僀䶍\xe8f0ꉧ\xfffb좋쟨﯄僿䗆Ӽ槨ﲡ胿ﱥ褀⢃\x02贀쁅\xe850Ꟊ\xfffb쒃㬌緇倆\xf4e8䌉贀\xe845偗觨㣆夀ｙ贰䢋\x02\xe800፪"
  ;
  FUN_0040263d();
  pwStack_5c = L"荦࠸䗆˼յ䂋\xeb08렅脬\x97ｪ讍Ȭ";
  psVar5 = (short *)FUN_004048a4();
  sVar1 = *psVar5;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (sVar1 == 8) {
    pwStack_58 = *(wchar_t **)(psVar5 + 4);
  }
  else {
    pwStack_58 = (wchar_t *)&DAT_0097812c;
  }
  pwStack_5c = (wchar_t *)0x44839d;
  FUN_004184ca();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pwStack_58 = 
  L"윻絙倆䛨䌊圀譑觌\xe465㱨陁\xe800꿛\xfffb斀ü䖍僀䶍\xe8f0ꉧ\xfffb좋쟨﯄僿䗆Ӽ槨ﲡ胿ﱥ褀⢃\x02贀쁅\xe850Ꟊ\xfffb쒃㬌緇倆\xf4e8䌉贀\xe845偗觨㣆夀ｙ贰䢋\x02\xe800፪"
  ;
  pwVar4 = (wchar_t *)(unaff_EBP + -0x40);
  iVar6 = FUN_00402bc3();
  pwStack_58 = pwVar4;
  if (iVar6 < 0) {
    pwStack_58 = (wchar_t *)0x4483b5;
    FUN_00878dfb();
    pwStack_58 = extraout_ECX_00;
  }
  *(wchar_t ***)(unaff_EBP + -0x1c) = &pwStack_58;
  pwStack_5c = u_emotion_0096413c;
  uStack_60 = 0x4483c6;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pwStack_5c = (wchar_t *)(unaff_EBP + -0x40);
  uStack_60 = 0x4483d6;
  FUN_0040263d();
  uStack_60 = 0x4483dd;
  pwStack_58 = (wchar_t *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  pwStack_5c = L"斀ü莉Ȩ";
  uVar7 = FUN_00412550();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x228) = uVar7;
  pwStack_5c = (wchar_t *)(unaff_EBP + -0x40);
  uStack_60 = 0x4483fa;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    pwStack_58 = L"䖍埨\xe850욉8奙ヿ讍Ɉ";
    FUN_00878dfb();
  }
  pwStack_58 = (wchar_t *)(unaff_EBP + -0x18);
  pwStack_5c = L"奙ヿ讍Ɉ";
  puVar8 = (undefined4 *)FUN_007d4a9a();
  pwStack_58 = L"䶍\xe8e8ᎍ";
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x248),
             (IBinding *)*puVar8);
  FUN_004497b5();
  pwStack_58 = (wchar_t *)(unaff_EBP + -0x18);
  pwStack_5c = L"奙ヿ讍Ʉ";
  puVar8 = (undefined4 *)FUN_007d4a9a();
  pwStack_58 = L"䶍\xe8e8፫";
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x244),
             (IBinding *)*puVar8);
  FUN_004497b5();
  FUN_004497c2();
  pwStack_58 = (wchar_t *)0x64;
  pwStack_5c = (wchar_t *)0x55;
  uStack_60 = 0x52;
  puStack_64 = (undefined1 *)0x1;
  puStack_6c = (undefined1 *)&uStack_68;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_68;
  FUN_004489f5();
  puStack_6c = (undefined1 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004489f5();
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00424e27();
  FUN_0042fb5e();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0044972c();
  FUN_00449780();
  FUN_0043f082();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412600();
  pwStack_58 = (wchar_t *)0xff;
  pwStack_5c = (wchar_t *)0xffffffff;
  puStack_64 = (undefined1 *)&uStack_60;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_60;
  uStack_68 = 0x4484df;
  FUN_004489f5();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_64 = (undefined1 *)0x0;
  uStack_68 = 0;
  puStack_6c = (undefined1 *)(unaff_EBP + -0x1c);
  FUN_004489f5();
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00424e27();
  FUN_0042fb5e();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00411641();
  puVar8 = (undefined4 *)FUN_0042e3f0();
  pIVar2 = (IBinding *)*puVar8;
  p_Var9 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x24c);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x14) = p_Var9;
  pwStack_58 = 
  L"䖋㯨瓇謆倈凿謈\xe445斀ü윻ٴࢋｐࡑ遨順贀큍⻨ﮬ棿ڐ\x98䶍움ﱅ\xe80d객\xfffb㸹䗆໼ੵͨ@\xe880ࡵCڋ\xec83謐跼큵ꖥࢋꖥ\xec83謐跼쁵ꖥ檥倠䖉ꗤ釿Đ"
  ;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var9,pIVar2);
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    pwStack_58 = 
    L"䖋胤ﱥ㬀瓇謆倈凿栈ڐ\x98䶍\xe8d0갮\xfffb遨順贀쁍䗆෼ᷨﮬ㧿옾ﱅ甎栊䀃耀痨䌈謀茆წﲋ疍ꗐ讥ꔈ莥წﲋ疍ꗀꖥ\x206a襐\xe445ﾥ႑\x01蔀緀栎㷸\x96痿僤䧨䌈贀쁅왐ﱅ\xe80dꗶ\xfffb삅絙倆⏨䌈耀ﱥ贀큅\xe850ꗞ\xfffb삅絙倆௨䌈븀ڐ\x98赖쁍鏨ﮫ跿쁅赐る\x02였ﱅ\xe80fᄂ"
    ;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    pwStack_58 = 
    L"遨順贀큍⻨ﮬ棿ڐ\x98䶍움ﱅ\xe80d객\xfffb㸹䗆໼ੵͨ@\xe880ࡵCڋ\xec83謐跼큵ꖥࢋꖥ\xec83謐跼쁵ꖥ檥倠䖉ꗤ釿Đ"
    ;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  pwStack_58 = 
  L"遨順贀쁍䗆෼ᷨﮬ㧿옾ﱅ甎栊䀃耀痨䌈謀茆წﲋ疍ꗐ讥ꔈ莥წﲋ疍ꗀꖥ\x206a襐\xe445ﾥ႑\x01蔀緀栎㷸\x96痿僤䧨䌈贀쁅왐ﱅ\xe80dꗶ\xfffb삅絙倆⏨䌈耀ﱥ贀큅\xe850ꗞ\xfffb삅絙倆௨䌈븀ڐ\x98赖쁍鏨ﮫ跿쁅赐る\x02였ﱅ\xe80fᄂ"
  ;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  pwStack_58 = 
  L"㸹䗆໼ੵͨ@\xe880ࡵCڋ\xec83謐跼큵ꖥࢋꖥ\xec83謐跼쁵ꖥ檥倠䖉ꗤ釿Đ";
  FUN_00403191();
  iVar6 = *(int *)p_Var9;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar6 == 0) {
    pwStack_58 = L"ڋ\xec83謐跼큵ꖥࢋꖥ\xec83謐跼쁵ꖥ檥倠䖉ꗤ釿Đ";
    FUN_00878dfb();
  }
  uStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
  pwStack_5c = *(wchar_t **)(unaff_EBP + -0x2c);
  iVar6 = **(int **)p_Var9;
  pwStack_58 = *(wchar_t **)(unaff_EBP + -0x28);
  puStack_6c = *(undefined1 **)(unaff_EBP + -0x3c);
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
  *(int **)(unaff_EBP + -0x1c) = *(int **)p_Var9;
  puStack_64 = *(undefined1 **)(unaff_EBP + -0x34);
  iVar6 = (**(code **)(iVar6 + 0x110))();
  if (iVar6 < 0) {
    iStack_80 = *(int *)(unaff_EBP + -0x1c);
    iStack_88 = 0x4485c0;
    iStack_84 = iVar6;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_80 = 0x4485cd;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_80 = 0x4485d8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_80 = 0x4485e5;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_80 = 0x4485f0;
    FUN_00878dfb();
  }
  iStack_80 = 0x4485fe;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_80 = 0x448611;
  iStack_84 = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_80;
  iStack_88 = 0x44861d;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_84 = 0x44862c;
  FUN_0044974c();
  iStack_84 = 0x448633;
  uVar7 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
  iStack_80 = 0x448643;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_80 = 0x44864e;
    FUN_00878dfb();
  }
  iStack_80 = 0x44865a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_80 = unaff_EBP + -0x40;
  iStack_84 = 0x448664;
  iVar6 = FUN_00402e32();
  if (iVar6 < 0) {
    iStack_80 = 0x448670;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_80 = 0x44867a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_80 = unaff_EBP + -0x30;
  puStack_8c = &DAT_00980690;
  iStack_84 = 0x448684;
  iVar6 = FUN_00402e32();
  if (iVar6 < 0) {
    iStack_80 = 0x448690;
    FUN_00878dfb();
    puStack_8c = extraout_ECX_01;
  }
  iStack_80 = 0;
  iStack_84 = unaff_EBP + -0x40;
  iStack_88 = unaff_EBP + -0x30;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_8c;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00679e4e(&puStack_8c,(0x45 < *(int *)(unaff_EBP + -0x18)) + 0xf41);
  iVar6 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00405a1d(iVar6);
  FUN_00402660();
  FUN_00404a02(iVar6);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_84 = 0x4486e6;
  uVar7 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar7;
  iStack_80 = 0x4486fa;
  iVar6 = FUN_0041a581();
  if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
    iStack_80 = 0x44870b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_80 = 0x448718;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_80 = 0x448723;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_80 = 0x448730;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_80 = 0x44873b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_80 = 0x448748;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_80 = 0x448753;
    FUN_00878dfb();
  }
  iStack_80 = 0x44875d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_80 = unaff_EBP + -0x40;
  iStack_84 = 0x448767;
  iVar6 = FUN_00402e32();
  if (iVar6 < 0) {
    iStack_80 = 0x448775;
    FUN_00878dfb();
  }
  iStack_80 = *(int *)(extraout_ECX + 0x254);
  iStack_84 = 0x448782;
  FUN_0040ee87();
  bVar10 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (bVar10) {
    iStack_80 = 0x448798;
    FUN_00878dfb();
  }
  iStack_80 = unaff_EBP + -0x30;
  iStack_84 = 0;
  iStack_88 = 0;
  puStack_8c = (undefined4 *)0x0;
  puVar8 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x1c,0,0);
  p_Var9 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x250);
  iStack_80 = 0x4487c3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var9,(IBinding *)*puVar8);
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_80 = 0x4487d0;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_80 = 0x4487dd;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_80 = 0x4487e8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_80 = 0x4487f5;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    iStack_80 = 0x448800;
    FUN_00878dfb();
  }
  piVar3 = (int *)**(undefined4 **)(unaff_EBP + -0x14);
  *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
  *(int **)(unaff_EBP + -0x38) = piVar3;
  iStack_80 = 0x448814;
  (**(code **)(*piVar3 + 4))();
  iVar6 = *(int *)p_Var9;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar6 == 0) {
    iStack_80 = -0x7fffbffd;
    iStack_84 = 0x448826;
    FUN_00878dfb();
  }
  piVar3 = *(int **)p_Var9;
  iVar6 = *piVar3;
  puStack_8c = *(undefined4 **)(unaff_EBP + -0x40);
  iStack_88 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x38);
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iStack_80 = *(int *)(unaff_EBP + -0x34);
  iVar6 = (**(code **)(iVar6 + 100))(piVar3);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  piVar3 = (int *)**(undefined4 **)(unaff_EBP + -0x14);
  *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
  *(int **)(unaff_EBP + -0x38) = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  iVar6 = *(int *)p_Var9;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)p_Var9;
  iVar6 = *piVar3;
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar6 = (**(code **)(iVar6 + 0xfc))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963df8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iVar6 = FUN_00402e32(unaff_EBP + -0x30,&DAT_00980690);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar6 = FUN_00402e32(unaff_EBP + -0x40,&DAT_00980690);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  iVar6 = *(int *)p_Var9;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)p_Var9;
  iVar6 = *piVar3;
  *(int **)(unaff_EBP + -0x1c) = piVar3;
  iVar6 = (**(code **)(iVar6 + 0x90))
                    (piVar3,((0x45 < *(int *)(unaff_EBP + -0x18)) - 1U & 0x2d) + 3,0x54,
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  if (*(int *)p_Var9 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)p_Var9;
  iVar6 = (**(code **)(*piVar3 + 0xb4))(piVar3,1);
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,piVar3,&DAT_00963df8);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


