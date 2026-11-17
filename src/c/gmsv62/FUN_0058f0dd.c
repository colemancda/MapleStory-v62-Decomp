/* FUN_0058f0dd - 0x0058f0dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0058f0dd(void)

{
  wchar_t wVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined4 *puVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  ushort *puVar10;
  int extraout_ECX_09;
  uint uVar11;
  int unaff_EBP;
  uint uVar12;
  ushort *puVar13;
  int iStack_114;
  uint uStack_110;
  int iStack_10c;
  undefined4 *puStack_108;
  int *piStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  int iStack_e8;
  int iStack_e4;
  wchar_t *pwStack_e0;
  undefined4 *puStack_dc;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x574;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  puStack_f0 = (undefined1 *)0x58f119;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_ec = (undefined1 *)0x58f129;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f130;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_e4 = 0x58f13b;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x10);
    pwStack_e0 = 
    L"쌻੽윻ٴ\xe850鲗.䖍储䗆ۼ勨\xe73a㯿姃ٽ\xe850鱿.卓譑规\xe465畨\x05倀캋뷨ຬ贀炅\xffff僿䶍옔ﱅ\xe806㒙￧좋裡\xe756诿웈ﱅ\xe808䃾￧쌻䖉觬쑝ᩴ䖍僬䶍\xe8c4뎵￨쌻੽윻ٴ\xe850鰡.薍ｰ\xffff왐ﱅ\xe80a㧙￧쌻絙倆ۨ⺜匀兓쒋斉棤ն"
    ;
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = 
      L"䖍储䗆ۼ勨\xe73a㯿姃ٽ\xe850鱿.卓譑规\xe465畨\x05倀캋뷨ຬ贀炅\xffff僿䶍옔ﱅ\xe806㒙￧좋裡\xe756诿웈ﱅ\xe808䃾￧쌻䖉觬쑝ᩴ䖍僬䶍\xe8c4뎵￨쌻੽윻ٴ\xe850鰡.薍ｰ\xffff왐ﱅ\xe80a㧙￧쌻絙倆ۨ⺜匀兓쒋斉棤ն"
      ;
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  pwStack_e0 = L"쌻絙倆翨⺜匀兓쒋斉棤յ";
  iVar2 = FUN_00402bc3();
  puVar9 = puStack_dc;
  if (iVar2 < 0) {
    pwStack_e0 = 
    L"卓譑规\xe465畨\x05倀캋뷨ຬ贀炅\xffff僿䶍옔ﱅ\xe806㒙￧좋裡\xe756诿웈ﱅ\xe808䃾￧쌻䖉觬쑝ᩴ䖍僬䶍\xe8c4뎵￨쌻੽윻ٴ\xe850鰡.薍ｰ\xffff왐ﱅ\xe80a㧙￧쌻絙倆ۨ⺜匀兓쒋斉棤ն"
    ;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar9 = (undefined4 *)extraout_ECX;
  }
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x575;
  puStack_f0 = (undefined1 *)0x58f191;
  iStack_e4 = (int)puVar9;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_ec = (undefined1 *)0x58f1a4;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f1ab;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_e4 = 0x58f1b6;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x14);
    pwStack_e0 = 
    L"쌻੽윻ٴ\xe850鰡.薍ｰ\xffff왐ﱅ\xe80a㧙￧쌻絙倆ۨ⺜匀兓쒋斉棤ն";
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = L"薍ｰ\xffff왐ﱅ\xe80a㧙￧쌻絙倆ۨ⺜匀兓쒋斉棤ն";
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  pwStack_e0 = L"쌻絙倆ۨ⺜匀兓쒋斉棤ն";
  iVar2 = FUN_00402bc3();
  puVar9 = puStack_dc;
  if (iVar2 < 0) {
    pwStack_e0 = (wchar_t *)0x58f1f5;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar9 = (undefined4 *)extraout_ECX_00;
  }
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x576;
  puStack_f0 = (undefined1 *)0x58f20a;
  iStack_e4 = (int)puVar9;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_ec = (undefined1 *)0x58f21a;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f221;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e4 = 0x58f22c;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x10);
    pwStack_e0 = 
    L"쌻੽윻ٴ\xe850鮫.䖍储䗆໼曨\xe739㯿姃ٽ\xe850鮓.卓譑规\xe465硨\x05倀캋퇨ຫ贀炅\xffff僿䶍옔ﱅ\xe80e㎭￧좋෨\xe756诿웈ﱅ\xe810䀒￧쌻䖉觬쁝ᩴ䖍僬䶍\xe8c0닉￨쌻੽윻ٴ\xe850鬵.薍ｰ\xffff왐ﱅ\xe812㣭￧쌻絙倆᫨⺛匀兓쒋斉棤չ"
    ;
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = 
      L"䖍储䗆໼曨\xe739㯿姃ٽ\xe850鮓.卓譑规\xe465硨\x05倀캋퇨ຫ贀炅\xffff僿䶍옔ﱅ\xe80e㎭￧좋෨\xe756诿웈ﱅ\xe810䀒￧쌻䖉觬쁝ᩴ䖍僬䶍\xe8c0닉￨쌻੽윻ٴ\xe850鬵.薍ｰ\xffff왐ﱅ\xe812㣭￧쌻絙倆᫨⺛匀兓쒋斉棤չ"
      ;
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  pwStack_e0 = L"쌻絙倆鏨⺛匀兓쒋斉棤ո";
  iVar2 = FUN_00402bc3();
  puVar9 = puStack_dc;
  if (iVar2 < 0) {
    pwStack_e0 = 
    L"卓譑规\xe465硨\x05倀캋퇨ຫ贀炅\xffff僿䶍옔ﱅ\xe80e㎭￧좋෨\xe756诿웈ﱅ\xe810䀒￧쌻䖉觬쁝ᩴ䖍僬䶍\xe8c0닉￨쌻੽윻ٴ\xe850鬵.薍ｰ\xffff왐ﱅ\xe812㣭￧쌻絙倆᫨⺛匀兓쒋斉棤չ"
    ;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar9 = (undefined4 *)extraout_ECX_01;
  }
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x578;
  puStack_f0 = (undefined1 *)0x58f27d;
  iStack_e4 = (int)puVar9;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_ec = (undefined1 *)0x58f290;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f297;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_e4 = 0x58f2a2;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x14);
    pwStack_e0 = 
    L"쌻੽윻ٴ\xe850鬵.薍ｰ\xffff왐ﱅ\xe812㣭￧쌻絙倆᫨⺛匀兓쒋斉棤չ";
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = L"薍ｰ\xffff왐ﱅ\xe812㣭￧쌻絙倆᫨⺛匀兓쒋斉棤չ";
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  pwStack_e0 = L"쌻絙倆᫨⺛匀兓쒋斉棤չ";
  iVar2 = FUN_00402bc3();
  puVar9 = puStack_dc;
  if (iVar2 < 0) {
    pwStack_e0 = 
    L"卓譑规\xe465票\x05倀캋壨ຫ贀ꡅ赐ᑍ䗆ዼ㟨\xe733诿\xe8c8喗￧좋䗆ᓼ鳨\xe73f㯿觃\xf045嶉璈贚\xf045赐衍叨\xe8b2㯿緃㬊瓇倆뿨⺚贀ꡅ왐ﱅ\xe816㡺￧쌻絙倆꟨⺚匀兓쒋斉棤շ"
    ;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar9 = (undefined4 *)extraout_ECX_02;
  }
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x579;
  puStack_f0 = (undefined1 *)0x58f2f6;
  iStack_e4 = (int)puVar9;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_ec = (undefined1 *)0x58f306;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f30d;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_e4 = 0x58f318;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x78) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x10);
    pwStack_e0 = 
    L"쌻੽윻ٴ\xe850骿.䖍储䗆᛼竨\xe738㯿姃ٽ\xe850骧.卓譑规\xe465睨\x05倀캋\xe5e8ສ贀炅\xffff僿䶍옔ﱅ\xe816㋁￧좋⇨\xe755诿웈ﱅ\xe818㼦￧쌻䖉觬뱝ᩴ䖍僬䶍\xe8bc뇝￨쌻੽윻ٴ\xe850驉.薍ｰ\xffff왐ﱅ\xe81a㠁￧쌻絙倆⻨⺚匀兓쒋斉棤պ"
    ;
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = 
      L"䖍储䗆᛼竨\xe738㯿姃ٽ\xe850骧.卓譑规\xe465睨\x05倀캋\xe5e8ສ贀炅\xffff僿䶍옔ﱅ\xe816㋁￧좋⇨\xe755诿웈ﱅ\xe818㼦￧쌻䖉觬뱝ᩴ䖍僬䶍\xe8bc뇝￨쌻੽윻ٴ\xe850驉.薍ｰ\xffff왐ﱅ\xe81a㠁￧쌻絙倆⻨⺚匀兓쒋斉棤պ"
      ;
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  pwStack_e0 = L"쌻絙倆꟨⺚匀兓쒋斉棤շ";
  iVar2 = FUN_00402bc3();
  puVar9 = puStack_dc;
  if (iVar2 < 0) {
    pwStack_e0 = 
    L"卓譑规\xe465睨\x05倀캋\xe5e8ສ贀炅\xffff僿䶍옔ﱅ\xe816㋁￧좋⇨\xe755诿웈ﱅ\xe818㼦￧쌻䖉觬뱝ᩴ䖍僬䶍\xe8bc뇝￨쌻੽윻ٴ\xe850驉.薍ｰ\xffff왐ﱅ\xe81a㠁￧쌻絙倆⻨⺚匀兓쒋斉棤պ"
    ;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar9 = (undefined4 *)extraout_ECX_03;
  }
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x577;
  puStack_f0 = (undefined1 *)0x58f369;
  iStack_e4 = (int)puVar9;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  puStack_ec = (undefined1 *)0x58f37c;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f383;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_e4 = 0x58f38e;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x14);
    pwStack_e0 = 
    L"쌻੽윻ٴ\xe850驉.薍ｰ\xffff왐ﱅ\xe81a㠁￧쌻絙倆⻨⺚匀兓쒋斉棤պ";
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = L"薍ｰ\xffff왐ﱅ\xe81a㠁￧쌻絙倆⻨⺚匀兓쒋斉棤պ";
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  pwStack_e0 = L"쌻絙倆⻨⺚匀兓쒋斉棤պ";
  iVar2 = FUN_00402bc3();
  puVar9 = puStack_dc;
  if (iVar2 < 0) {
    pwStack_e0 = 
    L"卓譑规\xe465穨\x05倀캋注ສ贀ꡅ赐ᑍ䗆᫼䯨\xe732诿\xe8c8咫￧좋䗆᳼냨\xe73e㯿觃\xf045嶉瓐贚\xf045赐큍柨\xe8b1㯿緃㬊瓇倆폨⺙贀ꡅ왐ﱅ\xe81e㞎￧쌻絙倆믨⺙匀兓쒋斉棤ջ"
    ;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar9 = (undefined4 *)extraout_ECX_04;
  }
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x57a;
  puStack_f0 = (undefined1 *)0x58f3e2;
  iStack_e4 = (int)puVar9;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_ec = (undefined1 *)0x58f3f2;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f3f9;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_e4 = 0x58f404;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x10);
    pwStack_e0 = 
    L"쌻੽윻ٴ\xe850駓.䖍储䗆Ỽ軨\xe737㯿姃ٽ\xe850馻.卓譑规\xe465筨\x05倀캋裡ຩ贀炅\xffff僿䶍옔ﱅ\xe81e㇕￧좋㗨\xe754诿웈ﱅ\xe820㸺￧쌻䖉觬록ᩴ䖍僬䶍\xe8b8냱￨쌻੽윻ٴ\xe850饝.薍ｰ\xffff왐ﱅ\xe822㜕￧쌻絙倆䋨⺙匀兓쒋斉棤ռ"
    ;
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = 
      L"䖍储䗆Ỽ軨\xe737㯿姃ٽ\xe850馻.卓譑规\xe465筨\x05倀캋裡ຩ贀炅\xffff僿䶍옔ﱅ\xe81e㇕￧좋㗨\xe754诿웈ﱅ\xe820㸺￧쌻䖉觬록ᩴ䖍僬䶍\xe8b8냱￨쌻੽윻ٴ\xe850饝.薍ｰ\xffff왐ﱅ\xe822㜕￧쌻絙倆䋨⺙匀兓쒋斉棤ռ"
      ;
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  pwStack_e0 = L"쌻絙倆믨⺙匀兓쒋斉棤ջ";
  iVar2 = FUN_00402bc3();
  puVar9 = puStack_dc;
  if (iVar2 < 0) {
    pwStack_e0 = 
    L"卓譑规\xe465筨\x05倀캋裡ຩ贀炅\xffff僿䶍옔ﱅ\xe81e㇕￧좋㗨\xe754诿웈ﱅ\xe820㸺￧쌻䖉觬록ᩴ䖍僬䶍\xe8b8냱￨쌻੽윻ٴ\xe850饝.薍ｰ\xffff왐ﱅ\xe822㜕￧쌻絙倆䋨⺙匀兓쒋斉棤ռ"
    ;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar9 = (undefined4 *)extraout_ECX_05;
  }
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x57b;
  puStack_f0 = (undefined1 *)0x58f455;
  iStack_e4 = (int)puVar9;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x90;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  puStack_ec = (undefined1 *)0x58f468;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f46f;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_e4 = 0x58f47a;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x14);
    pwStack_e0 = 
    L"쌻੽윻ٴ\xe850饝.薍ｰ\xffff왐ﱅ\xe822㜕￧쌻絙倆䋨⺙匀兓쒋斉棤ռ";
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = L"薍ｰ\xffff왐ﱅ\xe822㜕￧쌻絙倆䋨⺙匀兓쒋斉棤ռ";
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  pwStack_e0 = L"쌻絙倆䋨⺙匀兓쒋斉棤ռ";
  iVar2 = FUN_00402bc3();
  puVar9 = puStack_dc;
  if (iVar2 < 0) {
    pwStack_e0 = 
    L"卓譑规\xe465籨\x05倀캋胨ຩ贀ꡅ赐ᑍ䗆⋼忨\xe731诿\xe8c8县￧좋䗆⓼쓨\xe73d㯿觃\xf045嶉瓠贚\xf045赐\xe04d篨\xe8b0㯿緃㬊瓇倆\xe7e8⺘贀ꡅ왐ﱅ\xe826㚢￧쌻絙倆쿨⺘匀兓쒋斉棤ս"
    ;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar9 = (undefined4 *)extraout_ECX_06;
  }
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x57c;
  puStack_f0 = (undefined1 *)0x58f4ce;
  iStack_e4 = (int)puVar9;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_ec = (undefined1 *)0x58f4de;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f4e5;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_e4 = 0x58f4f0;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -0x10);
    pwStack_e0 = (wchar_t *)0x58f506;
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = (wchar_t *)0x58f514;
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  pwStack_e0 = L"쌻絙倆쿨⺘匀兓쒋斉棤ս";
  iVar2 = FUN_00402bc3();
  puVar9 = puStack_dc;
  if (iVar2 < 0) {
    pwStack_e0 = (wchar_t *)0x58f52c;
    puStack_dc = (undefined4 *)iVar2;
    FUN_00878dfb();
    puVar9 = (undefined4 *)extraout_ECX_07;
  }
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)0x0;
  puStack_ec = (undefined1 *)&iStack_e4;
  *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
  iStack_e8 = 0x57d;
  puStack_f0 = (undefined1 *)0x58f541;
  iStack_e4 = (int)puVar9;
  FUN_00679e4e();
  iStack_e8 = unaff_EBP + -0xd8;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  puStack_ec = (undefined1 *)0x58f554;
  FUN_0040263d();
  puStack_ec = (undefined1 *)0x58f55b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_e4 = 0x58f566;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -200) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (iVar2 != 0) {
    puStack_dc = (undefined4 *)(unaff_EBP + -200);
    pwStack_e0 = (wchar_t *)0x58f582;
    puStack_dc = (undefined4 *)FUN_0041a581();
    if (((int)puStack_dc < 0) && (puStack_dc != (undefined4 *)0x80004002)) {
      pwStack_e0 = (wchar_t *)0x58f590;
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)(unaff_EBP + -0xd8);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  pwStack_e0 = (wchar_t *)0x58f5a0;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    pwStack_e0 = (wchar_t *)0x58f5ab;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f5bb;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f5c6;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_dc = (undefined4 *)0x58f5d4;
  iVar2 = FUN_0040eea9();
  puStack_dc = (undefined4 *)0x58f5de;
  iVar3 = FUN_0040eea9();
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  if (*(int *)(unaff_EBP + -0x40) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f5ef;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f5f7;
  iVar3 = FUN_0040eea9();
  *(int *)(unaff_EBP + -0x5c) = iVar3;
  if (iVar3 <= iVar2) {
    *(int *)(unaff_EBP + -0x5c) = iVar2;
  }
  if (*(int *)(unaff_EBP + -0x3c) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f60c;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f614;
  uVar4 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -0xa8) = uVar4;
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f625;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      puStack_dc = (undefined4 *)0x80004003;
      pwStack_e0 = (wchar_t *)0x58f630;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f63e;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x24);
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f64e;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f658;
  uVar4 = FUN_0040eea9();
  puStack_dc = (undefined4 *)0x58f662;
  iVar2 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  uVar12 = iVar2 - *(int *)(unaff_EBP + -0x10);
  puStack_dc = (undefined4 *)0x58f673;
  iVar2 = FUN_0040eea9();
  puStack_dc = (undefined4 *)0x58f67d;
  iVar3 = FUN_0040e48b();
  *(int *)(unaff_EBP + -0x28) = iVar3 - iVar2;
  if ((uint)(iVar3 - iVar2) <= uVar12) {
    *(uint *)(unaff_EBP + -0x28) = uVar12;
  }
  if (*(int *)(unaff_EBP + -0x44) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f695;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x44) == 0) {
      puStack_dc = (undefined4 *)0x80004003;
      pwStack_e0 = (wchar_t *)0x58f6a1;
      FUN_00878dfb();
    }
  }
  puStack_dc = (undefined4 *)0x58f6ab;
  iVar2 = FUN_0040e48b();
  puStack_dc = (undefined4 *)0x58f6b4;
  iVar3 = FUN_0040eea9();
  *(int *)(unaff_EBP + -0xa4) = iVar2 - iVar3;
  if ((uint)(iVar2 - iVar3) <= *(uint *)(unaff_EBP + -0x28)) {
    *(uint *)(unaff_EBP + -0xa4) = *(uint *)(unaff_EBP + -0x28);
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f6d5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f6e1;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f6ec;
  iVar2 = FUN_0040eed0();
  puStack_dc = (undefined4 *)0x58f6f5;
  iVar3 = FUN_0040eed0();
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  if (*(int *)(unaff_EBP + -0x3c) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f708;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f710;
  iVar3 = FUN_0040eed0();
  *(int *)(unaff_EBP + -0x6c) = iVar3;
  if (iVar3 <= iVar2) {
    *(int *)(unaff_EBP + -0x6c) = iVar2;
  }
  if (*(int *)(unaff_EBP + -0x40) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f725;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f72d;
  uVar4 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x70) = uVar4;
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f73b;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x38) == 0) {
      puStack_dc = (undefined4 *)0x80004003;
      pwStack_e0 = (wchar_t *)0x58f746;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + -0x48) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f754;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x48);
  if (*(int *)(unaff_EBP + -0x48) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f764;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f76e;
  uVar4 = FUN_0040eed0();
  puStack_dc = (undefined4 *)0x58f778;
  iVar2 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  uVar12 = iVar2 - *(int *)(unaff_EBP + -0x10);
  puStack_dc = (undefined4 *)0x58f789;
  iVar2 = FUN_0040eed0();
  puStack_dc = (undefined4 *)0x58f793;
  iVar3 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x28) = iVar3 - iVar2;
  if ((uint)(iVar3 - iVar2) <= uVar12) {
    *(uint *)(unaff_EBP + -0x28) = uVar12;
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f7ac;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      puStack_dc = (undefined4 *)0x80004003;
      pwStack_e0 = (wchar_t *)0x58f7b7;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f7c5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f7d2;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f7da;
  uVar4 = FUN_0040eed0();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  puStack_dc = (undefined4 *)0x58f7e6;
  iVar2 = FUN_0040e53d();
  uVar11 = iVar2 - *(int *)(unaff_EBP + -0x10);
  puStack_dc = (undefined4 *)0x58f7f4;
  iVar2 = FUN_0040eed0();
  puStack_dc = (undefined4 *)0x58f7fe;
  iVar3 = FUN_0040e53d();
  uVar12 = iVar3 - iVar2;
  if ((uint)(iVar3 - iVar2) < uVar11) {
    uVar12 = uVar11;
  }
  *(uint *)(unaff_EBP + -0x7c) = uVar12;
  if (uVar12 <= *(uint *)(unaff_EBP + -0x28)) {
    *(uint *)(unaff_EBP + -0x7c) = *(uint *)(unaff_EBP + -0x28);
  }
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f820;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      puStack_dc = (undefined4 *)0x80004003;
      pwStack_e0 = (wchar_t *)0x58f82b;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x24);
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f83c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f84d;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x2c);
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f85d;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = (wchar_t *)0x58f86b;
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f876;
  iVar2 = FUN_0040e53d();
  puStack_dc = (undefined4 *)0x58f880;
  iVar3 = FUN_0040eed0();
  puStack_dc = (undefined4 *)0x58f88a;
  iVar5 = FUN_0040eed0();
  uVar11 = (iVar2 - iVar3) + iVar5;
  puStack_dc = (undefined4 *)0x58f893;
  uVar4 = FUN_0040eed0();
  puStack_dc = (undefined4 *)0x58f89d;
  iVar3 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iVar2 = *(int *)(unaff_EBP + -0x10);
  puStack_dc = (undefined4 *)0x58f8ae;
  iVar5 = FUN_0040eed0();
  uVar12 = (iVar3 - iVar2) + iVar5;
  *(uint *)(unaff_EBP + -0x34) = uVar12;
  if (uVar12 <= uVar11) {
    *(uint *)(unaff_EBP + -0x34) = uVar11;
  }
  iVar2 = *(int *)(unaff_EBP + -0x70);
  *(undefined4 *)(unaff_EBP + -0x60) = 7;
  *(int *)(unaff_EBP + -0xac) = *(int *)(unaff_EBP + -0xa8) * 7;
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    puStack_dc = (undefined4 *)0x80004003;
    pwStack_e0 = 
    L"䶋\xe8c8\xeb9c￧붉ｈ\xffff붉ｌ\xffff붉ｐ\xffff藇｀\xffff障\x8e綉梜ք";
    FUN_00878dfb();
  }
  puStack_dc = (undefined4 *)0x58f8ef;
  FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0xb0) = 0;
  *(undefined ***)(unaff_EBP + -0xc0) = &PTR_FUN_008e969c;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  puStack_dc = (undefined4 *)0x584;
  pwStack_e0 = (wchar_t *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_e4 = 0x58f927;
  piVar6 = (int *)FUN_00679d86();
  iStack_e4 = *piVar6;
  puStack_dc = (undefined4 *)0x0;
  pwStack_e0 = (wchar_t *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iStack_e8 = 0x58f938;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    pwStack_e0 = (wchar_t *)0x58f94f;
    FUN_00403384();
  }
  puStack_dc = &DAT_00980690;
  pwStack_e0 = (wchar_t *)0x58f960;
  FUN_00403191();
  puStack_dc = (undefined4 *)(unaff_EBP + -0xa0);
  pwStack_e0 = *(wchar_t **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  puStack_f0 = (undefined1 *)&iStack_e8;
  *(int **)(unaff_EBP + 0x10) = &iStack_e8;
  puStack_ec = (undefined1 *)0xa;
  uStack_f4 = 0x58f97f;
  iStack_e8 = extraout_ECX_08;
  iStack_e4 = iVar2 + -2;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  puStack_ec = (undefined1 *)0x58f98b;
  FUN_0044974c();
  puStack_ec = (undefined1 *)0x58f992;
  FUN_004503f9();
  puStack_dc = (undefined4 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  pwStack_e0 = (wchar_t *)0x58f9a2;
  puStack_dc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_dc < 0) {
    pwStack_e0 = (wchar_t *)0x58f9ad;
    FUN_00878dfb();
  }
  do {
    puStack_dc = &DAT_00980690;
    pwStack_e0 = (wchar_t *)0x58f9bd;
    FUN_00403191();
    puStack_dc = (undefined4 *)(unaff_EBP + -0xa0);
    pwStack_e0 = *(wchar_t **)(unaff_EBP + -0xac);
    iStack_e8 = unaff_EBP + 0xc;
    *(int **)(unaff_EBP + -0x1c) = &iStack_e4;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    puStack_ec = (undefined1 *)0x58f9dd;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_e8 = 0x58f9e9;
    FUN_0044974c();
    iStack_e8 = 0x58f9f0;
    uVar12 = FUN_0047077a();
    if ((*(int **)(unaff_EBP + 0xc) == (int *)0x0) ||
       (iVar2 = **(int **)(unaff_EBP + 0xc), iVar2 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)(iVar2 + -4) >> 1;
    }
    puStack_dc = (undefined4 *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    pwStack_e0 = (wchar_t *)0x58fa1d;
    puStack_dc = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_dc < 0) {
      pwStack_e0 = (wchar_t *)0x58fa28;
      FUN_00878dfb();
    }
    if (uVar11 <= uVar12) {
      puStack_dc = (undefined4 *)0x58fb5f;
      FUN_0046ff4e();
      puStack_dc = (undefined4 *)(unaff_EBP + 0xc);
      pwStack_e0 = 
      L"薋ｈ\xffff좋꼏遍䴻珌褫ၽ趍｀\xffff䗆㏼쇨\xee03跿၍譑\xe8c8띤￬䶍옐ﱅ\xe82c㐂￧쓫\xf883甁桿ڐ\x98趍｠\xffff훨\xe735跿悅\xffff僿赑౅첋斉倐䗆㓼⣨\xe75e跿鱍䗆㓼毨\xeb9b诿\xe8c8鋓￫떋ｘ\xffff䒍Ｐ툳\xf6f7䗆⳼䖉趠悅\xffff僿뫨\xe72f㯿姇ٽ\xe850釧.䶃Ơ䖋ྠ욯薉ｔ\xffff薋ｈ\xffff꼏遅䔃讄咍\xffffϿ鑅綉觨聅薋｜\xffff᲍́ꑝ嶉棘ί"
      ;
      FUN_0045b2fc();
      while (iVar2 = *(int *)(unaff_EBP + -0xb8),
            (uint)(iVar2 * *(int *)(unaff_EBP + -0x70)) < *(uint *)(unaff_EBP + -0x34)) {
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        puStack_dc = (undefined4 *)0x58fb8d;
        FUN_0046ff4e();
        puStack_dc = (undefined4 *)(unaff_EBP + 0x10);
        pwStack_e0 = 
        L"䶍옐ﱅ\xe82c㐂￧쓫\xf883甁桿ڐ\x98趍｠\xffff훨\xe735跿悅\xffff僿赑౅첋斉倐䗆㓼⣨\xe75e跿鱍䗆㓼毨\xeb9b诿\xe8c8鋓￫떋ｘ\xffff䒍Ｐ툳\xf6f7䗆⳼䖉趠悅\xffff僿뫨\xe72f㯿姇ٽ\xe850釧.䶃Ơ䖋ྠ욯薉ｔ\xffff薋ｈ\xffff꼏遅䔃讄咍\xffffϿ鑅綉觨聅薋｜\xffff᲍́ꑝ嶉棘ί"
        ;
        FUN_0045b2fc();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        puStack_dc = (undefined4 *)0x58fba4;
        FUN_00402fa6();
      }
      if (iVar2 == 1) {
        puStack_dc = &DAT_00980690;
        pwStack_e0 = (wchar_t *)0x58fbbb;
        FUN_00403191();
        puStack_dc = (undefined4 *)(unaff_EBP + -0xa0);
        iStack_e4 = unaff_EBP + 0xc;
        *(wchar_t ***)(unaff_EBP + 0x10) = &pwStack_e0;
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        iStack_e8 = 0x58fbd5;
        FUN_004059fd();
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        iStack_e4 = 0x58fbe1;
        FUN_0044974c();
        iStack_e4 = 0x58fbe8;
        iVar2 = FUN_00448ebb();
        uVar12 = *(uint *)(unaff_EBP + -0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        *(uint *)(unaff_EBP + -0x60) = (iVar2 + -1 + uVar12) / uVar12;
        puStack_dc = (undefined4 *)(unaff_EBP + -0xa0);
        pwStack_e0 = (wchar_t *)0x58fc09;
        puStack_dc = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_dc < 0) {
          pwStack_e0 = 
          L"䶃Ơ䖋ྠ욯薉ｔ\xffff薋ｈ\xffff꼏遅䔃讄咍\xffffϿ鑅綉觨聅薋｜\xffff᲍́ꑝ嶉棘ί"
          ;
          FUN_00878dfb();
        }
        *(uint *)(unaff_EBP + -0x60) = *(uint *)(unaff_EBP + -0x60) | 1;
        *(uint *)(unaff_EBP + -0xac) = *(int *)(unaff_EBP + -0x60) * uVar12;
        iVar2 = *(int *)(unaff_EBP + -0xb8);
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(int *)(unaff_EBP + -0x80) =
           iVar2 * *(int *)(unaff_EBP + -0x70) + *(int *)(unaff_EBP + -0x7c) +
           *(int *)(unaff_EBP + -0x6c);
      iVar2 = *(int *)(unaff_EBP + -0xac) + *(int *)(unaff_EBP + -0xa4) +
              *(int *)(unaff_EBP + -0x5c);
      *(int *)(unaff_EBP + -0x28) = iVar2;
      puStack_dc = (undefined4 *)0x3af;
      pwStack_e0 = (wchar_t *)(unaff_EBP + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_e4 = 0x58fc66;
      piVar6 = (int *)FUN_00679d86();
      iStack_e4 = *piVar6;
      puStack_dc = (undefined4 *)0x0;
      pwStack_e0 = (wchar_t *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iStack_e8 = 0x58fc77;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      if (*(int *)(unaff_EBP + 0x10) != 0) {
        puStack_dc = (undefined4 *)(*(int *)(unaff_EBP + 0x10) + -0xc);
        pwStack_e0 = 
        L"빙ڐ\x98赖炍\xffff\xe8ff㓱￧赖悍\xffff웿ﱅ\xe838㓡￧䖋㯨웇ﱅ甹栍䀃耀㛨⺑謀\xe845\xec83謐跼炵\xffffꗿ讥ꔈ莥წﲋ痿趀悵\xffffꗿꖥ偓䖉ꔐ凿蔬緀栎㳈\x96痿倐Ө⺑贀悅\xffff僿䗆㣼껨\xe72e藿姀ٽ\xe850郛.薍ｰ\xffff왐ﱅ\xe836⺓￧삅絙倆샨⺐茀챥茀ꁽༀ⮎\x02謀ꁅ⮙观顅䖋톤顽䖉樐栃ÿ"
        ;
        FUN_00403384();
      }
      puStack_dc = &DAT_00980690;
      pwStack_e0 = 
      L"赖悍\xffff웿ﱅ\xe838㓡￧䖋㯨웇ﱅ甹栍䀃耀㛨⺑謀\xe845\xec83謐跼炵\xffffꗿ讥ꔈ莥წﲋ痿趀悵\xffffꗿꖥ偓䖉ꔐ凿蔬緀栎㳈\x96痿倐Ө⺑贀悅\xffff僿䗆㣼껨\xe72e藿姀ٽ\xe850郛.薍ｰ\xffff왐ﱅ\xe836⺓￧삅絙倆샨⺐茀챥茀ꁽༀ⮎\x02謀ꁅ⮙观顅䖋톤顽䖉樐栃ÿ"
      ;
      FUN_00403191();
      puStack_dc = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      pwStack_e0 = 
      L"䖋㯨웇ﱅ甹栍䀃耀㛨⺑謀\xe845\xec83謐跼炵\xffffꗿ讥ꔈ莥წﲋ痿趀悵\xffffꗿꖥ偓䖉ꔐ凿蔬緀栎㳈\x96痿倐Ө⺑贀悅\xffff僿䗆㣼껨\xe72e藿姀ٽ\xe850郛.薍ｰ\xffff왐ﱅ\xe836⺓￧삅絙倆샨⺐茀챥茀ꁽༀ⮎\x02謀ꁅ⮙观顅䖋톤顽䖉樐栃ÿ"
      ;
      FUN_00403191();
      piStack_104 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      if (piStack_104 == (int *)0x0) {
        puStack_dc = (undefined4 *)0x80004003;
        pwStack_e0 = (wchar_t *)0x58fcc5;
        FUN_00878dfb();
        piStack_104 = *(int **)(unaff_EBP + -0x18);
      }
      iStack_e8 = *(int *)(unaff_EBP + -0x90);
      iStack_e4 = *(int *)(unaff_EBP + -0x8c);
      iVar3 = *piStack_104;
      pwStack_e0 = *(wchar_t **)(unaff_EBP + -0x88);
      puStack_dc = *(undefined4 **)(unaff_EBP + -0x84);
      uStack_fc = *(undefined4 *)(unaff_EBP + -0x80);
      uStack_f8 = *(undefined4 *)(unaff_EBP + -0xa0);
      uStack_f4 = *(undefined4 *)(unaff_EBP + -0x9c);
      puStack_f0 = *(undefined1 **)(unaff_EBP + -0x98);
      *(int **)(unaff_EBP + 0x10) = piStack_104;
      puStack_ec = *(undefined1 **)(unaff_EBP + -0x94);
      puStack_108 = (undefined4 *)0x58fcf3;
      iStack_100 = iVar2;
      iVar2 = (**(code **)(iVar3 + 0x2c))();
      if (iVar2 < 0) {
        puStack_108 = (undefined4 *)&DAT_00963cc8;
        iStack_10c = *(int *)(unaff_EBP + 0x10);
        iStack_114 = 0x58fd05;
        uStack_110 = iVar2;
        FUN_00878e09();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      iStack_10c = 0x58fd15;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        iStack_10c = 0x58fd20;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_10c = 0x58fd30;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        iStack_10c = 0x58fd3b;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      if (0 < *(int *)(unaff_EBP + -0x60)) {
        *(int *)(unaff_EBP + -0x68) =
             *(int *)(unaff_EBP + -0x60) - (*(int *)(unaff_EBP + -0x60) >> 0x1f);
        *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x68) >> 1;
        *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x5c);
        do {
          puStack_108 = (undefined4 *)0x3;
          iStack_10c = 0xff;
          uStack_110 = 0x58fd72;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          if (*(int *)(unaff_EBP + -0x3c) == 0) {
            puStack_108 = (undefined4 *)0x80004003;
            iStack_10c = 0x58fd83;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x3c) == 0) {
              puStack_108 = (undefined4 *)0x80004003;
              iStack_10c = 0x58fd8e;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            puStack_108 = (undefined4 *)0x80004003;
            iStack_10c = 0x58fd9c;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x14) = piVar6;
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x3c);
          puStack_108 = (undefined4 *)0x58fdad;
          iVar3 = FUN_0040eed0();
          iVar2 = *(int *)(unaff_EBP + -0x6c);
          puStack_108 = (undefined4 *)0x58fdb9;
          iVar5 = FUN_0040eea9();
          iStack_114 = *(int *)(unaff_EBP + -0x90);
          uStack_110 = *(int *)(unaff_EBP + -0x8c);
          iStack_10c = *(int *)(unaff_EBP + -0x88);
          puStack_108 = *(undefined4 **)(unaff_EBP + -0x84);
          iVar2 = (**(code **)(*piVar6 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 0x10) - iVar5,
                             iVar2 - iVar3,*(undefined4 *)(unaff_EBP + -0x10));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x90);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          if (*(int *)(unaff_EBP + -0x34) == *(int *)(unaff_EBP + -0x68)) {
            FUN_004031b7(0xff,3);
            *(undefined1 *)(unaff_EBP + -4) = 0x3b;
            if ((*(int *)(unaff_EBP + -0x38) == 0) &&
               (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x38) == 0)) {
              FUN_00878dfb(0x80004003);
            }
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar6 = *(int **)(unaff_EBP + -0x18);
            *(int **)(unaff_EBP + -0x14) = piVar6;
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
            iVar5 = FUN_0040eed0();
            iVar2 = *(int *)(unaff_EBP + -0x80);
            iVar3 = *(int *)(unaff_EBP + -0x7c);
            iVar8 = FUN_0040eea9();
            iVar2 = (**(code **)(*piVar6 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 0x10) - iVar8
                               ,(iVar2 - iVar3) - iVar5,*(undefined4 *)(unaff_EBP + -0x10),
                               *(undefined4 *)(unaff_EBP + -0xa0),*(undefined4 *)(unaff_EBP + -0x9c)
                               ,*(undefined4 *)(unaff_EBP + -0x98),
                               *(undefined4 *)(unaff_EBP + -0x94));
            if (iVar2 < 0) {
              puStack_108 = (undefined4 *)&DAT_00963cc8;
              iStack_10c = *(int *)(unaff_EBP + -0x14);
              iStack_114 = 0x58fead;
              uStack_110 = iVar2;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            puStack_108 = (undefined4 *)(unaff_EBP + -0xa0);
          }
          else {
            FUN_004031b7(0xff,3);
            *(undefined1 *)(unaff_EBP + -4) = 0x3c;
            if ((*(int *)(unaff_EBP + -0x48) == 0) &&
               (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x48) == 0)) {
              FUN_00878dfb(0x80004003);
            }
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar6 = *(int **)(unaff_EBP + -0x18);
            *(int **)(unaff_EBP + -0x14) = piVar6;
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x48);
            iVar5 = FUN_0040eed0();
            iVar2 = *(int *)(unaff_EBP + -0x80);
            iVar3 = *(int *)(unaff_EBP + -0x7c);
            iVar8 = FUN_0040eea9();
            iVar2 = (**(code **)(*piVar6 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + 0x10) - iVar8
                               ,(iVar2 - iVar3) - iVar5,*(undefined4 *)(unaff_EBP + -0x10),
                               *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54)
                               ,*(undefined4 *)(unaff_EBP + -0x50),
                               *(undefined4 *)(unaff_EBP + -0x4c));
            if (iVar2 < 0) {
              puStack_108 = (undefined4 *)&DAT_00963cc8;
              iStack_10c = *(int *)(unaff_EBP + -0x14);
              iStack_114 = 0x58ff44;
              uStack_110 = iVar2;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
          }
          iStack_10c = 0x58ff51;
          puStack_108 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_108 < 0) {
            iStack_10c = 0x58ff5c;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
          *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + -0xa8);
        } while (*(int *)(unaff_EBP + -0x34) < *(int *)(unaff_EBP + -0x60));
      }
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      if (*(int *)(unaff_EBP + -0xb8) != 0) {
        *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x6c);
        do {
          puStack_108 = (undefined4 *)0x3;
          iStack_10c = 0xff;
          uStack_110 = 0x58ff9a;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          if (*(int *)(unaff_EBP + -0x40) == 0) {
            puStack_108 = (undefined4 *)0x80004003;
            iStack_10c = 0x58ffb0;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x40) == 0) {
              puStack_108 = (undefined4 *)0x80004003;
              iStack_10c = 0x58ffbb;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            puStack_108 = (undefined4 *)0x80004003;
            iStack_10c = 0x58ffc9;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x14) = piVar6;
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x40);
          puStack_108 = (undefined4 *)0x58ffda;
          iVar3 = FUN_0040eed0();
          iVar2 = *(int *)(unaff_EBP + 0x10);
          puStack_108 = (undefined4 *)0x58ffe6;
          iVar5 = FUN_0040eea9();
          iStack_114 = *(int *)(unaff_EBP + -0x58);
          uStack_110 = *(int *)(unaff_EBP + -0x54);
          iStack_10c = *(int *)(unaff_EBP + -0x50);
          puStack_108 = *(undefined4 **)(unaff_EBP + -0x4c);
          iVar2 = (**(code **)(*piVar6 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x14),*(int *)(unaff_EBP + -0x5c) - iVar5,
                             iVar2 - iVar3,*(undefined4 *)(unaff_EBP + -0x10));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          if (0 < *(int *)(unaff_EBP + -0x60)) {
            *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0x5c);
            *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x60);
            do {
              FUN_004031b7(0xff,3);
              *(undefined1 *)(unaff_EBP + -4) = 0x3e;
              if ((*(int *)(unaff_EBP + -0x78) == 0) &&
                 (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x78) == 0)) {
                FUN_00878dfb(0x80004003);
              }
              if (*(int *)(unaff_EBP + -0x18) == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar6 = *(int **)(unaff_EBP + -0x18);
              *(int **)(unaff_EBP + -0x14) = piVar6;
              *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x78);
              iVar3 = FUN_0040eed0();
              iVar2 = *(int *)(unaff_EBP + 0x10);
              iVar5 = FUN_0040eea9();
              iVar2 = (**(code **)(*piVar6 + 0x80))
                                (*(undefined4 *)(unaff_EBP + -0x14),
                                 *(int *)(unaff_EBP + -0x68) - iVar5,iVar2 - iVar3,
                                 *(undefined4 *)(unaff_EBP + -0x1c),
                                 *(undefined4 *)(unaff_EBP + -0x90),
                                 *(undefined4 *)(unaff_EBP + -0x8c),
                                 *(undefined4 *)(unaff_EBP + -0x88),
                                 *(undefined4 *)(unaff_EBP + -0x84));
              if (iVar2 < 0) {
                FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x36;
              iVar2 = FUN_00402bc3(unaff_EBP + -0x90);
              if (iVar2 < 0) {
                FUN_00878dfb(iVar2);
              }
              *(int *)(unaff_EBP + -0x68) =
                   *(int *)(unaff_EBP + -0x68) + *(int *)(unaff_EBP + -0xa8);
              piVar6 = (int *)(unaff_EBP + -0x10);
              *piVar6 = *piVar6 + -1;
            } while (*piVar6 != 0);
          }
          FUN_004031b7(0xff,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          if ((*(int *)(unaff_EBP + -0x44) == 0) &&
             (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + -0x44) == 0)) {
            FUN_00878dfb(0x80004003);
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar6 = *(int **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x10) = piVar6;
          *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x44);
          iVar3 = FUN_0040eed0();
          iVar2 = *(int *)(unaff_EBP + 0x10);
          iVar5 = FUN_0040eea9();
          iVar2 = (**(code **)(*piVar6 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x10),
                             (*(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0xa4)) - iVar5,
                             iVar2 - iVar3,*(undefined4 *)(unaff_EBP + -0x1c),
                             *(undefined4 *)(unaff_EBP + -0xa0),*(undefined4 *)(unaff_EBP + -0x9c),
                             *(undefined4 *)(unaff_EBP + -0x98),*(undefined4 *)(unaff_EBP + -0x94));
          if (iVar2 < 0) {
            puStack_108 = (undefined4 *)&DAT_00963cc8;
            iStack_10c = *(int *)(unaff_EBP + -0x10);
            iStack_114 = 0x5901a0;
            uStack_110 = iVar2;
            FUN_00878e09();
          }
          puStack_108 = (undefined4 *)(unaff_EBP + -0xa0);
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          iStack_10c = 0x5901b0;
          puStack_108 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_108 < 0) {
            iStack_10c = 0x5901bb;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
          *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + -0x70);
        } while (*(uint *)(unaff_EBP + -0x34) < *(uint *)(unaff_EBP + -0xb8));
      }
      puStack_108 = (undefined4 *)0x3;
      iStack_10c = 0xff;
      uStack_110 = 0x5901e3;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      if (*(int *)(unaff_EBP + -0x2c) == 0) {
        puStack_108 = (undefined4 *)0x80004003;
        iStack_10c = 0x5901f8;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x2c) == 0) {
          puStack_108 = (undefined4 *)0x80004003;
          iStack_10c = 0x590204;
          FUN_00878dfb();
        }
      }
      iStack_10c = *(int *)(unaff_EBP + -0x2c);
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      uStack_110 = 0x590213;
      iVar2 = FUN_0040eed0();
      uStack_110 = *(int *)(unaff_EBP + -0x6c) - iVar2;
      iStack_114 = 0x590220;
      iStack_114 = FUN_0040eea9();
      iStack_114 = *(int *)(unaff_EBP + -0x5c) - iStack_114;
      FUN_004115d9();
      FUN_00470739();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_10c = 0x590242;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        iStack_10c = 0x59024d;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)0x3;
      iStack_10c = 0xff;
      uStack_110 = 0x590258;
      FUN_004295f1();
      iVar3 = *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0xa4);
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      iStack_10c = *(int *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      uStack_110 = 0x590274;
      FUN_004115d9();
      uStack_110 = 0x59027b;
      iVar2 = FUN_0040eed0();
      uStack_110 = *(int *)(unaff_EBP + -0x6c) - iVar2;
      iStack_114 = 0x590289;
      FUN_004115d9();
      iStack_114 = 0x590290;
      iStack_114 = FUN_0040eea9();
      iStack_114 = iVar3 - iStack_114;
      FUN_004115d9();
      FUN_00470739();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_10c = 0x5902b1;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        iStack_10c = 0x5902bc;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)0x3;
      iStack_10c = 0xff;
      uStack_110 = 0x5902c7;
      FUN_004295f1();
      iVar5 = *(int *)(unaff_EBP + -0x80) - *(int *)(unaff_EBP + -0x7c);
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      iStack_10c = *(int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      uStack_110 = 0x5902e0;
      FUN_004115d9();
      uStack_110 = 0x5902e7;
      iVar2 = FUN_0040eed0();
      uStack_110 = iVar5 - iVar2;
      iStack_114 = 0x5902f4;
      FUN_004115d9();
      iStack_114 = 0x5902fb;
      iStack_114 = FUN_0040eea9();
      iStack_114 = *(int *)(unaff_EBP + -0x5c) - iStack_114;
      FUN_004115d9();
      FUN_00470739();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_10c = 0x59031d;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        iStack_10c = 0x590328;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)0x3;
      iStack_10c = 0xff;
      uStack_110 = 0x590333;
      FUN_004295f1();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      iStack_10c = *(int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      uStack_110 = 0x590346;
      FUN_004115d9();
      uStack_110 = 0x59034d;
      iVar2 = FUN_0040eed0();
      uStack_110 = iVar5 - iVar2;
      iStack_114 = 0x590358;
      FUN_004115d9();
      iStack_114 = 0x59035f;
      iStack_114 = FUN_0040eea9();
      iStack_114 = iVar3 - iStack_114;
      FUN_004115d9();
      FUN_00470739();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_10c = 0x59037e;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        iStack_10c = 0x590389;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x74) = 0;
      puStack_108 = (undefined4 *)0x3af;
      iStack_10c = unaff_EBP + 0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      uStack_110 = 0x5903a5;
      puVar9 = (undefined4 *)FUN_00679d86();
      uStack_110 = *puVar9;
      puStack_108 = (undefined4 *)0x0;
      iStack_10c = unaff_EBP + -0x74;
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      iStack_114 = 0x5903b6;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      puStack_108 = (undefined4 *)0x5903c5;
      FUN_00402676();
      puStack_108 = &DAT_00980690;
      iStack_10c = 0x5903d6;
      FUN_00424aee();
      puStack_108 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      iStack_10c = 0x5903e3;
      FUN_00424aee();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x90);
      iStack_10c = unaff_EBP + -0x58;
      uStack_110 = *(undefined4 *)(unaff_EBP + -0x80);
      iStack_114 = *(int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_004115d9();
      FUN_0046ffc6();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      iStack_10c = 0x590414;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        iStack_10c = 0x59041f;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x90);
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      iStack_10c = 0x59042f;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        iStack_10c = 0x59043a;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)0x3;
      iStack_10c = 0xfd;
      uStack_110 = 0x590449;
      FUN_004295f1();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      iStack_10c = *(int *)(unaff_EBP + -0x18);
      uStack_110 = 0;
      iStack_114 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      FUN_004115d9();
      FUN_00470739();
      puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      iStack_10c = 0x590472;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        iStack_10c = 0x59047d;
        FUN_00878dfb();
      }
      if (*(uint *)(unaff_EBP + -0xb4) != 0) {
        *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + -0x6c) + 1;
        uVar12 = *(uint *)(unaff_EBP + -0xb4);
        do {
          iVar2 = *(int *)((-(uint)(uVar12 != 0) & uVar12 - 0x10) + 4);
          uVar11 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
          puStack_108 = &DAT_00980690;
          iStack_10c = 0x5904b8;
          FUN_00424aee();
          puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
          *(int **)(unaff_EBP + -0x1c) = &iStack_10c;
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          iStack_114 = 0x5904cc;
          uStack_110 = uVar12;
          FUN_004059fd();
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          uStack_110 = 0x5904d8;
          FUN_0044974c();
          uStack_110 = 0x5904df;
          uVar4 = FUN_00448ebb();
          *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
          puStack_108 = (undefined4 *)(unaff_EBP + -0x58);
          *(undefined1 *)(unaff_EBP + -4) = 0x44;
          iStack_10c = 0x5904ef;
          puStack_108 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_108 < 0) {
            iStack_10c = 0x5904fa;
            FUN_00878dfb();
          }
          puStack_108 = &DAT_00980690;
          iStack_10c = 0x590506;
          FUN_00424aee();
          puStack_108 = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          iStack_10c = 0x590516;
          FUN_00424aee();
          puStack_108 = (undefined4 *)(unaff_EBP + -0xa0);
          iStack_10c = unaff_EBP + -0x90;
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          uStack_110 = 0x590530;
          uStack_110 = FUN_00449749();
          *(int **)(unaff_EBP + -0x10) = &iStack_114;
          iStack_114 = extraout_ECX_09;
          FUN_004059fd(uVar12);
          uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
          iVar2 = (*(int *)(unaff_EBP + -0xac) - *(int *)(unaff_EBP + -0x1c)) / 2 +
                  *(int *)(unaff_EBP + -0x5c);
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          FUN_004115d9(iVar2,uVar4);
          FUN_00448e3a(iVar2,uVar4);
          puStack_108 = (undefined4 *)(unaff_EBP + -0x90);
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          iStack_10c = 0x590575;
          puStack_108 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_108 < 0) {
            iStack_10c = 0x590580;
            FUN_00878dfb();
          }
          puStack_108 = (undefined4 *)(unaff_EBP + -0xa0);
          *(undefined1 *)(unaff_EBP + -4) = 0x44;
          iStack_10c = 0x590590;
          puStack_108 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_108 < 0) {
            iStack_10c = 0x59059b;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + -0x70);
          uVar12 = uVar11;
        } while (uVar11 != 0);
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x74);
      iStack_10c = 0x5905b5;
      FUN_0046fc23();
      *(undefined4 *)(unaff_EBP + -0xc4) = 1;
      puStack_108 = (undefined4 *)0x5905c7;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x5905cf;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x5905d7;
      FUN_004497b5();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      *(undefined ***)(unaff_EBP + -0xc0) = &PTR_FUN_008e969c;
      puStack_108 = (undefined4 *)0x5905f0;
      FUN_0046ff8c();
      puStack_108 = (undefined4 *)0x5905f8;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590600;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590608;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590610;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590618;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590620;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590628;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590630;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590638;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590640;
      FUN_004125e6();
      puStack_108 = (undefined4 *)0x590648;
      FUN_00402fa6();
      puStack_108 = (undefined4 *)0x590650;
      FUN_004027eb();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return *(undefined4 *)(unaff_EBP + 8);
    }
    piVar6 = *(int **)(unaff_EBP + 0xc);
    if (piVar6 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar6;
    }
    puVar13 = (ushort *)(iVar2 + -2 + uVar12 * 2);
    while( true ) {
      if (piVar6 == (int *)0x0) {
        puVar10 = (ushort *)0x0;
      }
      else {
        puVar10 = (ushort *)*piVar6;
      }
      if (puVar13 < puVar10) goto LAB_0058fa70;
      puStack_dc = (undefined4 *)(uint)*puVar13;
      pwStack_e0 = u__0096470c;
      iStack_e4 = 0x58fa60;
      iVar2 = FUN_0087b57c();
      if (iVar2 == 0) break;
      piVar6 = *(int **)(unaff_EBP + 0xc);
      puVar13 = puVar13 + -1;
    }
    piVar6 = *(int **)(unaff_EBP + 0xc);
LAB_0058fa70:
    if (piVar6 == (int *)0x0) {
      iVar2 = 0;
      pwStack_e0 = (wchar_t *)0x0;
    }
    else {
      iVar2 = *piVar6;
      pwStack_e0 = (wchar_t *)*piVar6;
    }
    puStack_dc = (undefined4 *)(((int)puVar13 - iVar2 >> 1) + 1);
    iStack_e4 = 0x58fa90;
    uVar4 = FUN_00402df5();
    piVar6 = *(int **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    if (piVar6 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar6;
    }
    pwVar7 = (wchar_t *)(iVar2 + uVar12 * 2);
    wVar1 = *pwVar7;
    if (wVar1 != L'\0') {
      do {
        puStack_dc = (undefined4 *)(uint)(ushort)wVar1;
        pwStack_e0 = u__0096470c;
        iStack_e4 = 0x58fabb;
        iVar2 = FUN_0087b57c();
        if (iVar2 == 0) break;
        wVar1 = pwVar7[1];
        pwVar7 = pwVar7 + 1;
      } while (wVar1 != L'\0');
      piVar6 = *(int **)(unaff_EBP + 0xc);
    }
    if (piVar6 == (int *)0x0) {
      iVar2 = 0;
LAB_0058faea:
      uVar12 = 0;
    }
    else {
      iVar2 = *piVar6;
      if (*piVar6 == 0) goto LAB_0058faea;
      uVar12 = *(uint *)(*piVar6 + -4) >> 1;
    }
    puStack_dc = (undefined4 *)((int)((uVar12 * 2 - (int)pwVar7) + iVar2) >> 1);
    iStack_e4 = 0x58fafb;
    pwStack_e0 = pwVar7;
    pwVar7 = (wchar_t *)FUN_00402df5();
    puStack_dc = (undefined4 *)0x0;
    pwStack_e0 = *(wchar_t **)(unaff_EBP + -0x10);
    iStack_e4 = 0x58fb0b;
    FUN_00402ee6();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    puStack_dc = (undefined4 *)0x58fb1a;
    FUN_0046ff4e();
    puStack_dc = (undefined4 *)(unaff_EBP + 0x10);
    pwStack_e0 = (wchar_t *)0x58fb25;
    FUN_0045b2fc();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    puStack_dc = (undefined4 *)0x58fb31;
    FUN_00402fa6();
    puStack_dc = (undefined4 *)0x0;
    iStack_e4 = 0x58fb3b;
    pwStack_e0 = pwVar7;
    FUN_00402ee6();
    puStack_dc = (undefined4 *)(unaff_EBP + -0x28);
    pwStack_e0 = (wchar_t *)0x58fb47;
    FUN_00402f41();
    puStack_dc = (undefined4 *)0x58fb4f;
    FUN_00402fa6();
  } while( true );
}


