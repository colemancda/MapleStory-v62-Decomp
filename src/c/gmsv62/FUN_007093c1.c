/* FUN_007093c1 - 0x007093c1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0070994d) */

undefined4 * FUN_007093c1(void)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  wchar_t *pwVar5;
  int unaff_EBP;
  undefined1 *puStack_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  int iStack_e8;
  wchar_t *pwStack_e4;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x50) = extraout_ECX;
  pwStack_e4 = (wchar_t *)0x0;
  iStack_e8 = 0;
  puStack_ec = (undefined1 *)0x1;
  puStack_f0 = (undefined1 *)0xffffffff;
  puStack_f4 = (undefined1 *)0xffffffff;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00789e42(0x11,0);
  extraout_ECX[0x160] = 0xffffffff;
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x15f] = 0;
  extraout_ECX[0x161] = 0;
  extraout_ECX[0x162] = 0;
  extraout_ECX[0x163] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x165] = *(undefined4 *)(unaff_EBP + 0x14);
  pwStack_e4 = (wchar_t *)0x70942a;
  FUN_0070b284();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  extraout_ECX[0x167] = *(undefined4 *)(unaff_EBP + 0xc);
  pwStack_e4 = (wchar_t *)0x70943f;
  FUN_0070b234();
  pwStack_e4 = (wchar_t *)&DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *extraout_ECX = &PTR_FUN_008f0828;
  extraout_ECX[1] = &PTR_FUN_008f07dc;
  extraout_ECX[2] = &PTR_FUN_008f07d8;
  iStack_e8 = 0x709468;
  FUN_00403191();
  pwStack_e4 = (wchar_t *)&DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_e8 = 0x709475;
  FUN_00403191();
  pwStack_e4 = (wchar_t *)0x0;
  iStack_e8 = 0;
  puStack_ec = (undefined1 *)(unaff_EBP + -0x90);
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x80);
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_f4;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00679e4e(&puStack_f4,0xc52);
  iVar1 = unaff_EBP + -0xe0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puStack_ec = (undefined1 *)0x7094c5;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x34) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    pwStack_e4 = (wchar_t *)(unaff_EBP + -0x34);
    iStack_e8 = 0x7094db;
    pwStack_e4 = (wchar_t *)FUN_00404b30();
    if (((int)pwStack_e4 < 0) && (pwStack_e4 != (wchar_t *)0x80004002)) {
      iStack_e8 = 0x7094ec;
      FUN_00878dfb();
    }
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0xe0);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_e8 = 0x7094fc;
  pwStack_e4 = (wchar_t *)FUN_00402bc3();
  if ((int)pwStack_e4 < 0) {
    iStack_e8 = 0x709507;
    FUN_00878dfb();
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_e8 = 0x709514;
  pwStack_e4 = (wchar_t *)FUN_00402bc3();
  if ((int)pwStack_e4 < 0) {
    iStack_e8 = 0x70951f;
    FUN_00878dfb();
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_e8 = 0x70952f;
  pwStack_e4 = (wchar_t *)FUN_00402bc3();
  if ((int)pwStack_e4 < 0) {
    iStack_e8 = 0x70953a;
    FUN_00878dfb();
  }
  pwStack_e4 = L"쒋卓赐邎\x05\xe800ᱥ";
  FUN_0087a1b0();
  pwStack_e4 = (wchar_t *)0x0;
  iStack_e8 = 0;
  puStack_f0 = (undefined1 *)0x709552;
  puStack_ec = &stack0xffffff20;
  puVar2 = (ushort *)FUN_0070b1b7();
  puStack_f0 = (undefined1 *)(uint)*puVar2;
  puStack_f4 = (undefined1 *)0x70955b;
  puStack_f0 = (undefined1 *)FUN_00412335();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_ec;
  puStack_f4 = (undefined1 *)0x709567;
  FUN_004033a1();
  puStack_f0 = (undefined1 *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_f4 = (undefined1 *)0x70957a;
  FUN_0040263d();
  puStack_f4 = (undefined1 *)0x709581;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_ec = (undefined1 *)0x70958c;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x30) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar1 != 0) {
    pwStack_e4 = (wchar_t *)(unaff_EBP + -0x30);
    iStack_e8 = 0x7095a2;
    pwStack_e4 = (wchar_t *)FUN_00404b30();
    if (((int)pwStack_e4 < 0) && (pwStack_e4 != (wchar_t *)0x80004002)) {
      iStack_e8 = 0x7095b3;
      FUN_00878dfb();
    }
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0xa0);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_e8 = 0x7095c3;
  iVar1 = FUN_00402bc3();
  iStack_e8 = (int)pwStack_e4;
  if (iVar1 < 0) {
    iStack_e8 = 0x7095ce;
    pwStack_e4 = (wchar_t *)iVar1;
    FUN_00878dfb();
    iStack_e8 = extraout_ECX_00;
  }
  pwStack_e4 = u_default_0096b498;
  puStack_f0 = (undefined1 *)&iStack_e8;
  *(int **)(unaff_EBP + -0x10) = &iStack_e8;
  puStack_ec = (undefined1 *)0xf9d;
  puStack_f4 = (undefined1 *)0x7095e9;
  FUN_00679e4e();
  puStack_ec = (undefined1 *)(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_f0 = (undefined1 *)0x7095fc;
  FUN_0040263d();
  puStack_f0 = (undefined1 *)0x709603;
  iStack_e8 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  puStack_ec = (undefined1 *)0x70960d;
  iStack_e8 = FUN_004343c5();
  pwStack_e4 = (wchar_t *)0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  puStack_ec = (undefined1 *)0x70961d;
  FUN_004184ca();
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_e8 = 0x70962d;
  pwStack_e4 = (wchar_t *)FUN_00402bc3();
  if ((int)pwStack_e4 < 0) {
    iStack_e8 = 0x709638;
    FUN_00878dfb();
  }
  pwStack_e4 = (wchar_t *)&DAT_00980690;
  iStack_e8 = 0x709641;
  FUN_00403191();
  pwStack_e4 = (wchar_t *)&DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_e8 = 0x70964e;
  FUN_00403191();
  pwStack_e4 = (wchar_t *)0x0;
  iStack_e8 = 0;
  puStack_ec = (undefined1 *)(unaff_EBP + -0x70);
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x60);
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_f4;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00679e4e(&puStack_f4,0xf9e);
  iVar1 = unaff_EBP + -0xb0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_ec = (undefined1 *)0x70969d;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x38) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar1 != 0) {
    pwStack_e4 = (wchar_t *)(unaff_EBP + -0x38);
    iStack_e8 = 0x7096b3;
    pwStack_e4 = (wchar_t *)FUN_00404b30();
    if (((int)pwStack_e4 < 0) && (pwStack_e4 != (wchar_t *)0x80004002)) {
      iStack_e8 = 0x7096c4;
      FUN_00878dfb();
    }
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iStack_e8 = 0x7096d4;
  pwStack_e4 = (wchar_t *)FUN_00402bc3();
  if ((int)pwStack_e4 < 0) {
    iStack_e8 = 0x7096df;
    FUN_00878dfb();
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_e8 = 0x7096ec;
  pwStack_e4 = (wchar_t *)FUN_00402bc3();
  if ((int)pwStack_e4 < 0) {
    iStack_e8 = 0x7096f7;
    FUN_00878dfb();
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_e8 = 0x709704;
  iVar1 = FUN_00402bc3();
  pwVar5 = pwStack_e4;
  if (iVar1 < 0) {
    iStack_e8 = 0x70970f;
    pwStack_e4 = (wchar_t *)iVar1;
    FUN_00878dfb();
    pwVar5 = (wchar_t *)extraout_ECX_01;
  }
  pwStack_e4 = (wchar_t *)0x0;
  iStack_e8 = 0;
  puStack_f4 = (undefined1 *)&puStack_ec;
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_ec;
  puStack_f0 = (undefined1 *)0xfa1;
  puStack_ec = (undefined1 *)pwVar5;
  FUN_00679e4e();
  puStack_f0 = (undefined1 *)(unaff_EBP + -0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  puStack_f4 = (undefined1 *)0x709737;
  FUN_0040263d();
  puStack_f4 = (undefined1 *)0x70973e;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  puStack_ec = (undefined1 *)0x709749;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar1 != 0) {
    pwStack_e4 = (wchar_t *)(unaff_EBP + -0x3c);
    iStack_e8 = 0x70975f;
    pwStack_e4 = (wchar_t *)FUN_00404b30();
    if (((int)pwStack_e4 < 0) && (pwStack_e4 != (wchar_t *)0x80004002)) {
      iStack_e8 = 0x709770;
      FUN_00878dfb();
    }
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_e8 = 0x709780;
  pwStack_e4 = (wchar_t *)FUN_00402bc3();
  if ((int)pwStack_e4 < 0) {
    iStack_e8 = 0x70978b;
    FUN_00878dfb();
  }
  pwStack_e4 = (wchar_t *)0x0;
  iStack_e8 = 0;
  puStack_ec = (undefined1 *)0x709795;
  puStack_f0 = (undefined1 *)FUN_00411641();
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_ec;
  puStack_f4 = (undefined1 *)0x7097a1;
  FUN_004033a1();
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_f4 = (undefined1 *)0x7097b1;
  FUN_0040263d();
  puStack_f4 = (undefined1 *)0x7097b8;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  puStack_ec = (undefined1 *)0x7097c3;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0x20);
  iStack_e8 = 0x7097d5;
  pwStack_e4 = (wchar_t *)FUN_00404b30();
  if (((int)pwStack_e4 < 0) && (pwStack_e4 != (wchar_t *)0x80004002)) {
    iStack_e8 = 0x7097e6;
    FUN_00878dfb();
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_e8 = 0x7097f3;
  iVar1 = FUN_00402bc3();
  pwVar5 = pwStack_e4;
  if (iVar1 < 0) {
    iStack_e8 = 0x7097fe;
    pwStack_e4 = (wchar_t *)iVar1;
    FUN_00878dfb();
    pwVar5 = (wchar_t *)extraout_ECX_02;
  }
  pwStack_e4 = (wchar_t *)0x0;
  iStack_e8 = 0;
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_ec;
  puStack_f0 = &DAT_00964310;
  puStack_f4 = (undefined1 *)0x709811;
  puStack_ec = (undefined1 *)pwVar5;
  FUN_004033a1();
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_f4 = (undefined1 *)0x709824;
  FUN_0040263d();
  puStack_f4 = (undefined1 *)0x70982b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  puStack_ec = (undefined1 *)0x709836;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar3;
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0x20);
  iStack_e8 = 0x709845;
  pwStack_e4 = (wchar_t *)FUN_00404b30();
  if (((int)pwStack_e4 < 0) && (pwStack_e4 != (wchar_t *)0x80004002)) {
    iStack_e8 = 0x709856;
    FUN_00878dfb();
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_e8 = 0x709863;
  iVar1 = FUN_00402bc3();
  pwVar5 = pwStack_e4;
  if (iVar1 < 0) {
    iStack_e8 = 0x70986e;
    pwStack_e4 = (wchar_t *)iVar1;
    FUN_00878dfb();
    pwVar5 = (wchar_t *)extraout_ECX_03;
  }
  pwStack_e4 = (wchar_t *)0x0;
  iStack_e8 = 0;
  *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_ec;
  puStack_f0 = &DAT_00964310;
  puStack_f4 = (undefined1 *)0x70987c;
  puStack_ec = (undefined1 *)pwVar5;
  FUN_004033a1();
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  puStack_f4 = (undefined1 *)0x70988c;
  FUN_0040263d();
  puStack_f4 = (undefined1 *)0x709893;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  puStack_ec = (undefined1 *)0x70989e;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    pwStack_e4 = (wchar_t *)(unaff_EBP + -0x20);
    iStack_e8 = 0x7098b4;
    pwStack_e4 = (wchar_t *)FUN_0041a581();
    if (((int)pwStack_e4 < 0) && (pwStack_e4 != (wchar_t *)0x80004002)) {
      iStack_e8 = 0x7098c5;
      FUN_00878dfb();
    }
  }
  pwStack_e4 = (wchar_t *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_e8 = 0x7098d2;
  pwStack_e4 = (wchar_t *)FUN_00402bc3();
  if ((int)pwStack_e4 < 0) {
    iStack_e8 = 0x7098dd;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    pwStack_e4 = (wchar_t *)0x80004003;
    iStack_e8 = 0x7098ed;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      pwStack_e4 = (wchar_t *)0x80004003;
      iStack_e8 = 0x7098f8;
      FUN_00878dfb();
    }
  }
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    pwStack_e4 = (wchar_t *)0x80004003;
    iStack_e8 = 0x709908;
    FUN_00878dfb();
  }
  pwStack_e4 = (wchar_t *)0x0;
  iStack_e8 = 0;
  puStack_ec = (undefined1 *)0x1;
  puStack_f0 = (undefined1 *)0xa;
  puStack_f4 = (undefined1 *)0x709918;
  puStack_f4 = (undefined1 *)FUN_0040e53d();
  uVar3 = FUN_0040e48b();
  uVar4 = FUN_0040e53d(uVar3);
  FUN_0081420c(*(undefined4 *)(unaff_EBP + 0x18),(*(int *)(unaff_EBP + 0x1c) - (uVar4 >> 1)) + -1,
               uVar3);
  iStack_e8 = DAT_00980b4c;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    iStack_e8 = *(int *)(unaff_EBP + -0x1c);
  }
  pwStack_e4 = u_default_0096b498;
  puStack_ec = (undefined1 *)0x70995e;
  iVar1 = FUN_0087b08f();
  if (iVar1 == 0) {
    extraout_ECX[0x15f] = 1;
  }
  pwStack_e4 = *(wchar_t **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (pwStack_e4 != (wchar_t *)0x0) {
    iStack_e8 = 0x70997f;
    (**(code **)(*(int *)pwStack_e4 + 8))();
  }
  pwStack_e4 = *(wchar_t **)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (pwStack_e4 != (wchar_t *)0x0) {
    iStack_e8 = 0x709990;
    (**(code **)(*(int *)pwStack_e4 + 8))();
  }
  pwStack_e4 = *(wchar_t **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (pwStack_e4 != (wchar_t *)0x0) {
    iStack_e8 = 0x7099a1;
    (**(code **)(*(int *)pwStack_e4 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  pwStack_e4 = 
  L"䖋㯔웃ﱅ琌謆倈凿謈\xe845쌻䗆ۼٴࢋｐࡑ䶍蠈ﱝᯨￄ菿ﱍ㧿ᑝॴ赓၍쯨\x18謀\xf44dꖍ４\xffff譟廆襤\r"
  ;
  FUN_00402676();
  pwStack_e4 = *(wchar_t **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (pwStack_e4 != (wchar_t *)0x0) {
    iStack_e8 = 0x7099be;
    (**(code **)(*(int *)pwStack_e4 + 8))();
  }
  pwStack_e4 = *(wchar_t **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (pwStack_e4 != (wchar_t *)0x0) {
    iStack_e8 = 0x7099cf;
    (**(code **)(*(int *)pwStack_e4 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pwStack_e4 = L"䶃￼崹琔匉䶍\xe810ᣋ";
  FUN_00705df5();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    pwStack_e4 = (wchar_t *)0x0;
    iStack_e8 = 0x7099ec;
    FUN_0070b2b7();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


