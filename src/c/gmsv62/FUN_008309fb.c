/* FUN_008309fb - 0x008309fb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008309fb(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_88;
  int iStack_84;
  undefined4 *puVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x2b40) = 0;
  *(undefined4 *)(extraout_ECX + 0x2cac) = 0;
  *(undefined4 *)(extraout_ECX + 4) = 1;
  iStack_84 = 0x830a33;
  _memset((void *)(extraout_ECX + 0x2b44),0,0x12a);
  FUN_0083de8c();
  FUN_0083dcc1();
  FUN_0083dcf4();
  FUN_0083dd27();
  FUN_0083dd5a();
  FUN_0083dd8d();
  FUN_0083ddc0();
  FUN_0083ddf3();
  FUN_0083de26();
  FUN_0083de59();
  FUN_0083dc78();
  FUN_0068472b();
  FUN_006619ae();
  FUN_0045e3a0();
  FUN_0045e3a0();
  FUN_0045e3a0();
  FUN_0045e3a0();
  *(undefined4 *)(extraout_ECX + 0x3114) = 0;
  *(undefined4 *)(extraout_ECX + 0x314c) = 0;
  FUN_0062fd7f();
  *(undefined4 *)(extraout_ECX + 0x208c) = 0;
  uVar1 = FUN_007d1e08();
  *(undefined4 *)(extraout_ECX + 0x2090) = uVar1;
  if (*(int *)(extraout_ECX + 0x3264) != 0) {
    FUN_00815de9();
    FUN_004f1617();
  }
  *(undefined4 *)(DAT_00973cd8 + 0x2c) = 1;
  FUN_0047af8c();
  if (DAT_00979268 == 0) {
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 != 0) {
      FUN_006d82b6();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_0083d937();
  FUN_0083d9c1();
  FUN_00705bdc();
  FUN_00748b82();
  FUN_0064159b();
  FUN_00679d22();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00471102();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  FUN_00687b24();
  FUN_0084a375();
  uVar1 = (*DAT_0097b704)();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  *(undefined4 *)(extraout_ECX + 0x208c) = 0;
  uVar1 = FUN_007d1e08();
  *(undefined4 *)(extraout_ECX + 0x2090) = uVar1;
  iVar2 = *(int *)(unaff_EBP + -0x10) + -300000;
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(int *)(extraout_ECX + 0x3118) = iVar2;
  FUN_005d10de();
  uVar1 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(extraout_ECX + 0x32c4) = 0;
  *(undefined4 *)(extraout_ECX + 0x3154) = uVar1;
  iVar2 = FUN_0059d9bc();
  if (iVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 13000) = 0;
  }
  else {
    *(undefined4 *)(extraout_ECX + 13000) = 1;
  }
  *(undefined4 *)(extraout_ECX + 0x32cc) = 0;
  if (*(int *)(extraout_ECX + 0x3318) == 0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    puStack_88 = &DAT_00980690;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
      puStack_88 = extraout_ECX_00;
    }
    iStack_84 = unaff_EBP + -0x24;
    *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_88;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00679e4e(&puStack_88,0xa5b);
    iVar2 = unaff_EBP + -100;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
  }
  if (*(int *)(extraout_ECX + 0x331c) == 0) {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    puVar3 = &DAT_00980690;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      FUN_00878dfb();
      puVar3 = extraout_ECX_01;
    }
    iStack_84 = unaff_EBP + -0x44;
    *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_88;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_88 = puVar3;
    FUN_00679e4e(&puStack_88,0xae9);
    iVar2 = unaff_EBP + -0x74;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uVar1 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
  }
  if ((*(int *)(extraout_ECX + 0x2b40) != 0) && (DAT_0097beec == 0)) {
    iVar2 = FUN_0047ca6b();
    if (iVar2 != 0) {
      FUN_007823df();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


