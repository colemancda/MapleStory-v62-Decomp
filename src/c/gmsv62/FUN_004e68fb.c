/* FUN_004e68fb - 0x004e68fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e68fb(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  wchar_t *pwStack_4c;
  int iStack_48;
  int *piStack_44;
  
  FUN_00879bb8();
  piStack_44 = (int *)0x0;
  iStack_48 = 0;
  *(wchar_t ***)(unaff_EBP + -0x20) = &pwStack_4c;
  FUN_00679e4e(&pwStack_4c,0x3b4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = unaff_EBP + -0x30;
  FUN_0040263d(iVar1);
  FUN_004048a4(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  pwStack_4c = (wchar_t *)0x4e694e;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    piStack_44 = (int *)(unaff_EBP + -0x18);
    iStack_48 = 0x4e6964;
    piStack_44 = (int *)FUN_00404b30();
    if (((int)piStack_44 < 0) && (piStack_44 != (int *)0x80004002)) {
      iStack_48 = 0x4e6975;
      FUN_00878dfb();
    }
  }
  piStack_44 = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_48 = 0x4e6982;
  iVar1 = FUN_00402bc3();
  iStack_48 = (int)piStack_44;
  if (iVar1 < 0) {
    iStack_48 = 0x4e698d;
    piStack_44 = (int *)iVar1;
    FUN_00878dfb();
    iStack_48 = extraout_ECX_00;
  }
  piStack_44 = (int *)0x0;
  *(int **)(unaff_EBP + -0x20) = &iStack_48;
  pwStack_4c = (wchar_t *)0x6cc;
  FUN_00679e4e(&iStack_48);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_48 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pwStack_4c = L"螉Ĉ";
  uVar2 = FUN_00412550();
  *(undefined4 *)(extraout_ECX + 0x108) = uVar2;
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_44 = (int *)FUN_00402bc3();
  if ((int)piStack_44 < 0) {
    iStack_48 = 0x4e69e2;
    FUN_00878dfb();
  }
  piStack_44 = (int *)0x0;
  *(int **)(unaff_EBP + -0x20) = &iStack_48;
  pwStack_4c = (wchar_t *)0xa4f;
  FUN_00679e4e(&iStack_48);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_48 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  pwStack_4c = (wchar_t *)0x4e6a17;
  iVar1 = FUN_00412550();
  *(uint *)(extraout_ECX + 0x11c) = (uint)(iVar1 != 0);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_44 = (int *)FUN_00402bc3();
  if ((int)piStack_44 < 0) {
    iStack_48 = 0x4e6a3d;
    FUN_00878dfb();
  }
  piStack_44 = (int *)0x0;
  *(int **)(unaff_EBP + -0x20) = &iStack_48;
  pwStack_4c = (wchar_t *)0xca1;
  FUN_00679e4e(&iStack_48);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_48 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  pwStack_4c = (wchar_t *)0x4e6a72;
  iVar1 = FUN_00412550();
  *(uint *)(extraout_ECX + 0x120) = (uint)(iVar1 != 0);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_44 = (int *)FUN_00402bc3();
  if ((int)piStack_44 < 0) {
    iStack_48 = 0x4e6a98;
    FUN_00878dfb();
  }
  piStack_44 = (int *)0x0;
  *(int **)(unaff_EBP + -0x20) = &iStack_48;
  pwStack_4c = (wchar_t *)0xa6d;
  FUN_00679e4e(&iStack_48);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_48 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  pwStack_4c = (wchar_t *)0x4e6acd;
  iVar1 = FUN_00412550();
  *(uint *)(extraout_ECX + 0x124) = (uint)(iVar1 != 0);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_44 = (int *)FUN_00402bc3();
  if ((int)piStack_44 < 0) {
    iStack_48 = 0x4e6af3;
    FUN_00878dfb();
  }
  piStack_44 = (int *)0x0;
  *(int **)(unaff_EBP + -0x20) = &iStack_48;
  pwStack_4c = (wchar_t *)0xb54;
  FUN_00679e4e(&iStack_48);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_48 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  pwStack_4c = (wchar_t *)0x4e6b28;
  iVar1 = FUN_00412550();
  *(uint *)(extraout_ECX + 0x128) = (uint)(iVar1 != 0);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_44 = (int *)FUN_00402bc3();
  if ((int)piStack_44 < 0) {
    iStack_48 = 0x4e6b4e;
    FUN_00878dfb();
  }
  piStack_44 = (int *)0x3b9ac9ff;
  *(int **)(unaff_EBP + -0x20) = &iStack_48;
  pwStack_4c = u_forcedReturn_00964dcc;
  FUN_004033a1();
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_48 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  pwStack_4c = (wchar_t *)0x4e6b85;
  iVar1 = FUN_00412550();
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(uint *)(extraout_ECX + 300) = (uint)(iVar1 != 999999999);
  piStack_44 = (int *)FUN_00402bc3();
  if ((int)piStack_44 < 0) {
    iStack_48 = 0x4e6bac;
    FUN_00878dfb();
  }
  piStack_44 = (int *)&DAT_0097812c;
  *(int **)(unaff_EBP + -0x20) = &iStack_48;
  pwStack_4c = (wchar_t *)0x674;
  FUN_00679e4e(&iStack_48);
  pwStack_4c = (wchar_t *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d();
  iStack_48 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  pwStack_4c = 
  L"斃ì奙ｪ赐\xec4d퓨\xf318跿쁅왐ﱅ\xe813뿀\xfff1삅絙倆\xede8㤡謀\xec45삅㭴荦8㕴ꑨ\f贀\xe445譐\xe8ceㅛ\x19痿诬倀잁Ĵ"
  ;
  iStack_48 = FUN_004343c5();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  piStack_44 = (int *)0xffffffff;
  pwStack_4c = L"䖍僀䗆ᏼ샨\xf1bf藿姀ٽ\xe850⇭9䖋藬瓀昻㢃琀栵ತ";
  FUN_004184ca();
  piStack_44 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_48 = 0x4e6c03;
  piStack_44 = (int *)FUN_00402bc3();
  if ((int)piStack_44 < 0) {
    iStack_48 = 0x4e6c0e;
    FUN_00878dfb();
  }
  if ((*(short **)(unaff_EBP + -0x14) != (short *)0x0) && (**(short **)(unaff_EBP + -0x14) != 0)) {
    piStack_44 = (int *)0xca4;
    iStack_48 = unaff_EBP + -0x1c;
    pwStack_4c = L"痿诬倀잁Ĵ";
    iStack_48 = FUN_00679d86();
    piStack_44 = *(int **)(unaff_EBP + -0x14);
    iStack_48 = *(int *)iStack_48;
    pwStack_4c = (wchar_t *)(extraout_ECX + 0x134);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    piStack_44 = (int *)0x4e6c50;
    FUN_00402676();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_44 = (int *)0x4e6c5c;
  FUN_00402676();
  piStack_44 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_44 != (int *)0x0) {
    iStack_48 = 0x4e6c6d;
    (**(code **)(*piStack_44 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


