/* ptr_0046acff - 0x0046acff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0046acff(wchar_t *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  ushort *puVar9;
  int extraout_ECX_00;
  int unaff_EBX;
  uint uVar10;
  int unaff_EBP;
  uint uVar11;
  ushort *puVar12;
  int unaff_EDI;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  int iStack_4;
  
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(int *)(unaff_EBP + -0x48) = unaff_EBX;
  if (iVar2 != unaff_EBX) {
    param_2 = (undefined4 *)(unaff_EBP + -0x14);
    param_1 = 
    L"쌻੽윻ٴ\xe850\xe0b9@薍ｬ\xffff왐ﱅ\xe80a繱\xfff9쌻絙倆黨䃠匀兓쒋斉棔ն";
    param_2 = (undefined4 *)FUN_0041a581();
    if (((int)param_2 < unaff_EBX) && (param_2 != (undefined4 *)unaff_EDI)) {
      param_1 = L"薍ｬ\xffff왐ﱅ\xe80a繱\xfff9쌻絙倆黨䃠匀兓쒋斉棔ն";
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  param_1 = L"쌻絙倆黨䃠匀兓쒋斉棔ն";
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < unaff_EBX) {
    param_1 = (wchar_t *)0x46ad5d;
    FUN_00878dfb();
  }
  *(BADSPACEBASE **)(unaff_EBP + -0x2c) = register0x00000010;
  iStack_4 = 0x576;
  puStack_c = (undefined1 *)0x46ad72;
  FUN_00679e4e();
  iStack_4 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(int *)(unaff_EBP + -0x1c) = unaff_EBX;
  if (iVar2 != unaff_EBX) {
    param_2 = (undefined4 *)(unaff_EBP + -0x10);
    param_1 = (wchar_t *)0x46adaa;
    param_2 = (undefined4 *)FUN_0041a581();
    if (((int)param_2 < unaff_EBX) && (param_2 != (undefined4 *)unaff_EDI)) {
      param_1 = (wchar_t *)0x46adb8;
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  param_1 = L"쌻絙倆⯨䃠匀兓쒋斉棔ո";
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < unaff_EBX) {
    param_1 = (wchar_t *)0x46add0;
    FUN_00878dfb();
  }
  *(BADSPACEBASE **)(unaff_EBP + -0x2c) = register0x00000010;
  iStack_4 = 0x578;
  puStack_c = (undefined1 *)0x46ade5;
  FUN_00679e4e();
  iStack_4 = unaff_EBP + -0x94;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(int *)(unaff_EBP + -0x40) = unaff_EBX;
  if (iVar2 != unaff_EBX) {
    param_2 = (undefined4 *)(unaff_EBP + -0x14);
    param_1 = (wchar_t *)0x46ae20;
    param_2 = (undefined4 *)FUN_0041a581();
    if (((int)param_2 < unaff_EBX) && (param_2 != (undefined4 *)unaff_EDI)) {
      param_1 = L"薍ｬ\xffff왐ﱅ\xe812綅\xfff9쌻絙倆단䃟匀兓쒋斉棔չ";
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  param_1 = L"쌻絙倆단䃟匀兓쒋斉棔չ";
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < unaff_EBX) {
    param_1 = 
    L"卓譑规푥票\x05倀캋\xf0e8⃯贀鱅赐ᑍ䗆ዼ쿨亮诿\xe8c8騯\xfff9좋䗆ᓼ㓨濾㯿觃\xf045嶉璄贚\xf045赐葍\xebe8﫶㯿緃㬊瓇倆埨䃟贀鱅왐ﱅ\xe816紒\xfff9쌻絙倆㿨䃟匀兓쒋斉棔շ"
    ;
    FUN_00878dfb();
  }
  *(BADSPACEBASE **)(unaff_EBP + -0x2c) = register0x00000010;
  iStack_4 = 0x579;
  puStack_c = (undefined1 *)0x46ae5e;
  FUN_00679e4e();
  iStack_4 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(int *)(unaff_EBP + -0x7c) = unaff_EBX;
  if (iVar2 != unaff_EBX) {
    param_2 = (undefined4 *)(unaff_EBP + -0x10);
    param_1 = (wchar_t *)0x46ae96;
    param_2 = (undefined4 *)FUN_0041a581();
    if (((int)param_2 < unaff_EBX) && (param_2 != (undefined4 *)unaff_EDI)) {
      param_1 = (wchar_t *)0x46aea4;
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  param_1 = L"쌻絙倆㿨䃟匀兓쒋斉棔շ";
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < unaff_EBX) {
    param_1 = (wchar_t *)0x46aebc;
    FUN_00878dfb();
  }
  *(BADSPACEBASE **)(unaff_EBP + -0x2c) = register0x00000010;
  iStack_4 = 0x577;
  puStack_c = (undefined1 *)0x46aed1;
  FUN_00679e4e();
  iStack_4 = unaff_EBP + -0x94;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(int *)(unaff_EBP + -0x54) = unaff_EBX;
  if (iVar2 != unaff_EBX) {
    param_2 = (undefined4 *)(unaff_EBP + -0x14);
    param_1 = (wchar_t *)0x46af0c;
    param_2 = (undefined4 *)FUN_0041a581();
    if (((int)param_2 < unaff_EBX) && (param_2 != (undefined4 *)unaff_EDI)) {
      param_1 = L"薍ｬ\xffff왐ﱅ\xe81a粙\xfff9쌻絙倆웨䃞匀兓쒋斉棔պ";
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  param_1 = L"쌻絙倆웨䃞匀兓쒋斉棔պ";
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < unaff_EBX) {
    param_1 = 
    L"卓譑规푥穨\x05倀캋Ө⃯贀鱅赐ᑍ䗆᫼\xe3e8略诿\xe8c8饃\xfff9좋䗆᳼䣨旅㯿觃\xf045嶉瓐贚\xf045赐큍￨﫵㯿緃㬊瓇倆毨䃞贀鱅왐ﱅ\xe81e簦\xfff9쌻絙倆叨䃞匀兓쒋斉棔ջ"
    ;
    FUN_00878dfb();
  }
  *(BADSPACEBASE **)(unaff_EBP + -0x2c) = register0x00000010;
  iStack_4 = 0x57a;
  puStack_c = (undefined1 *)0x46af4a;
  FUN_00679e4e();
  iStack_4 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(int *)(unaff_EBP + -0x30) = unaff_EBX;
  if (iVar2 != unaff_EBX) {
    param_2 = (undefined4 *)(unaff_EBP + -0x10);
    param_1 = (wchar_t *)0x46af82;
    param_2 = (undefined4 *)FUN_0041a581();
    if (((int)param_2 < unaff_EBX) && (param_2 != (undefined4 *)unaff_EDI)) {
      param_1 = (wchar_t *)0x46af90;
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  param_1 = L"쌻絙倆叨䃞匀兓쒋斉棔ջ";
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < unaff_EBX) {
    param_1 = (wchar_t *)0x46afa8;
    FUN_00878dfb();
  }
  *(BADSPACEBASE **)(unaff_EBP + -0x2c) = register0x00000010;
  iStack_4 = 0x57b;
  puStack_c = (undefined1 *)0x46afbd;
  FUN_00679e4e();
  iStack_4 = unaff_EBP + -0x94;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(int *)(unaff_EBP + -0x50) = unaff_EBX;
  if (iVar2 != unaff_EBX) {
    param_2 = (undefined4 *)(unaff_EBP + -0x14);
    param_1 = (wchar_t *)0x46aff8;
    param_2 = (undefined4 *)FUN_0041a581();
    if (((int)param_2 < unaff_EBX) && (param_2 != (undefined4 *)unaff_EDI)) {
      param_1 = (wchar_t *)0x46b006;
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)(unaff_EBP + -0x94);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  param_1 = (wchar_t *)0x46b016;
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < unaff_EBX) {
    param_1 = 
    L"卓譑规푥籨\x05倀캋ᣨ⃮贀鱅赐ᑍ䗆⋼\xf7e8掠诿\xe8c8顗\xfff9좋䗆⓼峨廬㯿觃\xf045嶉瓠贚\xf045赐\xe04dᏨ﫵㯿緃㬊瓇倆翨䃝贀鱅왐ﱅ\xe826笺\xfff9쌻絙倆柨䃝匀兓쒋斉棔ս"
    ;
    FUN_00878dfb();
  }
  *(BADSPACEBASE **)(unaff_EBP + -0x2c) = register0x00000010;
  iStack_4 = 0x57c;
  puStack_c = (undefined1 *)0x46b036;
  FUN_00679e4e();
  iStack_4 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(int *)(unaff_EBP + -0x20) = unaff_EBX;
  if (iVar2 != unaff_EBX) {
    param_2 = (undefined4 *)(unaff_EBP + -0x10);
    param_1 = (wchar_t *)0x46b06e;
    param_2 = (undefined4 *)FUN_0041a581();
    if (((int)param_2 < unaff_EBX) && (param_2 != (undefined4 *)unaff_EDI)) {
      param_1 = (wchar_t *)0x46b07c;
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  param_1 = L"쌻絙倆柨䃝匀兓쒋斉棔ս";
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < unaff_EBX) {
    param_1 = (wchar_t *)0x46b094;
    FUN_00878dfb();
  }
  *(BADSPACEBASE **)(unaff_EBP + -0x2c) = register0x00000010;
  iStack_4 = 0x57d;
  puStack_c = (undefined1 *)0x46b0a9;
  FUN_00679e4e();
  iStack_4 = unaff_EBP + -0xdc;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xcc) = iVar2;
  *(int *)(unaff_EBP + -0x38) = unaff_EBX;
  if (iVar2 != unaff_EBX) {
    param_2 = (undefined4 *)(unaff_EBP + -0xcc);
    param_1 = (wchar_t *)0x46b0ea;
    param_2 = (undefined4 *)FUN_0041a581();
    if (((int)param_2 < unaff_EBX) && (param_2 != (undefined4 *)unaff_EDI)) {
      param_1 = (wchar_t *)0x46b0f8;
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)(unaff_EBP + -0xdc);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  param_1 = (wchar_t *)0x46b108;
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < unaff_EBX) {
    param_1 = (wchar_t *)0x46b113;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) == unaff_EBX) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b123;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x28) == unaff_EBX) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b12e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x28);
  param_2 = (undefined4 *)0x46b13c;
  iVar2 = FUN_0040eea9();
  param_2 = (undefined4 *)0x46b146;
  iVar3 = FUN_0040eea9();
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  if (*(int *)(unaff_EBP + -0x40) == unaff_EBX) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b157;
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b15f;
  iVar3 = FUN_0040eea9();
  *(int *)(unaff_EBP + -0x68) = iVar3;
  if (iVar3 <= iVar2) {
    *(int *)(unaff_EBP + -0x68) = iVar2;
  }
  if (*(int *)(unaff_EBP + -0x48) == unaff_EBX) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b174;
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b17c;
  uVar4 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -0xa8) = uVar4;
  if (*(int *)(unaff_EBP + -0x20) == unaff_EBX) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b18d;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x20) == unaff_EBX) {
      param_2 = (undefined4 *)0x80004003;
      param_1 = (wchar_t *)0x46b198;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + -0x1c) == unaff_EBX) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b1a6;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x1c);
  if (*(int *)(unaff_EBP + -0x1c) == unaff_EBX) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b1b6;
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b1c0;
  uVar4 = FUN_0040eea9();
  param_2 = (undefined4 *)0x46b1ca;
  iVar2 = FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  uVar11 = iVar2 - *(int *)(unaff_EBP + -0x10);
  param_2 = (undefined4 *)0x46b1db;
  iVar2 = FUN_0040eea9();
  param_2 = (undefined4 *)0x46b1e5;
  iVar3 = FUN_0040e48b();
  *(int *)(unaff_EBP + -0x24) = iVar3 - iVar2;
  if ((uint)(iVar3 - iVar2) <= uVar11) {
    *(uint *)(unaff_EBP + -0x24) = uVar11;
  }
  if (*(int *)(unaff_EBP + -0x54) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b1fd;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x54) == 0) {
      param_2 = (undefined4 *)0x80004003;
      param_1 = (wchar_t *)0x46b209;
      FUN_00878dfb();
    }
  }
  param_2 = (undefined4 *)0x46b213;
  iVar2 = FUN_0040e48b();
  param_2 = (undefined4 *)0x46b21c;
  iVar3 = FUN_0040eea9();
  *(int *)(unaff_EBP + -0x44) = iVar2 - iVar3;
  if ((uint)(iVar2 - iVar3) <= *(uint *)(unaff_EBP + -0x24)) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x24);
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b237;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b243;
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b24e;
  iVar2 = FUN_0040eed0();
  param_2 = (undefined4 *)0x46b257;
  iVar3 = FUN_0040eed0();
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  if (*(int *)(unaff_EBP + -0x48) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b26a;
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b272;
  iVar3 = FUN_0040eed0();
  *(int *)(unaff_EBP + -0x6c) = iVar3;
  if (iVar3 <= iVar2) {
    *(int *)(unaff_EBP + -0x6c) = iVar2;
  }
  if (*(int *)(unaff_EBP + -0x40) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b287;
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b28f;
  uVar4 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x74) = uVar4;
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b29d;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x38) == 0) {
      param_2 = (undefined4 *)0x80004003;
      param_1 = (wchar_t *)0x46b2a8;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + -0x50) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b2b6;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x50);
  if (*(int *)(unaff_EBP + -0x50) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b2c6;
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b2d0;
  uVar4 = FUN_0040eed0();
  param_2 = (undefined4 *)0x46b2da;
  iVar2 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  uVar11 = iVar2 - *(int *)(unaff_EBP + -0x10);
  param_2 = (undefined4 *)0x46b2eb;
  iVar2 = FUN_0040eed0();
  param_2 = (undefined4 *)0x46b2f5;
  iVar3 = FUN_0040e53d();
  *(int *)(unaff_EBP + -0x24) = iVar3 - iVar2;
  if ((uint)(iVar3 - iVar2) <= uVar11) {
    *(uint *)(unaff_EBP + -0x24) = uVar11;
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b30e;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      param_2 = (undefined4 *)0x80004003;
      param_1 = (wchar_t *)0x46b319;
      FUN_00878dfb();
    }
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b327;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b334;
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b33c;
  uVar4 = FUN_0040eed0();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  param_2 = (undefined4 *)0x46b348;
  iVar2 = FUN_0040e53d();
  uVar10 = iVar2 - *(int *)(unaff_EBP + -0x10);
  param_2 = (undefined4 *)0x46b356;
  iVar2 = FUN_0040eed0();
  param_2 = (undefined4 *)0x46b360;
  iVar3 = FUN_0040e53d();
  uVar11 = iVar3 - iVar2;
  if ((uint)(iVar3 - iVar2) < uVar10) {
    uVar11 = uVar10;
  }
  *(uint *)(unaff_EBP + -0x84) = uVar11;
  if (uVar11 <= *(uint *)(unaff_EBP + -0x24)) {
    *(uint *)(unaff_EBP + -0x84) = *(uint *)(unaff_EBP + -0x24);
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b388;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      param_2 = (undefined4 *)0x80004003;
      param_1 = (wchar_t *)0x46b393;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b3a4;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x20);
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b3b5;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x28);
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b3c5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = (wchar_t *)0x46b3d3;
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b3de;
  iVar2 = FUN_0040e53d();
  param_2 = (undefined4 *)0x46b3e8;
  iVar3 = FUN_0040eed0();
  param_2 = (undefined4 *)0x46b3f2;
  iVar5 = FUN_0040eed0();
  uVar10 = (iVar2 - iVar3) + iVar5;
  param_2 = (undefined4 *)0x46b3fb;
  uVar4 = FUN_0040eed0();
  param_2 = (undefined4 *)0x46b405;
  iVar3 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iVar2 = *(int *)(unaff_EBP + -0x10);
  param_2 = (undefined4 *)0x46b416;
  iVar5 = FUN_0040eed0();
  uVar11 = (iVar3 - iVar2) + iVar5;
  *(uint *)(unaff_EBP + -0x34) = uVar11;
  if (uVar11 <= uVar10) {
    *(uint *)(unaff_EBP + -0x34) = uVar10;
  }
  *(undefined4 *)(unaff_EBP + -0x4c) = 7;
  *(int *)(unaff_EBP + -0xac) = *(int *)(unaff_EBP + -0xa8) * 7;
  if (*(int *)(unaff_EBP + -0x38) == 0) {
    param_2 = (undefined4 *)0x80004003;
    param_1 = L"䶋\xe8c8〴\xfffa붉ｄ\xffff붉ｈ\xffff붉ｌ\xffff藇＼\xffff障\x8e綉梐ք";
    FUN_00878dfb();
  }
  param_2 = (undefined4 *)0x46b457;
  FUN_0040e48b();
  *(undefined4 *)(unaff_EBP + -0xbc) = 0;
  *(undefined4 *)(unaff_EBP + -0xb8) = 0;
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined ***)(unaff_EBP + -0xc4) = &PTR_FUN_008e969c;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  param_2 = (undefined4 *)0x584;
  param_1 = (wchar_t *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_00679d86();
  param_2 = (undefined4 *)0x0;
  param_1 = (wchar_t *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  iStack_4 = 0x46b4a0;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    param_2 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    param_1 = (wchar_t *)0x46b4b7;
    FUN_00403384();
  }
  param_2 = &DAT_00980690;
  param_1 = 
  L"薍｜\xffffｐၵ䗆⻼兖쒋斉樐倊쮋柨⃩贀遍䗆⻼姨﷢诿\xe8c8仿\xfffe薍｜\xffff왐ﱅ\xe82c皹\xfff9윻絙倆\xe6e8䃘栀ڐ\x98趍｜\xffff注良跿岅\xffff僿뗿ｔ\xffff䖍儌첋斉僔䗆ー루捻跿遍䗆ーﯨ﷡诿\xe8c8劎"
  ;
  FUN_00403191();
  param_2 = (undefined4 *)(unaff_EBP + -0xa4);
  param_1 = *(wchar_t **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  puStack_c = (undefined1 *)&iStack_4;
  *(int **)(unaff_EBP + 0x10) = &iStack_4;
  uStack_10 = 0x46b4e7;
  iStack_4 = extraout_ECX;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  FUN_0044974c();
  FUN_004503f9();
  param_2 = (undefined4 *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  param_1 = 
  L"윻絙倆\xe6e8䃘栀ڐ\x98趍｜\xffff注良跿岅\xffff僿뗿ｔ\xffff䖍儌첋斉僔䗆ー루捻跿遍䗆ーﯨ﷡诿\xe8c8劎"
  ;
  param_2 = (undefined4 *)FUN_00402bc3();
  if ((int)param_2 < 0) {
    param_1 = (wchar_t *)0x46b515;
    FUN_00878dfb();
  }
  do {
    param_2 = &DAT_00980690;
    param_1 = (wchar_t *)0x46b525;
    FUN_00403191();
    param_2 = (undefined4 *)(unaff_EBP + -0xa4);
    param_1 = *(wchar_t **)(unaff_EBP + -0xac);
    iStack_4 = unaff_EBP + 0xc;
    *(BADSPACEBASE **)(unaff_EBP + -0x2c) = register0x00000010;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_4 = 0x46b551;
    FUN_0044974c();
    iStack_4 = 0x46b558;
    uVar11 = FUN_004707e6();
    if ((*(int **)(unaff_EBP + 0xc) == (int *)0x0) ||
       (iVar2 = **(int **)(unaff_EBP + 0xc), iVar2 == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(iVar2 + -4) >> 1;
    }
    param_2 = (undefined4 *)(unaff_EBP + -0xa4);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    param_1 = 
    L"윻絙倆毨䃘萀࿛⒄\x01謀౅윻Ѵࢋ˫줳᲍贶ᥴ㯾瓇謄\xeb08㌂㯉狱༞ڷ桐䜌\x96듨䃿蔀姀瑙謇౅乎ퟫ䖋㬌瓇謄\xeb08㌂㯉瓇謄\xeb00㌂⯀퇱䛾偖﷨亮姿譙్켻䖉瓰謄\xeb01㌂跀ᠴ警昆윻≴뜏僀౨陇\xe800ｙ@삅奙୴晆䚋䘁㭦症诡్켻Ѵᆋ˫툳켻൴ঋ켻ݴ䆋퇼\xebe8㌂π⯀φ퇂僸\xe856瞒\xfff9奙ｗ\xf075䶍謐\xe8f0硳\xfff9趍＼\xffff䗆㋼쳨H贀၍譑\xe8c8ﱯ\xfffe䶍옐ﱅ\xe82c礍\xfff9噗䶍\xe8dc硃\xfff9䖍僜䶍\xe80c碒\xfff9䶍\xe8dc磯\xfff9姩\xfffe跿㲍\xffff\xe8ff䢇"
    ;
    param_2 = (undefined4 *)FUN_00402bc3();
    if ((int)param_2 < 0) {
      param_1 = (wchar_t *)0x46b590;
      FUN_00878dfb();
    }
    if (uVar10 <= uVar11) {
      param_2 = (undefined4 *)0x46b6c7;
      FUN_0046ff4e();
      param_2 = (undefined4 *)(unaff_EBP + 0xc);
      param_1 = (wchar_t *)0x46b6d2;
      FUN_0045b2fc();
      while (iVar2 = *(int *)(unaff_EBP + -0xbc),
            iVar2 * *(int *)(unaff_EBP + -0x74) < *(int *)(unaff_EBP + -0x34)) {
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x33;
        param_2 = (undefined4 *)0x46b6f5;
        FUN_0046ff4e();
        param_2 = (undefined4 *)(unaff_EBP + 0x10);
        param_1 = (wchar_t *)0x46b700;
        FUN_0045b2fc();
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        param_2 = (undefined4 *)0x46b70c;
        FUN_00402fa6();
      }
      if (iVar2 == 1) {
        param_2 = &DAT_00980690;
        param_1 = (wchar_t *)0x46b723;
        FUN_00403191();
        param_2 = (undefined4 *)(unaff_EBP + -0xa4);
        *(undefined1 **)(unaff_EBP + 0x10) = &stack0x00000004;
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        iStack_4 = 0x46b73d;
        FUN_004059fd();
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        FUN_0044974c();
        iVar2 = FUN_00448ebb();
        uVar11 = *(uint *)(unaff_EBP + -0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        *(uint *)(unaff_EBP + -0x4c) = (iVar2 + -1 + uVar11) / uVar11;
        param_2 = (undefined4 *)(unaff_EBP + -0xa4);
        param_1 = (wchar_t *)0x46b771;
        param_2 = (undefined4 *)FUN_00402bc3();
        if ((int)param_2 < 0) {
          param_1 = (wchar_t *)0x46b77c;
          FUN_00878dfb();
        }
        *(uint *)(unaff_EBP + -0x4c) = *(uint *)(unaff_EBP + -0x4c) | 1;
        *(uint *)(unaff_EBP + -0xac) = *(int *)(unaff_EBP + -0x4c) * uVar11;
        iVar2 = *(int *)(unaff_EBP + -0xbc);
      }
      iVar3 = *(int *)(unaff_EBP + -0x44);
      iVar5 = *(int *)(unaff_EBP + -0x68);
      *(int *)(unaff_EBP + 0x10) =
           iVar2 * *(int *)(unaff_EBP + -0x74) + *(int *)(unaff_EBP + -0x84) +
           *(int *)(unaff_EBP + -0x6c);
      iVar2 = *(int *)(unaff_EBP + -0xac) + iVar3 + iVar5;
      *(int *)(unaff_EBP + -0x2c) = iVar2;
      if (*(int *)(unaff_EBP + 0x18) == 0) {
        *(int *)(unaff_EBP + -0x24) = iVar2 - iVar3;
        iVar7 = *(int *)(unaff_EBP + -0xb0);
        *(int *)(iVar7 + 0x48) = (3 - ((iVar2 - iVar3) - iVar5) / 2) - iVar5;
        *(int *)(iVar7 + 0x4c) = -*(int *)(unaff_EBP + 0x10);
      }
      else {
        *(int *)(unaff_EBP + -0x24) = iVar2 - iVar3;
        iVar7 = *(int *)(unaff_EBP + -0xb0);
        *(int *)(iVar7 + 0x2c) = (3 - ((iVar2 - iVar3) - iVar5) / 2) - iVar5;
        *(int *)(iVar7 + 0x30) = -*(int *)(unaff_EBP + 0x10);
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      param_2 = (undefined4 *)0x3af;
      param_1 = (wchar_t *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      FUN_00679d86();
      param_2 = (undefined4 *)0x0;
      param_1 = (wchar_t *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iStack_4 = 0x46b832;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        param_2 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
        param_1 = 
        L"빙ڐ\x98赖沍\xffff\xe8ff礶\xfff9赖岍\xffff웿ﱅ\xe838礦\xfff9䖋㯨웇ﱅ甹栍䀃耀篨䃕謀\xe845\xec83謐跼沵\xffffꗿ讥ꔈ莥წﲋ痿贐岵\xffffꗿꖥ偓䖉ꗰ凿蔬緀栎㳈\x96痿僰䧨䃕贀岅\xffff僿䗆㣼\xf3e8沈藿姀ٽ\xe850픠@薍ｬ\xffff왐ﱅ\xe836狘\xfff9삅絙倆ר䃕茀챥茀둽ༀㆎ\x02謀둅⮙观뱅䖋톘뱽䖉櫄栃ÿ"
        ;
        FUN_00403384();
      }
      param_2 = &DAT_00980690;
      param_1 = 
      L"赖岍\xffff웿ﱅ\xe838礦\xfff9䖋㯨웇ﱅ甹栍䀃耀篨䃕謀\xe845\xec83謐跼沵\xffffꗿ讥ꔈ莥წﲋ痿贐岵\xffffꗿꖥ偓䖉ꗰ凿蔬緀栎㳈\x96痿僰䧨䃕贀岅\xffff僿䗆㣼\xf3e8沈藿姀ٽ\xe850픠@薍ｬ\xffff왐ﱅ\xe836狘\xfff9삅絙倆ר䃕茀챥茀둽ༀㆎ\x02謀둅⮙观뱅䖋톘뱽䖉櫄栃ÿ"
      ;
      FUN_00403191();
      param_2 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      param_1 = 
      L"䖋㯨웇ﱅ甹栍䀃耀篨䃕謀\xe845\xec83謐跼沵\xffffꗿ讥ꔈ莥წﲋ痿贐岵\xffffꗿꖥ偓䖉ꗰ凿蔬緀栎㳈\x96痿僰䧨䃕贀岅\xffff僿䗆㣼\xf3e8沈藿姀ٽ\xe850픠@薍ｬ\xffff왐ﱅ\xe836狘\xfff9삅絙倆ר䃕茀챥茀둽ༀㆎ\x02謀둅⮙观뱅䖋톘뱽䖉櫄栃ÿ"
      ;
      FUN_00403191();
      piStack_20 = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      if (piStack_20 == (int *)0x0) {
        param_2 = (undefined4 *)0x80004003;
        param_1 = (wchar_t *)0x46b880;
        FUN_00878dfb();
        piStack_20 = *(int **)(unaff_EBP + -0x18);
      }
      iStack_4 = *(int *)(unaff_EBP + -0x94);
      iVar3 = *piStack_20;
      param_1 = *(wchar_t **)(unaff_EBP + -0x8c);
      param_2 = *(undefined4 **)(unaff_EBP + -0x88);
      uStack_18 = *(undefined4 *)(unaff_EBP + 0x10);
      uStack_14 = *(undefined4 *)(unaff_EBP + -0xa4);
      uStack_10 = *(undefined4 *)(unaff_EBP + -0xa0);
      puStack_c = *(undefined1 **)(unaff_EBP + -0x9c);
      *(int **)(unaff_EBP + -0x10) = piStack_20;
      puStack_24 = (undefined *)0x46b8ae;
      iStack_1c = iVar2;
      iVar2 = (**(code **)(iVar3 + 0x2c))();
      if (iVar2 < 0) {
        puStack_24 = &DAT_00963cc8;
        uStack_28 = *(undefined4 *)(unaff_EBP + -0x10);
        uStack_30 = 0x46b8c0;
        iStack_2c = iVar2;
        FUN_00878e09();
      }
      puStack_24 = (undefined *)(unaff_EBP + -0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      uStack_28 = 0x46b8d0;
      puStack_24 = (undefined *)FUN_00402bc3();
      if ((int)puStack_24 < 0) {
        uStack_28 = 0x46b8db;
        FUN_00878dfb();
      }
      puStack_24 = (undefined *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      uStack_28 = 0x46b8eb;
      puStack_24 = (undefined *)FUN_00402bc3();
      if ((int)puStack_24 < 0) {
        uStack_28 = 0x46b8f6;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      if (0 < *(int *)(unaff_EBP + -0x4c)) {
        *(int *)(unaff_EBP + -0x44) =
             *(int *)(unaff_EBP + -0x4c) - (*(int *)(unaff_EBP + -0x4c) >> 0x1f);
        *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) >> 1;
        *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x68);
        do {
          puStack_24 = (undefined *)0x3;
          uStack_28 = 0xff;
          iStack_2c = 0x46b92d;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          if (*(int *)(unaff_EBP + -0x48) == 0) {
            puStack_24 = (undefined *)0x80004003;
            uStack_28 = 0x46b93e;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x48) == 0) {
              puStack_24 = (undefined *)0x80004003;
              uStack_28 = 0x46b949;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            puStack_24 = (undefined *)0x80004003;
            uStack_28 = 0x46b957;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x14) = piVar6;
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x48);
          puStack_24 = (undefined *)0x46b968;
          iVar3 = FUN_0040eed0();
          iVar2 = *(int *)(unaff_EBP + -0x6c);
          puStack_24 = (undefined *)0x46b974;
          iStack_3c = FUN_0040eea9();
          uStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
          iStack_3c = *(int *)(unaff_EBP + -0x3c) - iStack_3c;
          uStack_30 = *(undefined4 *)(unaff_EBP + -0x94);
          iStack_2c = *(int *)(unaff_EBP + -0x90);
          uStack_28 = *(undefined4 *)(unaff_EBP + -0x8c);
          uStack_40 = *(undefined4 *)(unaff_EBP + -0x14);
          puStack_24 = *(undefined **)(unaff_EBP + -0x88);
          puStack_44 = (undefined4 *)0x46b998;
          iStack_38 = iVar2 - iVar3;
          iVar2 = (**(code **)(*piVar6 + 0x80))();
          if (iVar2 < 0) {
            puStack_44 = (undefined4 *)&DAT_00963cc8;
            iStack_48 = *(int *)(unaff_EBP + -0x14);
            iStack_50 = 0x46b9aa;
            uStack_4c = iVar2;
            FUN_00878e09();
          }
          puStack_44 = (undefined4 *)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          iStack_48 = 0x46b9ba;
          puStack_44 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_44 < 0) {
            iStack_48 = 0x46b9c7;
            FUN_00878dfb();
          }
          puStack_44 = (undefined4 *)0x3;
          iStack_48 = 0xff;
          if (*(int *)(unaff_EBP + -0x34) == *(int *)(unaff_EBP + -0x44)) {
            uStack_4c = 0x46b9e5;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x3b;
            if (*(int *)(unaff_EBP + -0x38) == 0) {
              puStack_44 = (undefined4 *)0x80004003;
              iStack_48 = 0x46b9f9;
              FUN_00878dfb();
              if (*(int *)(unaff_EBP + -0x38) == 0) {
                puStack_44 = (undefined4 *)0x80004003;
                iStack_48 = 0x46ba04;
                FUN_00878dfb();
              }
            }
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              puStack_44 = (undefined4 *)0x80004003;
              iStack_48 = 0x46ba12;
              FUN_00878dfb();
            }
            piVar6 = *(int **)(unaff_EBP + -0x18);
            *(int **)(unaff_EBP + -0x14) = piVar6;
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
            puStack_44 = (undefined4 *)0x46ba23;
            iVar5 = FUN_0040eed0();
            iVar2 = *(int *)(unaff_EBP + 0x10);
            iVar3 = *(int *)(unaff_EBP + -0x84);
            puStack_44 = (undefined4 *)0x46ba35;
            iVar7 = FUN_0040eea9();
            iStack_50 = *(int *)(unaff_EBP + -0xa4);
            uStack_4c = *(int *)(unaff_EBP + -0xa0);
            iStack_48 = *(int *)(unaff_EBP + -0x9c);
            puStack_44 = *(undefined4 **)(unaff_EBP + -0x98);
            iVar2 = (**(code **)(*piVar6 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x14),
                               *(int *)(unaff_EBP + -0x3c) - iVar7,(iVar2 - iVar3) - iVar5,
                               *(undefined4 *)(unaff_EBP + -0x10));
            if (iVar2 < 0) {
              puStack_24 = &DAT_00963cc8;
              uStack_28 = *(undefined4 *)(unaff_EBP + -0x14);
              uStack_30 = 0x46ba6b;
              iStack_2c = iVar2;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            puStack_24 = (undefined *)(unaff_EBP + -0xa4);
          }
          else {
            uStack_4c = 0x46ba82;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x3c;
            if (*(int *)(unaff_EBP + -0x50) == 0) {
              puStack_44 = (undefined4 *)0x80004003;
              iStack_48 = 0x46ba96;
              FUN_00878dfb();
              if (*(int *)(unaff_EBP + -0x50) == 0) {
                puStack_44 = (undefined4 *)0x80004003;
                iStack_48 = 0x46baa1;
                FUN_00878dfb();
              }
            }
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              puStack_44 = (undefined4 *)0x80004003;
              iStack_48 = 0x46baaf;
              FUN_00878dfb();
            }
            piVar6 = *(int **)(unaff_EBP + -0x18);
            *(int **)(unaff_EBP + -0x14) = piVar6;
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x50);
            puStack_44 = (undefined4 *)0x46bac0;
            iVar5 = FUN_0040eed0();
            iVar2 = *(int *)(unaff_EBP + 0x10);
            iVar3 = *(int *)(unaff_EBP + -0x84);
            puStack_44 = (undefined4 *)0x46bad2;
            iVar7 = FUN_0040eea9();
            iStack_50 = *(int *)(unaff_EBP + -100);
            uStack_4c = *(int *)(unaff_EBP + -0x60);
            iStack_48 = *(int *)(unaff_EBP + -0x5c);
            puStack_44 = *(undefined4 **)(unaff_EBP + -0x58);
            iVar2 = (**(code **)(*piVar6 + 0x80))
                              (*(undefined4 *)(unaff_EBP + -0x14),
                               *(int *)(unaff_EBP + -0x3c) - iVar7,(iVar2 - iVar3) - iVar5,
                               *(undefined4 *)(unaff_EBP + -0x10));
            if (iVar2 < 0) {
              puStack_24 = &DAT_00963cc8;
              uStack_28 = *(undefined4 *)(unaff_EBP + -0x14);
              uStack_30 = 0x46bb05;
              iStack_2c = iVar2;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x36;
            puStack_24 = (undefined *)(unaff_EBP + -100);
          }
          uStack_28 = 0x46bb12;
          puStack_24 = (undefined *)FUN_00402bc3();
          if ((int)puStack_24 < 0) {
            uStack_28 = 0x46bb1d;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
          *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0xa8);
        } while (*(int *)(unaff_EBP + -0x34) < *(int *)(unaff_EBP + -0x4c));
      }
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      if (*(int *)(unaff_EBP + -0xbc) != 0) {
        *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x6c);
        do {
          puStack_24 = (undefined *)0x3;
          uStack_28 = 0xff;
          iStack_2c = 0x46bb60;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          if (*(int *)(unaff_EBP + -0x40) == 0) {
            puStack_24 = (undefined *)0x80004003;
            uStack_28 = 0x46bb71;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x40) == 0) {
              puStack_24 = (undefined *)0x80004003;
              uStack_28 = 0x46bb7c;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            puStack_24 = (undefined *)0x80004003;
            uStack_28 = 0x46bb8a;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x14) = piVar6;
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x40);
          puStack_24 = (undefined *)0x46bb9b;
          iVar3 = FUN_0040eed0();
          iVar2 = *(int *)(unaff_EBP + -0x3c);
          puStack_24 = (undefined *)0x46bba7;
          iStack_3c = FUN_0040eea9();
          uStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
          iStack_3c = *(int *)(unaff_EBP + -0x68) - iStack_3c;
          uStack_30 = *(undefined4 *)(unaff_EBP + -100);
          iStack_2c = *(int *)(unaff_EBP + -0x60);
          uStack_28 = *(undefined4 *)(unaff_EBP + -0x5c);
          uStack_40 = *(undefined4 *)(unaff_EBP + -0x14);
          puStack_24 = *(undefined **)(unaff_EBP + -0x58);
          puStack_44 = (undefined4 *)0x46bbc8;
          iStack_38 = iVar2 - iVar3;
          iVar2 = (**(code **)(*piVar6 + 0x80))();
          if (iVar2 < 0) {
            puStack_44 = (undefined4 *)&DAT_00963cc8;
            iStack_48 = *(int *)(unaff_EBP + -0x14);
            iStack_50 = 0x46bbda;
            uStack_4c = iVar2;
            FUN_00878e09();
          }
          puStack_44 = (undefined4 *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          iStack_48 = 0x46bbe7;
          puStack_44 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_44 < 0) {
            iStack_48 = 0x46bbf2;
            FUN_00878dfb();
          }
          if (0 < *(int *)(unaff_EBP + -0x4c)) {
            *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x68);
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x4c);
            do {
              puStack_44 = (undefined4 *)0x3;
              iStack_48 = 0xff;
              uStack_4c = 0x46bc1f;
              FUN_004031b7();
              *(undefined1 *)(unaff_EBP + -4) = 0x3e;
              if (*(int *)(unaff_EBP + -0x7c) == 0) {
                puStack_44 = (undefined4 *)0x80004003;
                iStack_48 = 0x46bc30;
                FUN_00878dfb();
                if (*(int *)(unaff_EBP + -0x7c) == 0) {
                  puStack_44 = (undefined4 *)0x80004003;
                  iStack_48 = 0x46bc3b;
                  FUN_00878dfb();
                }
              }
              if (*(int *)(unaff_EBP + -0x18) == 0) {
                puStack_44 = (undefined4 *)0x80004003;
                iStack_48 = 0x46bc49;
                FUN_00878dfb();
              }
              piVar6 = *(int **)(unaff_EBP + -0x18);
              *(int **)(unaff_EBP + -0x14) = piVar6;
              *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x7c);
              puStack_44 = (undefined4 *)0x46bc5a;
              iVar3 = FUN_0040eed0();
              iVar2 = *(int *)(unaff_EBP + -0x3c);
              puStack_44 = (undefined4 *)0x46bc66;
              iVar5 = FUN_0040eea9();
              iStack_50 = *(int *)(unaff_EBP + -0x94);
              uStack_4c = *(int *)(unaff_EBP + -0x90);
              iStack_48 = *(int *)(unaff_EBP + -0x8c);
              puStack_44 = *(undefined4 **)(unaff_EBP + -0x88);
              iVar2 = (**(code **)(*piVar6 + 0x80))
                                (*(undefined4 *)(unaff_EBP + -0x14),
                                 *(int *)(unaff_EBP + -0x44) - iVar5,iVar2 - iVar3,
                                 *(undefined4 *)(unaff_EBP + -0x80));
              if (iVar2 < 0) {
                puStack_44 = (undefined4 *)&DAT_00963cc8;
                iStack_48 = *(int *)(unaff_EBP + -0x14);
                iStack_50 = 0x46bc9c;
                uStack_4c = iVar2;
                FUN_00878e09();
              }
              puStack_44 = (undefined4 *)(unaff_EBP + -0x94);
              *(undefined1 *)(unaff_EBP + -4) = 0x36;
              iStack_48 = 0x46bcac;
              puStack_44 = (undefined4 *)FUN_00402bc3();
              if ((int)puStack_44 < 0) {
                iStack_48 = 0x46bcb7;
                FUN_00878dfb();
              }
              *(int *)(unaff_EBP + -0x44) =
                   *(int *)(unaff_EBP + -0x44) + *(int *)(unaff_EBP + -0xa8);
              piVar6 = (int *)(unaff_EBP + -0x10);
              *piVar6 = *piVar6 + -1;
            } while (*piVar6 != 0);
          }
          puStack_44 = (undefined4 *)0x3;
          iStack_48 = 0xff;
          uStack_4c = 0x46bcdb;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          if (*(int *)(unaff_EBP + -0x54) == 0) {
            puStack_44 = (undefined4 *)0x80004003;
            iStack_48 = 0x46bcf1;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + -0x54) == 0) {
              puStack_44 = (undefined4 *)0x80004003;
              iStack_48 = 0x46bcfc;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            puStack_44 = (undefined4 *)0x80004003;
            iStack_48 = 0x46bd0a;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x10) = piVar6;
          *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x54);
          puStack_44 = (undefined4 *)0x46bd1b;
          iVar3 = FUN_0040eed0();
          iVar2 = *(int *)(unaff_EBP + -0x3c);
          puStack_44 = (undefined4 *)0x46bd27;
          iVar5 = FUN_0040eea9();
          iStack_50 = *(int *)(unaff_EBP + -0xa4);
          uStack_4c = *(int *)(unaff_EBP + -0xa0);
          iStack_48 = *(int *)(unaff_EBP + -0x9c);
          puStack_44 = *(undefined4 **)(unaff_EBP + -0x98);
          iVar2 = (**(code **)(*piVar6 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + -0x24) - iVar5,
                             iVar2 - iVar3,*(undefined4 *)(unaff_EBP + -0x80));
          if (iVar2 < 0) {
            puStack_24 = &DAT_00963cc8;
            uStack_28 = *(undefined4 *)(unaff_EBP + -0x10);
            uStack_30 = 0x46bd5d;
            iStack_2c = iVar2;
            FUN_00878e09();
          }
          puStack_24 = (undefined *)(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
          uStack_28 = 0x46bd6d;
          puStack_24 = (undefined *)FUN_00402bc3();
          if ((int)puStack_24 < 0) {
            uStack_28 = 0x46bd78;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
          *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x74);
        } while (*(uint *)(unaff_EBP + -0x34) < *(uint *)(unaff_EBP + -0xbc));
      }
      puStack_24 = (undefined *)0x3;
      uStack_28 = 0xff;
      iStack_2c = 0x46bda4;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x40;
      if (*(int *)(unaff_EBP + -0x28) == 0) {
        puStack_24 = (undefined *)0x80004003;
        uStack_28 = 0x46bdb5;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          puStack_24 = (undefined *)0x80004003;
          uStack_28 = 0x46bdc0;
          FUN_00878dfb();
        }
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_24 = (undefined *)0x80004003;
        uStack_28 = 0x46bdce;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + -0x18);
      *(int **)(unaff_EBP + -0x10) = piVar6;
      *(undefined4 *)(unaff_EBP + -0x80) = *(undefined4 *)(unaff_EBP + -0x28);
      puStack_24 = (undefined *)0x46bddf;
      iVar3 = FUN_0040eed0();
      iVar2 = *(int *)(unaff_EBP + -0x6c);
      puStack_24 = (undefined *)0x46bdeb;
      iStack_3c = FUN_0040eea9();
      uStack_34 = *(undefined4 *)(unaff_EBP + -0x80);
      iStack_3c = *(int *)(unaff_EBP + -0x68) - iStack_3c;
      uStack_30 = *(undefined4 *)(unaff_EBP + -100);
      iStack_2c = *(undefined4 *)(unaff_EBP + -0x60);
      uStack_28 = *(undefined4 *)(unaff_EBP + -0x5c);
      uStack_40 = *(undefined4 *)(unaff_EBP + -0x10);
      puStack_24 = *(undefined **)(unaff_EBP + -0x58);
      puStack_44 = (undefined4 *)0x46be0c;
      iStack_38 = iVar2 - iVar3;
      iVar2 = (**(code **)(*piVar6 + 0x80))();
      if (iVar2 < 0) {
        puStack_44 = (undefined4 *)&DAT_00963cc8;
        iStack_48 = *(int *)(unaff_EBP + -0x10);
        iStack_50 = 0x46be1e;
        uStack_4c = iVar2;
        FUN_00878e09();
      }
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_48 = 0x46be2b;
      puStack_44 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_44 < 0) {
        iStack_48 = 0x46be36;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x3;
      iStack_48 = 0xff;
      uStack_4c = 0x46be46;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        puStack_44 = (undefined4 *)0x80004003;
        iStack_48 = 0x46be5a;
        FUN_00878dfb();
      }
      iStack_48 = *(int *)(unaff_EBP + -0x1c);
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      uStack_4c = 0x46be67;
      iVar2 = FUN_0040eed0();
      uStack_4c = *(int *)(unaff_EBP + -0x6c) - iVar2;
      iStack_50 = 0x46be75;
      FUN_004115d9();
      iStack_50 = 0x46be7c;
      iStack_50 = FUN_0040eea9();
      iVar2 = *(int *)(unaff_EBP + -0x24);
      iStack_50 = iVar2 - iStack_50;
      FUN_004115d9();
      FUN_00470739();
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_48 = 0x46bea0;
      puStack_44 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_44 < 0) {
        iStack_48 = 0x46beab;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x3;
      iStack_48 = 0xff;
      uStack_4c = 0x46beb6;
      FUN_004295f1();
      iVar5 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + -0x84);
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      iStack_48 = *(int *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      uStack_4c = 0x46bed2;
      FUN_004115d9();
      uStack_4c = 0x46bed9;
      iVar3 = FUN_0040eed0();
      uStack_4c = iVar5 - iVar3;
      iStack_50 = 0x46bee6;
      FUN_004115d9();
      iStack_50 = 0x46beed;
      iStack_50 = FUN_0040eea9();
      iStack_50 = *(int *)(unaff_EBP + -0x68) - iStack_50;
      FUN_004115d9();
      FUN_00470739();
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_48 = 0x46bf0f;
      puStack_44 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_44 < 0) {
        iStack_48 = 0x46bf1a;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x3;
      iStack_48 = 0xff;
      uStack_4c = 0x46bf25;
      FUN_004295f1();
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      iStack_48 = *(int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      uStack_4c = 0x46bf38;
      FUN_004115d9();
      uStack_4c = 0x46bf3f;
      iVar3 = FUN_0040eed0();
      uStack_4c = iVar5 - iVar3;
      iStack_50 = 0x46bf4a;
      FUN_004115d9();
      iStack_50 = 0x46bf51;
      iStack_50 = FUN_0040eea9();
      iStack_50 = iVar2 - iStack_50;
      FUN_004115d9();
      FUN_00470739();
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_48 = 0x46bf72;
      puStack_44 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_44 < 0) {
        iStack_48 = 0x46bf7d;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x18) != 0) {
        puStack_44 = (undefined4 *)0x46bf8c;
        FUN_004115d9();
        puStack_44 = (undefined4 *)0x46bf93;
        iVar5 = FUN_0040eea9();
        iVar3 = *(int *)(unaff_EBP + -0xb0);
        *(int *)(iVar3 + 0x34) = (iVar2 - iVar5) + 2;
        puStack_44 = (undefined4 *)0x46bfa8;
        FUN_004115d9();
        puStack_44 = (undefined4 *)0x46bfaf;
        iVar2 = FUN_0040eed0();
        *(int *)(iVar3 + 0x38) = (*(int *)(unaff_EBP + -0x6c) - iVar2) + 4;
      }
      *(undefined4 *)(unaff_EBP + -0x78) = 0;
      puStack_44 = (undefined4 *)0x3af;
      iStack_48 = unaff_EBP + 0x18;
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      uStack_4c = 0x46bfd4;
      puVar8 = (undefined4 *)FUN_00679d86();
      uStack_4c = *puVar8;
      puStack_44 = (undefined4 *)0x0;
      iStack_48 = unaff_EBP + -0x78;
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      iStack_50 = 0x46bfe5;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      puStack_44 = (undefined4 *)0x46bff4;
      FUN_00402676();
      puStack_44 = &DAT_00980690;
      iStack_48 = 0x46c005;
      FUN_00424aee();
      puStack_44 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      iStack_48 = 0x46c012;
      FUN_00424aee();
      puStack_44 = (undefined4 *)(unaff_EBP + -0x94);
      iStack_48 = unaff_EBP + -100;
      uStack_4c = *(undefined4 *)(unaff_EBP + 0x10);
      iStack_50 = *(int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_004115d9();
      FUN_0046ffc6();
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      iStack_48 = 0x46c043;
      puStack_44 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_44 < 0) {
        iStack_48 = 0x46c04e;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      iStack_48 = 0x46c05e;
      puStack_44 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_44 < 0) {
        iStack_48 = 0x46c069;
        FUN_00878dfb();
      }
      puStack_44 = (undefined4 *)0x3;
      iStack_48 = 0xfd;
      uStack_4c = 0x46c078;
      FUN_004295f1();
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      iStack_48 = *(int *)(unaff_EBP + -0x18);
      uStack_4c = 0;
      iStack_50 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x48;
      FUN_004115d9();
      FUN_00470739();
      puStack_44 = (undefined4 *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 0x44;
      iStack_48 = 0x46c0a1;
      puStack_44 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_44 < 0) {
        iStack_48 = 0x46c0ac;
        FUN_00878dfb();
      }
      if (*(uint *)(unaff_EBP + -0xb8) != 0) {
        *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + -0x6c) + -1;
        uVar11 = *(uint *)(unaff_EBP + -0xb8);
        do {
          iVar2 = *(int *)((-(uint)(uVar11 != 0) & uVar11 - 0x10) + 4);
          uVar10 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
          puStack_44 = &DAT_00980690;
          iStack_48 = 0x46c0e7;
          FUN_00424aee();
          puStack_44 = (undefined4 *)(unaff_EBP + -100);
          *(int **)(unaff_EBP + 0x10) = &iStack_48;
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          iStack_50 = 0x46c0fb;
          uStack_4c = uVar11;
          FUN_004059fd();
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          uStack_4c = 0x46c107;
          FUN_0044974c();
          uStack_4c = 0x46c10e;
          uVar4 = FUN_00448ebb();
          *(undefined4 *)(unaff_EBP + 0x10) = uVar4;
          puStack_44 = (undefined4 *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0x44;
          iStack_48 = 0x46c11e;
          puStack_44 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_44 < 0) {
            iStack_48 = 0x46c129;
            FUN_00878dfb();
          }
          puStack_44 = &DAT_00980690;
          iStack_48 = 0x46c135;
          FUN_00424aee();
          puStack_44 = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          iStack_48 = 0x46c145;
          FUN_00424aee();
          puStack_44 = (undefined4 *)(unaff_EBP + -0xa4);
          iStack_48 = unaff_EBP + -0x94;
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          uStack_4c = 0x46c15f;
          uStack_4c = FUN_00449749();
          *(int **)(unaff_EBP + -0x2c) = &iStack_50;
          iStack_50 = extraout_ECX_00;
          FUN_004059fd(uVar11);
          uVar4 = *(undefined4 *)(unaff_EBP + 0x18);
          iVar2 = (*(int *)(unaff_EBP + -0xac) - *(int *)(unaff_EBP + 0x10)) / 2 +
                  *(int *)(unaff_EBP + -0x68);
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          FUN_004115d9(iVar2,uVar4);
          FUN_00448e3a(iVar2,uVar4);
          puStack_44 = (undefined4 *)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0x4b;
          iStack_48 = 0x46c1a4;
          puStack_44 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_44 < 0) {
            iStack_48 = 0x46c1af;
            FUN_00878dfb();
          }
          puStack_44 = (undefined4 *)(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 0x44;
          iStack_48 = 0x46c1bf;
          puStack_44 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_44 < 0) {
            iStack_48 = 0x46c1ca;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + -0x74);
          uVar11 = uVar10;
        } while (uVar10 != 0);
      }
      puStack_44 = (undefined4 *)(unaff_EBP + -0x78);
      iStack_48 = 0x46c1e4;
      FUN_0046fc23();
      *(undefined4 *)(unaff_EBP + -200) = 1;
      puStack_44 = (undefined4 *)0x46c1f6;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c1fe;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c206;
      FUN_004497b5();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      *(undefined ***)(unaff_EBP + -0xc4) = &PTR_FUN_008e969c;
      puStack_44 = (undefined4 *)0x46c21f;
      FUN_0046ff8c();
      puStack_44 = (undefined4 *)0x46c227;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c22f;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c237;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c23f;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c247;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c24f;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c257;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c25f;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c267;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c26f;
      FUN_004125e6();
      puStack_44 = (undefined4 *)0x46c277;
      FUN_00402fa6();
      puStack_44 = (undefined4 *)0x46c27f;
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
    puVar12 = (ushort *)(iVar2 + -2 + uVar11 * 2);
    while( true ) {
      if (piVar6 == (int *)0x0) {
        puVar9 = (ushort *)0x0;
      }
      else {
        puVar9 = (ushort *)*piVar6;
      }
      if (puVar12 < puVar9) goto LAB_0046b5d8;
      param_2 = (undefined4 *)(uint)*puVar12;
      param_1 = u__0096470c;
      iVar2 = FUN_0087b57c();
      if (iVar2 == 0) break;
      piVar6 = *(int **)(unaff_EBP + 0xc);
      puVar12 = puVar12 + -1;
    }
    piVar6 = *(int **)(unaff_EBP + 0xc);
LAB_0046b5d8:
    if (piVar6 == (int *)0x0) {
      iVar2 = 0;
      param_1 = (wchar_t *)0x0;
    }
    else {
      iVar2 = *piVar6;
      param_1 = (wchar_t *)*piVar6;
    }
    param_2 = (undefined4 *)(((int)puVar12 - iVar2 >> 1) + 1);
    uVar4 = FUN_00402df5();
    piVar6 = *(int **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    if (piVar6 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar6;
    }
    puVar12 = (ushort *)(iVar2 + uVar11 * 2);
    uVar1 = *puVar12;
    if (uVar1 != 0) {
      do {
        param_2 = (undefined4 *)(uint)uVar1;
        param_1 = u__0096470c;
        iVar2 = FUN_0087b57c();
        if (iVar2 == 0) break;
        uVar1 = puVar12[1];
        puVar12 = puVar12 + 1;
      } while (uVar1 != 0);
      piVar6 = *(int **)(unaff_EBP + 0xc);
    }
    if (piVar6 == (int *)0x0) {
      iVar2 = 0;
LAB_0046b652:
      uVar11 = 0;
    }
    else {
      iVar2 = *piVar6;
      if (*piVar6 == 0) goto LAB_0046b652;
      uVar11 = *(uint *)(*piVar6 + -4) >> 1;
    }
    param_2 = (undefined4 *)((int)((uVar11 * 2 - (int)puVar12) + iVar2) >> 1);
    param_1 = (wchar_t *)puVar12;
    uVar4 = FUN_00402df5();
    param_2 = (undefined4 *)0x0;
    param_1 = *(wchar_t **)(unaff_EBP + -0x10);
    FUN_00402ee6();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    param_2 = (undefined4 *)0x46b682;
    FUN_0046ff4e();
    param_2 = (undefined4 *)(unaff_EBP + 0x10);
    param_1 = 
    L"䶍옐ﱅ\xe82c礍\xfff9噗䶍\xe8dc硃\xfff9䖍僜䶍\xe80c碒\xfff9䶍\xe8dc磯\xfff9姩\xfffe跿㲍\xffff\xe8ff䢇"
    ;
    FUN_0045b2fc();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    param_2 = (undefined4 *)0x46b699;
    FUN_00402fa6();
    param_2 = (undefined4 *)0x0;
    param_1 = (wchar_t *)uVar4;
    FUN_00402ee6();
    param_2 = (undefined4 *)(unaff_EBP + -0x24);
    param_1 = L"䶍\xe8dc磯\xfff9姩\xfffe跿㲍\xffff\xe8ff䢇";
    FUN_00402f41();
    param_2 = (undefined4 *)0x46b6b7;
    FUN_00402fa6();
  } while( true );
}


